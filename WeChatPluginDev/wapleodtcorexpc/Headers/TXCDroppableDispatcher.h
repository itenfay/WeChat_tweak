//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TXCDroppableDispatcher : NSObject
{
    struct Lock _lock;
    NSMutableArray *_cachedObjects;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cachedObjects; // @synthesize cachedObjects=_cachedObjects;
- (void)removeObject:(id)arg1;
@property(readonly) long long cacheCount;
- (void)dispatchObject:(id)arg1 shouldDrop:(CDUnknownBlockType)arg2 withOperation:(CDUnknownBlockType)arg3 inQueue:(id)arg4;
- (id)init;

@end

