package com.assessment.craftdemo;

import static io.grpc.MethodDescriptor.generateFullMethodName;

/**
 */
@javax.annotation.Generated(
    value = "by gRPC proto compiler (version 1.42.1)",
    comments = "Source: PersonalInfo.proto")
@io.grpc.stub.annotations.GrpcGenerated
public final class PersonalInformationServiceGrpc {

  private PersonalInformationServiceGrpc() {}

  public static final String SERVICE_NAME = "PersonalInformationService";

  // Static method descriptors that strictly reflect the proto.
  private static volatile io.grpc.MethodDescriptor<com.assessment.craftdemo.PersonalInfoRequest,
      com.assessment.craftdemo.PersonalInfoReply> getSetInfoMethod;

  @io.grpc.stub.annotations.RpcMethod(
      fullMethodName = SERVICE_NAME + '/' + "SetInfo",
      requestType = com.assessment.craftdemo.PersonalInfoRequest.class,
      responseType = com.assessment.craftdemo.PersonalInfoReply.class,
      methodType = io.grpc.MethodDescriptor.MethodType.UNARY)
  public static io.grpc.MethodDescriptor<com.assessment.craftdemo.PersonalInfoRequest,
      com.assessment.craftdemo.PersonalInfoReply> getSetInfoMethod() {
    io.grpc.MethodDescriptor<com.assessment.craftdemo.PersonalInfoRequest, com.assessment.craftdemo.PersonalInfoReply> getSetInfoMethod;
    if ((getSetInfoMethod = PersonalInformationServiceGrpc.getSetInfoMethod) == null) {
      synchronized (PersonalInformationServiceGrpc.class) {
        if ((getSetInfoMethod = PersonalInformationServiceGrpc.getSetInfoMethod) == null) {
          PersonalInformationServiceGrpc.getSetInfoMethod = getSetInfoMethod =
              io.grpc.MethodDescriptor.<com.assessment.craftdemo.PersonalInfoRequest, com.assessment.craftdemo.PersonalInfoReply>newBuilder()
              .setType(io.grpc.MethodDescriptor.MethodType.UNARY)
              .setFullMethodName(generateFullMethodName(SERVICE_NAME, "SetInfo"))
              .setSampledToLocalTracing(true)
              .setRequestMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  com.assessment.craftdemo.PersonalInfoRequest.getDefaultInstance()))
              .setResponseMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  com.assessment.craftdemo.PersonalInfoReply.getDefaultInstance()))
              .setSchemaDescriptor(new PersonalInformationServiceMethodDescriptorSupplier("SetInfo"))
              .build();
        }
      }
    }
    return getSetInfoMethod;
  }

  /**
   * Creates a new async stub that supports all call types for the service
   */
  public static PersonalInformationServiceStub newStub(io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<PersonalInformationServiceStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<PersonalInformationServiceStub>() {
        @java.lang.Override
        public PersonalInformationServiceStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new PersonalInformationServiceStub(channel, callOptions);
        }
      };
    return PersonalInformationServiceStub.newStub(factory, channel);
  }

  /**
   * Creates a new blocking-style stub that supports unary and streaming output calls on the service
   */
  public static PersonalInformationServiceBlockingStub newBlockingStub(
      io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<PersonalInformationServiceBlockingStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<PersonalInformationServiceBlockingStub>() {
        @java.lang.Override
        public PersonalInformationServiceBlockingStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new PersonalInformationServiceBlockingStub(channel, callOptions);
        }
      };
    return PersonalInformationServiceBlockingStub.newStub(factory, channel);
  }

  /**
   * Creates a new ListenableFuture-style stub that supports unary calls on the service
   */
  public static PersonalInformationServiceFutureStub newFutureStub(
      io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<PersonalInformationServiceFutureStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<PersonalInformationServiceFutureStub>() {
        @java.lang.Override
        public PersonalInformationServiceFutureStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new PersonalInformationServiceFutureStub(channel, callOptions);
        }
      };
    return PersonalInformationServiceFutureStub.newStub(factory, channel);
  }

  /**
   */
  public static abstract class PersonalInformationServiceImplBase implements io.grpc.BindableService {

    /**
     */
    public void setInfo(com.assessment.craftdemo.PersonalInfoRequest request,
        io.grpc.stub.StreamObserver<com.assessment.craftdemo.PersonalInfoReply> responseObserver) {
      io.grpc.stub.ServerCalls.asyncUnimplementedUnaryCall(getSetInfoMethod(), responseObserver);
    }

    @java.lang.Override public final io.grpc.ServerServiceDefinition bindService() {
      return io.grpc.ServerServiceDefinition.builder(getServiceDescriptor())
          .addMethod(
            getSetInfoMethod(),
            io.grpc.stub.ServerCalls.asyncUnaryCall(
              new MethodHandlers<
                com.assessment.craftdemo.PersonalInfoRequest,
                com.assessment.craftdemo.PersonalInfoReply>(
                  this, METHODID_SET_INFO)))
          .build();
    }
  }

  /**
   */
  public static final class PersonalInformationServiceStub extends io.grpc.stub.AbstractAsyncStub<PersonalInformationServiceStub> {
    private PersonalInformationServiceStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected PersonalInformationServiceStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new PersonalInformationServiceStub(channel, callOptions);
    }

    /**
     */
    public void setInfo(com.assessment.craftdemo.PersonalInfoRequest request,
        io.grpc.stub.StreamObserver<com.assessment.craftdemo.PersonalInfoReply> responseObserver) {
      io.grpc.stub.ClientCalls.asyncUnaryCall(
          getChannel().newCall(getSetInfoMethod(), getCallOptions()), request, responseObserver);
    }
  }

  /**
   */
  public static final class PersonalInformationServiceBlockingStub extends io.grpc.stub.AbstractBlockingStub<PersonalInformationServiceBlockingStub> {
    private PersonalInformationServiceBlockingStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected PersonalInformationServiceBlockingStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new PersonalInformationServiceBlockingStub(channel, callOptions);
    }

    /**
     */
    public com.assessment.craftdemo.PersonalInfoReply setInfo(com.assessment.craftdemo.PersonalInfoRequest request) {
      return io.grpc.stub.ClientCalls.blockingUnaryCall(
          getChannel(), getSetInfoMethod(), getCallOptions(), request);
    }
  }

  /**
   */
  public static final class PersonalInformationServiceFutureStub extends io.grpc.stub.AbstractFutureStub<PersonalInformationServiceFutureStub> {
    private PersonalInformationServiceFutureStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected PersonalInformationServiceFutureStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new PersonalInformationServiceFutureStub(channel, callOptions);
    }

    /**
     */
    public com.google.common.util.concurrent.ListenableFuture<com.assessment.craftdemo.PersonalInfoReply> setInfo(
        com.assessment.craftdemo.PersonalInfoRequest request) {
      return io.grpc.stub.ClientCalls.futureUnaryCall(
          getChannel().newCall(getSetInfoMethod(), getCallOptions()), request);
    }
  }

  private static final int METHODID_SET_INFO = 0;

  private static final class MethodHandlers<Req, Resp> implements
      io.grpc.stub.ServerCalls.UnaryMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.ServerStreamingMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.ClientStreamingMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.BidiStreamingMethod<Req, Resp> {
    private final PersonalInformationServiceImplBase serviceImpl;
    private final int methodId;

    MethodHandlers(PersonalInformationServiceImplBase serviceImpl, int methodId) {
      this.serviceImpl = serviceImpl;
      this.methodId = methodId;
    }

    @java.lang.Override
    @java.lang.SuppressWarnings("unchecked")
    public void invoke(Req request, io.grpc.stub.StreamObserver<Resp> responseObserver) {
      switch (methodId) {
        case METHODID_SET_INFO:
          serviceImpl.setInfo((com.assessment.craftdemo.PersonalInfoRequest) request,
              (io.grpc.stub.StreamObserver<com.assessment.craftdemo.PersonalInfoReply>) responseObserver);
          break;
        default:
          throw new AssertionError();
      }
    }

    @java.lang.Override
    @java.lang.SuppressWarnings("unchecked")
    public io.grpc.stub.StreamObserver<Req> invoke(
        io.grpc.stub.StreamObserver<Resp> responseObserver) {
      switch (methodId) {
        default:
          throw new AssertionError();
      }
    }
  }

  private static abstract class PersonalInformationServiceBaseDescriptorSupplier
      implements io.grpc.protobuf.ProtoFileDescriptorSupplier, io.grpc.protobuf.ProtoServiceDescriptorSupplier {
    PersonalInformationServiceBaseDescriptorSupplier() {}

    @java.lang.Override
    public com.google.protobuf.Descriptors.FileDescriptor getFileDescriptor() {
      return com.assessment.craftdemo.PersonalInfo.getDescriptor();
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.ServiceDescriptor getServiceDescriptor() {
      return getFileDescriptor().findServiceByName("PersonalInformationService");
    }
  }

  private static final class PersonalInformationServiceFileDescriptorSupplier
      extends PersonalInformationServiceBaseDescriptorSupplier {
    PersonalInformationServiceFileDescriptorSupplier() {}
  }

  private static final class PersonalInformationServiceMethodDescriptorSupplier
      extends PersonalInformationServiceBaseDescriptorSupplier
      implements io.grpc.protobuf.ProtoMethodDescriptorSupplier {
    private final String methodName;

    PersonalInformationServiceMethodDescriptorSupplier(String methodName) {
      this.methodName = methodName;
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.MethodDescriptor getMethodDescriptor() {
      return getServiceDescriptor().findMethodByName(methodName);
    }
  }

  private static volatile io.grpc.ServiceDescriptor serviceDescriptor;

  public static io.grpc.ServiceDescriptor getServiceDescriptor() {
    io.grpc.ServiceDescriptor result = serviceDescriptor;
    if (result == null) {
      synchronized (PersonalInformationServiceGrpc.class) {
        result = serviceDescriptor;
        if (result == null) {
          serviceDescriptor = result = io.grpc.ServiceDescriptor.newBuilder(SERVICE_NAME)
              .setSchemaDescriptor(new PersonalInformationServiceFileDescriptorSupplier())
              .addMethod(getSetInfoMethod())
              .build();
        }
      }
    }
    return result;
  }
}
