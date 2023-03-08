# Copyright 2018 gRPC authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# cmake build file for C++ helloworld example.
# Assumes protobuf and gRPC have been installed using cmake.
# See cmake_externalproject/CMakeLists.txt for all-in-one cmake build
# that automatically builds all the dependencies before building helloworld.

cmake_minimum_required(VERSION 3.8)

project(HelloWorld C CXX)

include(./cmake/common.cmake)

# Proto file
get_filename_component(hw_proto "./protos/risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/hdmap.proto" ABSOLUTE)
get_filename_component(hw2_proto "./protos/risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/simulation.proto" ABSOLUTE)
get_filename_component(hw_proto_path "${hw_proto}" PATH)
get_filename_component(hw2_proto_path "${hw2_proto}" PATH)

# Generated sources
set(hw_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/hdmap.pb.cc")
set(hw_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/hdmap.pb.h")
set(hw_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/hdmap.grpc.pb.cc")
set(hw_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/hdmap.grpc.pb.h")
# Generated sources
set(hw2_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/simulation.pb.cc")
set(hw2_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/simulation.pb.h")
set(hw2_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/simulation.grpc.pb.cc")
set(hw2_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/risenlighten/lasvsim/simulation_task_kratos/api/simulation/v2/simulation.grpc.pb.h")
add_custom_command(
      OUTPUT "${hw_proto_srcs}" "${hw_proto_hdrs}" "${hw_grpc_srcs}" "${hw_grpc_hdrs}" "${hw2_proto_srcs}" "${hw2_proto_hdrs}" "${hw2_grpc_srcs}" "${hw2_grpc_hdrs}"
      COMMAND ${_PROTOBUF_PROTOC}
      ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        --proto_path "/Users/sq_luozhihong/data/temp/cpp_grpc/protos"
        -I "${hw_proto_path}"
        -I "${hw2_proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${hw_proto}" "${hw2_proto}"
      DEPENDS "${hw_proto}" "${hw2_proto}")

# Include generated *.pb.h files
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

# hw_grpc_proto
add_library(hw_grpc_proto
  ${hw_grpc_srcs}
  ${hw_grpc_hdrs}
  ${hw_proto_srcs}
  ${hw_proto_hdrs})
target_link_libraries(hw_grpc_proto
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF})
# hw_grpc_proto
add_library(hw2_grpc_proto
  ${hw2_grpc_srcs}
  ${hw2_grpc_hdrs}
  ${hw2_proto_srcs}
  ${hw2_proto_hdrs})
target_link_libraries(hw2_grpc_proto
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF})

# Targets greeter_[async_](client|server)
foreach(_target
  main)
  add_executable(${_target} "${_target}.cpp")
  target_link_libraries(${_target}
    hw_grpc_proto
    absl::flags
    absl::flags_parse
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF})
endforeach()
