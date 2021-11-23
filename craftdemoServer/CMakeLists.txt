cmake_minimum_required( VERSION 3.1 )

project( craftdemoServer )

find_package(gRPC CONFIG REQUIRED)

find_package( Protobuf REQUIRED )

add_executable( server src/server.cc proto/PersonalInfo.grpc.pb.cc proto/PersonalInfo.pb.cc)

target_link_libraries( server PRIVATE gRPC::grpc++ gRPC::grpc++_reflection gRPC::gpr gRPC::grpc gRPC::grpc++ protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite )