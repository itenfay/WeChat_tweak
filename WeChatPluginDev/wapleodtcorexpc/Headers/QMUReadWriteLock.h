//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QMUReadWriteLock : NSObject
{
    struct _opaque_pthread_rwlock_t rwlock;
}

- (void)dealloc;
- (id)init;
- (int)unlock;
- (int)readerLock;
- (int)writerLock;

@end

