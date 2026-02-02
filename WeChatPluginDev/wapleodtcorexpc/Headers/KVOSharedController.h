//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface KVOSharedController : NSObject
{
    NSHashTable *m_infos;
    struct _opaque_pthread_mutex_t m_mutex;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unobserve:(id)arg1 infos:(id)arg2;
- (void)unobserve:(id)arg1 info:(id)arg2;
- (void)observe:(id)arg1 info:(id)arg2;
- (void)dealloc;
- (id)init;

@end

