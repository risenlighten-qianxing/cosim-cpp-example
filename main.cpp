#include <iostream>
#include <memory>
#include <string>
#include <grpcpp/grpcpp.h>
#include "risenlighten/lasvsim/process_task/api/cosim/v1/simulation.pb.h"
#include "risenlighten/lasvsim/process_task/api/cosim/v1/simulation.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using risenlighten::lasvsim::process_task::api::cosim::v1::Cosim;
using risenlighten::lasvsim::process_task::api::cosim::v1::StartSimulationReq;
using risenlighten::lasvsim::process_task::api::cosim::v1::GetVehicleReq;
using risenlighten::lasvsim::process_task::api::cosim::v1::SetVehicleControlReq;
using risenlighten::lasvsim::process_task::api::cosim::v1::NextStepReq;
using risenlighten::lasvsim::process_task::api::cosim::v1::GetResultsReq;

class SimulationClient {
 public:
  SimulationClient(std::shared_ptr<Channel> channel)
      : stub_(Cosim::NewStub(channel)) {}

  void Run() {
    std::string authorization = "Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1aWQiOjcsIm9pZCI6MTAyLCJuYW1lIjoi572X5b-X5rSqIiwiaWRlbnRpdHkiOiJub3JtYWwiLCJwZXJtaXNzaW9ucyI6WyJ0YXNrLnRhc2sucHVibGljLkFDVElPTl9WSUVXIiwidGFzay50YXNrLnB1YmxpYy5BQ1RJT05fQ09QWSIsInRhc2sudGFzay5wdWJsaWMuQUNUSU9OX0RFTEVURSIsInRhc2sudGFzay5wdWJsaWMuQUNUSU9OX1JFUExBWSIsInRhc2sudGFzay5wdWJsaWMuQUNUSU9OX1JFUE9SVCIsInRhc2sudGFzay5wcml2YXRlLkFDVElPTl9WSUVXIiwidGFzay50YXNrLnByaXZhdGUuQUNUSU9OX0FERCIsInRhc2sudGFzay5wcml2YXRlLkFDVElPTl9DT1BZIiwidGFzay50YXNrLnByaXZhdGUuQUNUSU9OX0RFTEVURSIsInRhc2sudGFzay5wcml2YXRlLkFDVElPTl9SRVBMQVkiLCJ0YXNrLnRhc2sucHJpdmF0ZS5BQ1RJT05fUkVQT1JUIiwidGFzay50YXNrLnBlcnNvbmFsLkFDVElPTl9WSUVXIiwidGFzay50YXNrLnBlcnNvbmFsLkFDVElPTl9ERUxFVEUiLCJ0YXNrLnRhc2sucGVyc29uYWwuQUNUSU9OX1JFUExBWSIsInRhc2sudGFzay5wZXJzb25hbC5BQ1RJT05fUkVQT1JUIiwicmVzb3VyY2UudmVoaWNsZS5wdWJsaWMuQUNUSU9OX1ZJRVciLCJyZXNvdXJjZS52ZWhpY2xlLnB1YmxpYy5BQ1RJT05fVVBEQVRFIiwicmVzb3VyY2UudmVoaWNsZS5wdWJsaWMuQUNUSU9OX0RFTEVURSIsInJlc291cmNlLnZlaGljbGUucHVibGljLkFDVElPTl9VU0UiLCJyZXNvdXJjZS52ZWhpY2xlLnByaXZhdGUuQUNUSU9OX1ZJRVciLCJyZXNvdXJjZS52ZWhpY2xlLnByaXZhdGUuQUNUSU9OX0FERCIsInJlc291cmNlLnZlaGljbGUucHJpdmF0ZS5BQ1RJT05fVVBEQVRFIiwicmVzb3VyY2UudmVoaWNsZS5wcml2YXRlLkFDVElPTl9ERUxFVEUiLCJyZXNvdXJjZS52ZWhpY2xlLnByaXZhdGUuQUNUSU9OX1VTRSIsInJlc291cmNlLnZlaGljbGUucGVyc29uYWwuQUNUSU9OX1ZJRVciLCJyZXNvdXJjZS52ZWhpY2xlLnBlcnNvbmFsLkFDVElPTl9VUERBVEUiLCJyZXNvdXJjZS52ZWhpY2xlLnBlcnNvbmFsLkFDVElPTl9ERUxFVEUiLCJyZXNvdXJjZS5zZW5zb3IucHVibGljLkFDVElPTl9WSUVXIiwicmVzb3VyY2Uuc2Vuc29yLnB1YmxpYy5BQ1RJT05fVVBEQVRFIiwicmVzb3VyY2Uuc2Vuc29yLnB1YmxpYy5BQ1RJT05fREVMRVRFIiwicmVzb3VyY2Uuc2Vuc29yLnB1YmxpYy5BQ1RJT05fVVNFIiwicmVzb3VyY2Uuc2Vuc29yLnByaXZhdGUuQUNUSU9OX1ZJRVciLCJyZXNvdXJjZS5zZW5zb3IucHJpdmF0ZS5BQ1RJT05fQUREIiwicmVzb3VyY2Uuc2Vuc29yLnByaXZhdGUuQUNUSU9OX1VQREFURSIsInJlc291cmNlLnNlbnNvci5wcml2YXRlLkFDVElPTl9ERUxFVEUiLCJyZXNvdXJjZS5zZW5zb3IucHJpdmF0ZS5BQ1RJT05fVVNFIiwicmVzb3VyY2Uuc2Vuc29yLnBlcnNvbmFsLkFDVElPTl9WSUVXIiwicmVzb3VyY2Uuc2Vuc29yLnBlcnNvbmFsLkFDVElPTl9VUERBVEUiLCJyZXNvdXJjZS5zZW5zb3IucGVyc29uYWwuQUNUSU9OX0RFTEVURSIsInJlc291cmNlLm1hcC5wdWJsaWMuQUNUSU9OX1ZJRVciLCJyZXNvdXJjZS5tYXAucHVibGljLkFDVElPTl9VUERBVEUiLCJyZXNvdXJjZS5tYXAucHVibGljLkFDVElPTl9ERUxFVEUiLCJyZXNvdXJjZS5tYXAucHVibGljLkFDVElPTl9VU0UiLCJyZXNvdXJjZS5tYXAucHJpdmF0ZS5BQ1RJT05fVklFVyIsInJlc291cmNlLm1hcC5wcml2YXRlLkFDVElPTl9BREQiLCJyZXNvdXJjZS5tYXAucHJpdmF0ZS5BQ1RJT05fVVBEQVRFIiwicmVzb3VyY2UubWFwLnByaXZhdGUuQUNUSU9OX0RFTEVURSIsInJlc291cmNlLm1hcC5wcml2YXRlLkFDVElPTl9VU0UiLCJyZXNvdXJjZS5tYXAucGVyc29uYWwuQUNUSU9OX1ZJRVciLCJyZXNvdXJjZS5tYXAucGVyc29uYWwuQUNUSU9OX1VQREFURSIsInJlc291cmNlLm1hcC5wZXJzb25hbC5BQ1RJT05fREVMRVRFIiwicmVzb3VyY2Uuc2NlbmFyaW8ucHVibGljLkFDVElPTl9WSUVXIiwicmVzb3VyY2Uuc2NlbmFyaW8ucHVibGljLkFDVElPTl9DT1BZIiwicmVzb3VyY2Uuc2NlbmFyaW8ucHVibGljLkFDVElPTl9VUERBVEUiLCJyZXNvdXJjZS5zY2VuYXJpby5wdWJsaWMuQUNUSU9OX0RFTEVURSIsInJlc291cmNlLnNjZW5hcmlvLnB1YmxpYy5BQ1RJT05fVVNFIiwicmVzb3VyY2Uuc2NlbmFyaW8ucHJpdmF0ZS5BQ1RJT05fVklFVyIsInJlc291cmNlLnNjZW5hcmlvLnByaXZhdGUuQUNUSU9OX0NPUFkiLCJyZXNvdXJjZS5zY2VuYXJpby5wcml2YXRlLkFDVElPTl9VUERBVEUiLCJyZXNvdXJjZS5zY2VuYXJpby5wcml2YXRlLkFDVElPTl9ERUxFVEUiLCJyZXNvdXJjZS5zY2VuYXJpby5wcml2YXRlLkFDVElPTl9VU0UiLCJyZXNvdXJjZS5zY2VuYXJpby5wcml2YXRlLkFDVElPTl9BREQiLCJyZXNvdXJjZS5zY2VuYXJpby5wZXJzb25hbC5BQ1RJT05fVklFVyIsInJlc291cmNlLnNjZW5hcmlvLnBlcnNvbmFsLkFDVElPTl9VUERBVEUiLCJyZXNvdXJjZS5zY2VuYXJpby5wZXJzb25hbC5BQ1RJT05fREVMRVRFIiwicmVzb3VyY2UudHJhZmZpY19mbG93X2NvbmZpZy5wdWJsaWMuQUNUSU9OX1ZJRVciLCJyZXNvdXJjZS50cmFmZmljX2Zsb3dfY29uZmlnLnB1YmxpYy5BQ1RJT05fVVBEQVRFIiwicmVzb3VyY2UudHJhZmZpY19mbG93X2NvbmZpZy5wdWJsaWMuQUNUSU9OX0RFTEVURSIsInJlc291cmNlLnRyYWZmaWNfZmxvd19jb25maWcucHVibGljLkFDVElPTl9VU0UiLCJyZXNvdXJjZS50cmFmZmljX2Zsb3dfY29uZmlnLnByaXZhdGUuQUNUSU9OX1ZJRVciLCJyZXNvdXJjZS50cmFmZmljX2Zsb3dfY29uZmlnLnByaXZhdGUuQUNUSU9OX1VQREFURSIsInJlc291cmNlLnRyYWZmaWNfZmxvd19jb25maWcucHJpdmF0ZS5BQ1RJT05fREVMRVRFIiwicmVzb3VyY2UudHJhZmZpY19mbG93X2NvbmZpZy5wcml2YXRlLkFDVElPTl9VU0UiLCJyZXNvdXJjZS50cmFmZmljX2Zsb3dfY29uZmlnLnByaXZhdGUuQUNUSU9OX0FERCIsInJlc291cmNlLnRyYWZmaWNfZmxvd19jb25maWcucGVyc29uYWwuQUNUSU9OX1ZJRVciLCJyZXNvdXJjZS50cmFmZmljX2Zsb3dfY29uZmlnLnBlcnNvbmFsLkFDVElPTl9VUERBVEUiLCJyZXNvdXJjZS50cmFmZmljX2Zsb3dfY29uZmlnLnBlcnNvbmFsLkFDVElPTl9ERUxFVEUiXSwiaXNzIjoidXNlciIsInN1YiI6Ikxhc1ZTaW0iLCJleHAiOjE2OTEwNjYyMzQsIm5iZiI6MTY5MDk3OTgzNCwiaWF0IjoxNjkwOTc5ODM0LCJqdGkiOiI3In0.LADwF4Z185cIifjkj6YMFZWdjSQxGNlx4vD28ZUNB-A";
    // 创建一个上下文对
    ClientContext context;
    context.AddMetadata("authorization",authorization);

    // 调用 Start 方法
    StartSimulationReq request;
    request.set_task_id(4116);
    request.set_record_id(2145);
    risenlighten::lasvsim::process_task::api::cosim::v1::StartSimulationRes response;
    Status status = stub_->Start(&context, request, &response);
    if (CheckError(status, response.error())) {
        return;
    }

    while (true) {
        // 获取自车以及自车的周车列表
        GetVehicleReq get_vehicle_request;
        get_vehicle_request.set_simulation_id(response.simulation_id());
        get_vehicle_request.set_vehicle_id("ego");
        risenlighten::lasvsim::process_task::api::cosim::v1::GetVehicleRes vehicle_response;
        ClientContext getVehicleCtx;
        getVehicleCtx.AddMetadata("authorization",authorization);

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
        risenlighten::lasvsim::process_task::api::cosim::v1::SetVehicleControlRes vehicle_control_response;
        ClientContext setVehicleControlCtx;
        setVehicleControlCtx.AddMetadata("authorization",authorization);

        status = stub_->SetVehicleControl(&setVehicleControlCtx, set_control_request, &vehicle_control_response);
        if (CheckError(status, vehicle_control_response.error())) {
            return;
        }

        // 执行仿真的下一步
        NextStepReq next_step_request;
        next_step_request.set_simulation_id(response.simulation_id());
        risenlighten::lasvsim::process_task::api::cosim::v1::NextStepRes step_response;
        ClientContext nextStepCtx;
        nextStepCtx.AddMetadata("authorization",authorization);

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
    risenlighten::lasvsim::process_task::api::cosim::v1::GetResultsRes results_response;
    ClientContext getResultsCtx;
    getResultsCtx.AddMetadata("authorization",authorization);
    
    status = stub_->GetResults(&getResultsCtx, get_results_request, &results_response);
    if (!CheckError(status, results_response.error())) { // 获取成功
        // std::cout << "仿真结束，结果：" << results_response.results() << std::endl;
    }
  }

 private:
  std::unique_ptr<Cosim::Stub> stub_;
  bool CheckError(const Status& status,risenlighten::lasvsim::process_task::api::cosim::v1::ErrorMsg errmsg) {
    if (errmsg.code() != 0) {
        std::cerr << "Error: " << errmsg.msg() << std::endl;
        return true;
    }
    return false;
  }
};

int main(int argc, char** argv) {
  SimulationClient client(
      grpc::CreateChannel("qianxing-grpc.risenlighten.com:80", grpc::InsecureChannelCredentials()));
  client.Run();
  return 0;
}
