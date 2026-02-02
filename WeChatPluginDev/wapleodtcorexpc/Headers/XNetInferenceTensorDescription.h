//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class XNetInferenceTensorDataType, XNetInferenceTensorShape;

@interface XNetInferenceTensorDescription : NSObject
{
    struct TensorDesc _underlying;
}

- (id).cxx_construct;
@property(readonly, nonatomic) long long stride;
@property(readonly, nonatomic) XNetInferenceTensorDataType *dataType;
@property(readonly, nonatomic) XNetInferenceTensorShape *shape;
- (id)initWithShape:(id)arg1 dataType:(id)arg2;
- (const void *)underlying;
- (id)initWithUnderlying:(const void *)arg1;

@end

