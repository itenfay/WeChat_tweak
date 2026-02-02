//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSPointerArray, TPRecursiveLock;

@interface TPPlayerEventPublisher : NSObject
{
    NSPointerArray *_receivers;
    TPRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSPointerArray *receivers; // @synthesize receivers=_receivers;
- (long long)idxOfReceiver:(id)arg1;
- (void)clear;
- (void)publishEvent:(id)arg1;
- (unsigned long long)getReceiverCount;
- (void)removeEventReceiver:(id)arg1;
- (void)addEventReceiver:(id)arg1;
- (id)init;

@end

