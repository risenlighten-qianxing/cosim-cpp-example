# gRPC C++ Hello World Example
## grpc install
[grpc c++ quick start](https://grpc.io/docs/languages/cpp/quickstart/)
## build
```
mkdir -p cmake/build
pushd cmake/build
cmake -DCMAKE_PREFIX_PATH=$MY_INSTALL_DIR ../..
make -j 4

	wails build -debug -o lasvsim-windows-amd64.exe -platform windows/amd64 -tags sqlite
	wails build -debug -o lasvsim-windows-arm64.exe -platform windows/arm64 -tags sqlite
    darwin/amd64
    darwin/arm64
```