#include <iostream>
#include <memory>
#include <fstream>
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
    std::string token = "";
    std::string authorization = "Bearer "+ token;
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
          std::cout << ">>>>>：" << std::endl;

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
    if (status.error_code() != 0) {
        std::cerr << "Status Error: " << status.error_message() << std::endl;
        return true;
    }
    if (errmsg.code() != 0) {
        std::cerr << "Error: " << errmsg.msg() << std::endl;
        return true;
    }
    return false;
  }
};

int main(int argc, char** argv) {
    // 加载 TLS 证书
    grpc::SslCredentialsOptions ssl_opts;
    ssl_opts.pem_root_certs = "-----BEGIN CERTIFICATE-----\nMIIGDjCCBPagAwIBAgIQA7w3jVAjIp1kl81IyNhYSjANBgkqhkiG9w0BAQsFADBu\nMQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3\nd3cuZGlnaWNlcnQuY29tMS0wKwYDVQQDEyRFbmNyeXB0aW9uIEV2ZXJ5d2hlcmUg\nRFYgVExTIENBIC0gRzIwHhcNMjMwOTA2MDAwMDAwWhcNMjQwOTA2MjM1OTU5WjAp\nMScwJQYDVQQDEx5xaWFueGluZy1ncnBjLnJpc2VubGlnaHRlbi5jb20wggEiMA0G\nCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC5rPIoBynQno7t7/rUrDcdeJzCf5VD\n98c6HjKmpFKZsLYLwsoxnX1virZO2a5bIkiCP4SFl+xVoJzxUNa6wfdZBVm+m80H\nsgRl04B3VtdCU5jCkI1FDDYfKT7a6Q0v39VBxlTnuWV4pP8yxaUp1AqaY4K2El6j\nJTlcZA61wovKl6bL7DYs74/xn9sZp1zuVWvrj+mcT9xFwCDXeSQ8AIM9ZZiGkltH\njouNZ5GPioBvdl+RxyxEPj9CKptGKfxqVAfqv56h1O/oTyfp1m0pMilSc9Mk8a/N\nnSuxZiE3O0PQA6E93V2fgcwDY8wV/lmZH3OFVmHWIfVAT1CLUdm1BBRJAgMBAAGj\nggLrMIIC5zAfBgNVHSMEGDAWgBR435GQX+7erPbFdevVTFVT7yRKtjAdBgNVHQ4E\nFgQUwwpTwxF/hWJuE0KTZIkMzTjuwawwKQYDVR0RBCIwIIIecWlhbnhpbmctZ3Jw\nYy5yaXNlbmxpZ2h0ZW4uY29tMA4GA1UdDwEB/wQEAwIFoDAdBgNVHSUEFjAUBggr\nBgEFBQcDAQYIKwYBBQUHAwIwPgYDVR0gBDcwNTAzBgZngQwBAgEwKTAnBggrBgEF\nBQcCARYbaHR0cDovL3d3dy5kaWdpY2VydC5jb20vQ1BTMIGABggrBgEFBQcBAQR0\nMHIwJAYIKwYBBQUHMAGGGGh0dHA6Ly9vY3NwLmRpZ2ljZXJ0LmNvbTBKBggrBgEF\nBQcwAoY+aHR0cDovL2NhY2VydHMuZGlnaWNlcnQuY29tL0VuY3J5cHRpb25FdmVy\neXdoZXJlRFZUTFNDQS1HMi5jcnQwCQYDVR0TBAIwADCCAXsGCisGAQQB1nkCBAIE\nggFrBIIBZwFlAHUA7s3QZNXbGs7FXLedtM0TojKHRny87N7DUUhZRnEftZsAAAGK\naKeB+QAABAMARjBEAiAOXjWdRbZsblcWa0Xml6/C6UVvGQNPB94c3S2HzjGazQIg\nAPusLdeiefPClL583WZj73H4aJPjd4evi70VrHYlHPEAdQBIsONr2qZHNA/lagL6\nnTDrHFIBy1bdLIHZu7+rOdiEcwAAAYpop4G7AAAEAwBGMEQCIE/Y2ydghwpVOp+B\nSPqqopQy1WJhkRelmmqQ6IfOY9IiAiBwjcMEzCgzmEFxeQ/SK2FVdtlPtAJSFLAN\nV1CU38CcfAB1ANq2v2s/tbYin5vCu1xr6HCRcWy7UYSFNL2kPTBI1/urAAABimin\ngWcAAAQDAEYwRAIgdpm1DhN2qMT/j1bUaV3NoRu61HDSalNev/VEWCopQW4CIHNH\n/URLIxHndub3JDoLSAXvObGWkroj9vxLTaZBB77OMA0GCSqGSIb3DQEBCwUAA4IB\nAQAkQCw8seUW/l5fN6Wy9gXz0JYvl18BhbbaY0yaurofQlh8+qkOB0w2xMELi+JO\nLcz/cJvQmd1pLTx4VvmNiZv2zgBwsXKzTPq9hPiwSpE48pvB/Sua340E1ZwJRqe3\nDOQMVbEi8Vn6VRO+sBzksImyj1830K9L/J7DHEhuxdXNMVQRETM+mLmspH5Ko9gK\nhysf4Tt90r494mgPp5+vpjzzzsxFEWgGbEVaKOBrogicQ4GFYm189rmc0lQfQ/dm\nZz4NklnDBjs+aWHaLQqdPHAqd1DH7Q8yh9ONvWYVirBAAoIPGmY+Qh8T6DJQkskA\nUHvl8r8jea6z0NfL9UBgpbf9\n-----END CERTIFICATE-----\n";
    auto credentials = grpc::SslCredentials(ssl_opts);
  SimulationClient client(
      grpc::CreateChannel("qianxing-grpc.risenlighten.com:443", credentials));
  client.Run();
  return 0;
}
