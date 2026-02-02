//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveFlowRetryAction
{
    unsigned long long _maximumRetryCount;
    CDUnknownBlockType _backoffDelayFunction;
}

+ (id)createWithMaximumRetryCount:(unsigned long long)arg1 backoffDelayFunction:(CDUnknownBlockType)arg2;
+ (id)createWithMaximumRetryCount:(unsigned long long)arg1 exponentialBackoffBase:(double)arg2 initialDelay:(double)arg3 maximumRandomJitterRatio:(double)arg4;
+ (id)createDefaultExponentialBackoffWithMaximumRetryCount:(unsigned long long)arg1;
+ (id)createWithMaximumRetryCount:(unsigned long long)arg1 fixedBackoffDelay:(double)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType backoffDelayFunction; // @synthesize backoffDelayFunction=_backoffDelayFunction;
@property(nonatomic) unsigned long long maximumRetryCount; // @synthesize maximumRetryCount=_maximumRetryCount;
- (void)dispatchInvocation:(CDUnknownBlockType)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (void)invokeRetryWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 currentRetry:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithMaximumRetryCount:(unsigned long long)arg1 backoffDelayFunction:(CDUnknownBlockType)arg2;

@end

