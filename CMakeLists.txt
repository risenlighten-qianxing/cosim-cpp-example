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

project(CPP_GRPC C CXX)

string(REGEX REPLACE "/$" "" WORKSPACE ${CMAKE_CURRENT_SOURCE_DIR})

include(./cmake/common.cmake)

# Manually add the proto files you want to process first
set(PRIORITY_PROTOS
    ${CMAKE_CURRENT_SOURCE_DIR}/protos/validate/validate.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/protos/google/api/http.proto
    ${CMAKE_CURRENT_SOURCE_DIR}/protos/openapi/v3/openapi.proto
    # path/to/your/priority_proto2.proto
    # Add more priority proto files here if needed
)

# Add the rest of the proto files with GLOB_RECURSE
file(GLOB_RECURSE REST_PROTOS ${CMAKE_CURRENT_SOURCE_DIR}/protos/*.proto)

# Exclude priority proto files from the REST_PROTOS list
list(REMOVE_ITEM REST_PROTOS ${PRIORITY_PROTOS})

# Concatenate the two lists to get the final PROTOS list
set(PROTOS ${PRIORITY_PROTOS} ${REST_PROTOS})

# file(GLOB_RECURSE PROTOS protos/*.proto)
foreach(PROTOFILE ${PROTOS})
  get_filename_component(FIL_WE ${PROTOFILE} NAME_WE)
  STRING(REGEX REPLACE "^${WORKSPACE}/protos/" "" RELATIVEPATH ${PROTOFILE}) # 移除字符串前缀
  string(REGEX REPLACE ".proto" "" RELATIVENAME ${RELATIVEPATH}) # 移除字符串后缀

  set(proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/${RELATIVENAME}.pb.cc")
  set(proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/${RELATIVENAME}.pb.h")
  set(grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/${RELATIVENAME}.grpc.pb.cc")
  set(grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/${RELATIVENAME}.grpc.pb.h")

  # 生成
  add_custom_command(
      OUTPUT "${proto_srcs}" "${proto_hdrs}" "${grpc_srcs}" "${grpc_hdrs}" 
      COMMAND ${_PROTOBUF_PROTOC}
      ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        --proto_path "${WORKSPACE}/protos"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${PROTOFILE}"
      DEPENDS "${PROTOFILE}")

  string(REGEX REPLACE "/" "_" LIB_NAME ${RELATIVENAME}) # 移除字符串后缀

  # add_executable后的target_link_libraries需要
  add_library(${LIB_NAME}
    ${grpc_srcs}
    ${grpc_hdrs}
    ${proto_srcs}
    ${proto_hdrs})
  target_link_libraries(${LIB_NAME}
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF})
endforeach()

# Include generated *.pb.h files
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

# Targets greeter_[async_](client|server)
foreach(_target
  main)
  add_executable(${_target} "${_target}.cpp")
  target_link_libraries(${_target}
    google_api_annotations
    google_api_client
    google_api_field_behavior
    google_api_http
    google_api_httpbody
    openapi_v3_annotations
    openapi_v3_openapi
    validate_validate
    risenlighten_lasvsim_process_task_api_cosim_v1_hdmap
    risenlighten_lasvsim_process_task_api_cosim_v1_simulation
    absl::flags
    absl::flags_parse
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF})
endforeach()
