//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCDBSharedLockCenter : NSObject
{
    struct map<NSString *, std::weak_ptr<WCDBSharedLock>, WCDBStringComparator, std::allocator<std::pair<NSString *const, std::weak_ptr<WCDBSharedLock>>>> m_locks;
    shared_ptr_45de587b m_inner;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)purge;
- (shared_ptr_45de587b)lockWithName:(id)arg1;
- (id)init;

@end

