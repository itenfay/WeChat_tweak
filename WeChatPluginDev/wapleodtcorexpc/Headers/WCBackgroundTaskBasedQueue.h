//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock;

@interface WCBackgroundTaskBasedQueue
{
    struct queue<void (^)(), std::deque<void (^)()>> _queue;
    NSRecursiveLock *_lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)run;
- (void)dispatchRecursively:(CDUnknownBlockType)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1;

@end

