//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MTLAccelerationStructurePassDescriptor, MTLBlitPassDescriptor, MTLComputePassDescriptor, MTLRenderPassDescriptor, MTLResourceStatePassDescriptor, NSError, NSString;
@protocol MTLAccelerationStructureCommandEncoder, MTLBlitCommandEncoder, MTLCommandQueue, MTLComputeCommandEncoder, MTLDevice, MTLDrawable, MTLEvent, MTLLogContainer, MTLParallelRenderCommandEncoder, MTLRenderCommandEncoder, MTLResourceStateCommandEncoder;

@protocol MTLCommandBuffer <NSObject>
@property(readonly) NSError *error;
@property(readonly) unsigned long long status;
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) id <MTLLogContainer> logs;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
@property(copy) NSString *label;
@property(readonly) unsigned long long errorOptions;
@property(readonly) _Bool retainedReferences;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly) id <MTLDevice> device;
- (void)popDebugGroup;
- (void)pushDebugGroup:(NSString *)arg1;
- (id <MTLAccelerationStructureCommandEncoder>)accelerationStructureCommandEncoderWithDescriptor:(MTLAccelerationStructurePassDescriptor *)arg1;
- (id <MTLAccelerationStructureCommandEncoder>)accelerationStructureCommandEncoder;
- (id <MTLResourceStateCommandEncoder>)resourceStateCommandEncoderWithDescriptor:(MTLResourceStatePassDescriptor *)arg1;
- (id <MTLResourceStateCommandEncoder>)resourceStateCommandEncoder;
- (id <MTLParallelRenderCommandEncoder>)parallelRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (void)encodeSignalEvent:(id <MTLEvent>)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id <MTLEvent>)arg1 value:(unsigned long long)arg2;
- (id <MTLComputeCommandEncoder>)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id <MTLComputeCommandEncoder>)computeCommandEncoder;
- (id <MTLBlitCommandEncoder>)blitCommandEncoderWithDescriptor:(MTLBlitPassDescriptor *)arg1;
- (id <MTLComputeCommandEncoder>)computeCommandEncoderWithDescriptor:(MTLComputePassDescriptor *)arg1;
- (id <MTLRenderCommandEncoder>)renderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (id <MTLBlitCommandEncoder>)blitCommandEncoder;
- (void)waitUntilCompleted;
- (void)addCompletedHandler:(void (^)(id <MTLCommandBuffer>))arg1;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id <MTLDrawable>)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id <MTLDrawable>)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id <MTLDrawable>)arg1;
- (void)addScheduledHandler:(void (^)(id <MTLCommandBuffer>))arg1;
- (void)commit;
- (void)enqueue;
@end

