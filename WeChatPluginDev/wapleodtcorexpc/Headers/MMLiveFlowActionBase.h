//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveFlowActionBase : NSObject
{
}

- (void)dispatchInvocationToBackgroundWorkerQueue:(CDUnknownBlockType)arg1 forced:(_Bool)arg2 flowInvocationContext:(id)arg3 actionInvocationContext:(id)arg4;
- (void)dispatchInvocationToMainQueue:(CDUnknownBlockType)arg1 forced:(_Bool)arg2 flowInvocationContext:(id)arg3 actionInvocationContext:(id)arg4;
- (void)dispatchInvocation:(CDUnknownBlockType)arg1 withTarget:(unsigned long long)arg2 flowInvocationContext:(id)arg3 actionInvocationContext:(id)arg4;
- (void)dispatchInvocation:(CDUnknownBlockType)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)invokeWithInput:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

