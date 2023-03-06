cmake_minimum_required(VERSION 3.5.1)
project(grpc_demo)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Protobuf REQUIRED)
find_package(gRPC REQUIRED)

include_directories(/Users/sq_luozhihong/data/temp/grpc/include)
include_directories(/Users/sq_luozhihong/data/temp/cpp_grpc)

# protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS your_service.proto)
# grpc_generate_cpp(GRPC_SRCS GRPC_HDRS your_service.proto)

# add_executable(grpc_demo main.cpp ${PROTO_SRCS} ${GRPC_SRCS})

# target_link_libraries(grpc_demo gRPC::grpc++_unsecure gRPC::grpc++ protobuf::libprotobuf)
