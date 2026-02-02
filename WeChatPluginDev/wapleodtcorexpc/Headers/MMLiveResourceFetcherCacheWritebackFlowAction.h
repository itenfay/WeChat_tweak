//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveResourceFetcherCacheWritebackFlowAction
{
}

- (void)saveDigest:(id)arg1 withType:(unsigned long long)arg2 forTask:(id)arg3 flowInvocationContext:(id)arg4 actionInvocationContext:(id)arg5;
- (void)computeAndSaveDigestForTask:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (void)dispatchInvocation:(CDUnknownBlockType)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

