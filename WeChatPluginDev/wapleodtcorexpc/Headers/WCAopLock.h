//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAopLock : NSObject
{
    struct _opaque_pthread_rwlock_t m_lock;
}

- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) struct _opaque_pthread_rwlock_t *lock;

@end

