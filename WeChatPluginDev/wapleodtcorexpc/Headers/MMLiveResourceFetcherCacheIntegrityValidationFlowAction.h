//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveResourceFetcherCacheIntegrityValidationFlowAction
{
}

- (_Bool)validateFileForTask:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 withDigestType:(unsigned long long)arg4 expectedDigest:(id)arg5;
- (void)validateFileForTask:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dispatchInvocation:(CDUnknownBlockType)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

