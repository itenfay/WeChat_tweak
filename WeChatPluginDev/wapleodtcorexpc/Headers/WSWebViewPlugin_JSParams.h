//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSDictionary;

@interface WSWebViewPlugin_JSParams
{
    MISSING_TYPE *dynamicParams;
    MISSING_TYPE *extReqParamDict;
}

- (void).cxx_destruct;
- (id)init;
- (void)setDynamicValue:(id)arg1 forKey:(id)arg2;
- (void)addExtReqParamFor:(id)arg1 value:(id)arg2;
- (id)mergeExtReqParamsWith:(id)arg1;
- (void)setPermanentExtReqParamsWith:(id)arg1;
- (void)renewExtReqParamsWith:(id)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
@property(nonatomic, copy) NSDictionary *dynamicParams;

@end

