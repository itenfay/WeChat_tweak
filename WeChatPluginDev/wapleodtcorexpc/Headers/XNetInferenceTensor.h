//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData, XNetInferenceTensorDataType, XNetInferenceTensorDescription, XNetInferenceTensorShape;

@interface XNetInferenceTensor : NSObject
{
    struct shared_ptr<xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>> _tensor;
    NSMutableData *_data;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void *)bufferPtr;
- (_Bool)setDataWithBufferPtr:(const void *)arg1 length:(unsigned int)arg2;
- (void)setObjects:(id)arg1;
- (id)objects;
- (id)objectAtIndexedSubscript:(long long)arg1;
@property(readonly, nonatomic) XNetInferenceTensorShape *shape;
@property(readonly, nonatomic) XNetInferenceTensorDataType *dataType;
@property(readonly, nonatomic) XNetInferenceTensorDescription *description;
- (id)initWithShape:(id)arg1 dataType:(id)arg2;
- (id)initWithDescription:(id)arg1;
- (const void *)underlying;
- (id)initWithUnderlying:(const void *)arg1;

@end

