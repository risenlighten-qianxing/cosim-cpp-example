# gRPC C++ Hello World Example
## grpc install
[grpc c++ quick start](https://grpc.io/docs/languages/cpp/quickstart/)
## build
```
mkdir -p cmake/build
pushd cmake/build
cmake -DCMAKE_PREFIX_PATH=$MY_INSTALL_DIR ../..
make -j 4
```