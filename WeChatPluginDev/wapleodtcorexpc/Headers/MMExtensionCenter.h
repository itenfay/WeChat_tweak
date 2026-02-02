//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMExtensionCenter : NSObject
{
    struct os_unfair_lock_s m_lock;
    void *m_dictExtension;
    id m_context;
}

- (void)checkExistExtension;
- (void)callKeyExtensionOnMainThreadContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)callExtensionOnMainThreadContinuously:(id)arg1 selector:(SEL)arg2 sync:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)callKeyExtensionOnMainThread:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)callExtensionOnMainThread:(id)arg1 selector:(SEL)arg2 sync:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)callKeyExtensionContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(CDUnknownBlockType)arg4;
- (void)callExtensionContinuously:(id)arg1 selector:(SEL)arg2 block:(CDUnknownBlockType)arg3;
- (void)callKeyExtension:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(CDUnknownBlockType)arg4;
- (void)callExtension:(id)arg1 selector:(SEL)arg2 block:(CDUnknownBlockType)arg3;
- (void)unRegisterAllKeyExtension:(id)arg1 withTarget:(id)arg2;
- (void)unRegisterExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)registerExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)unRegisterExtension:(id)arg1 withTarget:(id)arg2;
- (void)registerExtension:(id)arg1 withTarget:(id)arg2;
- (id)getExtension:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

