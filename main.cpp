#include <iostream>
#include <memory>
#include <string>
#include <grpcpp/grpcpp.h>
#include "risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/simulation.pb.h"
#include "risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/simulation.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::SimulationV2;
using risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::StartSimulationReq;
using risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::GetVehicleReq;
using risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::SetVehicleControlReq;
using risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::NextStepReq;
using risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::GetResultsReq;

class SimulationClient {
 public:
  SimulationClient(std::shared_ptr<Channel> channel)
      : stub_(SimulationV2::NewStub(channel)) {}

  void Run() {
    // 创建一个上下文对象
    ClientContext context;

    // 调用 Start 方法
    StartSimulationReq request;
    risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::StartSimulationRes response;
    Status status = stub_->Start(&context, request, &response);
    if (CheckError(status, response.error())) {
        return;
    }

    while (true) {
        // 获取自车以及自车的周车列表
        GetVehicleReq get_vehicle_request;
        get_vehicle_request.set_simulation_id(response.simulation_id());
        get_vehicle_request.set_vehicle_id("ego");
        risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::GetVehicleRes vehicle_response;
        ClientContext getVehicleCtx;
        status = stub_->GetVehicle(&getVehicleCtx, get_vehicle_request, &vehicle_response);
        if (CheckError(status, vehicle_response.error())) {
            return;
        }

        // 发送车辆控制指令
        SetVehicleControlReq set_control_request;
        set_control_request.set_simulation_id(response.simulation_id());
        set_control_request.set_vehicle_id("ego");
        set_control_request.set_lon_acc(1);
        set_control_request.set_ste_wheel(1);
        risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::SetVehicleControlRes vehicle_control_response;
        ClientContext setVehicleControlCtx;
        status = stub_->SetVehicleControl(&setVehicleControlCtx, set_control_request, &vehicle_control_response);
        if (CheckError(status, vehicle_control_response.error())) {
            return;
        }

        // 执行仿真的下一步
        NextStepReq next_step_request;
        next_step_request.set_simulation_id(response.simulation_id());
        risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::NextStepRes step_response;
        ClientContext nextStepCtx;
        status = stub_->NextStep(&nextStepCtx, next_step_request, &step_response);
        if (CheckError(status, step_response.error())) {
            std::cout << "仿真结束，状态：" << step_response.state().msg() << std::endl;
            return;
        }

        // 如果仿真已结束，则退出循环
        if (step_response.state().progress() < 0 || step_response.state().progress() >= 100) {
            std::cout << "仿真结束，状态：" << step_response.state().msg() << std::endl;
            break;
        }
    }

    // 获取仿真结果
    GetResultsReq get_results_request;
    get_results_request.set_simulation_id(response.simulation_id());
    risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::GetResultsRes results_response;
    ClientContext getResultsCtx;
    status = stub_->GetResults(&getResultsCtx, get_results_request, &results_response);
    if (!CheckError(status, results_response.error())) { // 获取成功
        // std::cout << "仿真结束，结果：" << results_response.results() << std::endl;
    }
  }

 private:
  std::unique_ptr<SimulationV2::Stub> stub_;
  bool CheckError(const Status& status,risenlighten::lasvsim::simulation_task_kratos::api::simulation::v2::ErrorMsg errmsg) {
    if (errmsg.code() != 0) {
        std::cerr << "Error: " << errmsg.msg() << std::endl;
        return true;
    }
    return false;
  }
};

int main(int argc, char** argv) {
  SimulationClient client(
      grpc::CreateChannel("localhost:9002", grpc::InsecureChannelCredentials()));
  client.Run();
  return 0;
}
