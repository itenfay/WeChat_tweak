//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface MMLiveFlowConcurrencyControlAction
{
    unsigned long long _degreeOfParallelism;
    unsigned long long _currentExecutingCount;
    NSMutableArray *_queue;
}

+ (id)createWithDegreeOfParallelism:(unsigned long long)arg1;
+ (id)createConcurrentUnlimited;
+ (id)createConcurrentDefault;
+ (id)createSerial;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long currentExecutingCount; // @synthesize currentExecutingCount=_currentExecutingCount;
@property(nonatomic) unsigned long long degreeOfParallelism; // @synthesize degreeOfParallelism=_degreeOfParallelism;
- (void)invokeTaskWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithDegreeOfParallelism:(unsigned long long)arg1;

@end

