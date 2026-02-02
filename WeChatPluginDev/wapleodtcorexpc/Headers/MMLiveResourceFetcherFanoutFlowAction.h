//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveResourceFetcherFanoutFlowAction
{
    unsigned long long _pendingBatchesCount;
}

@property(nonatomic) unsigned long long pendingBatchesCount; // @synthesize pendingBatchesCount=_pendingBatchesCount;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)startFetcherTasks:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startFetcherTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

