//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface XNetInferenceModelDescription : NSObject
{
    struct ModelDesc _underlying;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *outputs;
@property(readonly, nonatomic) NSDictionary *inputs;
- (id)initWithInputs:(id)arg1 outputs:(id)arg2;
- (const void *)underlying;
- (id)initWithUnderlying:(const void *)arg1;

@end

