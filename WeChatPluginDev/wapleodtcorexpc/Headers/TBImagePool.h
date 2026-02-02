//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TBSReadWriteLock;

@interface TBImagePool : NSObject
{
    NSMutableDictionary *_pool;
    TBSReadWriteLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TBSReadWriteLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *pool; // @synthesize pool=_pool;
- (id)init;
- (void)removeImageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1;

@end

