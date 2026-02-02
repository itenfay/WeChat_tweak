//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet;

@interface MMWebViewPlugin_WebApiControl
{
    unsigned int _curMinInJsapiFrequencyBase;
    NSMutableDictionary *_dictInvokeCountInMin;
    NSMutableDictionary *_dictJsapiFrequencyLimitCount;
    NSMutableSet *_setJsApiIndexForFrequnceLimit;
}

+ (_Bool)isJsApiCompatibileInChildMode:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *setJsApiIndexForFrequnceLimit; // @synthesize setJsApiIndexForFrequnceLimit=_setJsApiIndexForFrequnceLimit;
@property(retain, nonatomic) NSMutableDictionary *dictJsapiFrequencyLimitCount; // @synthesize dictJsapiFrequencyLimitCount=_dictJsapiFrequencyLimitCount;
@property(retain, nonatomic) NSMutableDictionary *dictInvokeCountInMin; // @synthesize dictInvokeCountInMin=_dictInvokeCountInMin;
@property(nonatomic) unsigned int curMinInJsapiFrequencyBase; // @synthesize curMinInJsapiFrequencyBase=_curMinInJsapiFrequencyBase;
- (_Bool)compatibilityCheckResultWhenJsApiInvoked:(id)arg1;
- (_Bool)frequencyCheckResultWhenJsApiInvoked:(id)arg1 funcName:(id)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)initFrequnceLimitSet;
- (id)init;

@end

