//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, WAJITBindingEnv;

@interface WAJITRuntime
{
    WAJITBindingEnv *_bindingEnv;
    MMTimer *_perfTimer;
    long long _jankTime;
    long long _renderTime;
    CDStruct_b6d5f750 _performance;
}

- (void).cxx_destruct;
@property(nonatomic) long long renderTime; // @synthesize renderTime=_renderTime;
@property(nonatomic) long long jankTime; // @synthesize jankTime=_jankTime;
@property(nonatomic) CDStruct_b6d5f750 performance; // @synthesize performance=_performance;
@property(retain, nonatomic) MMTimer *perfTimer; // @synthesize perfTimer=_perfTimer;
@property(retain, nonatomic) WAJITBindingEnv *bindingEnv; // @synthesize bindingEnv=_bindingEnv;
- (void)dealloc;
- (id)initWithBaseUrl:(id)arg1;
- (id)init;
- (void)resetJankInfo;
- (void)stopPerformanceLogic;
- (void)startPerformanceLogic;
- (void)onTimer;
- (CDStruct_b6d5f750)getPerformance;

@end

