//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveResourceFetcherRootFlowAction
{
    unsigned long long _pendingTasksCount;
}

@property(nonatomic) unsigned long long pendingTasksCount; // @synthesize pendingTasksCount=_pendingTasksCount;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)startFetcherTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

