//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock, Protocol;

@interface WAJSContextPluginDelegateCenter : NSObject
{
    Protocol *m_protocolKey;
    NSRecursiveLock *m_delegateLock;
    NSMutableArray *m_delegates;
    _Bool m_needCleanUp;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (void)__cleanUp;
- (void)releaseDelegates;
- (void)__delegate:(SEL)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeDelegate:(id)arg1;
- (_Bool)addDelegate:(id)arg1;
- (id)initWithKey:(id)arg1;

@end

