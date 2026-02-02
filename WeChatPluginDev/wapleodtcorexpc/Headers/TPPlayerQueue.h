//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TPPlayerQueue : NSObject
{
    void *_playingQueueKey;
    NSObject<OS_dispatch_queue> *_playingQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playingQueue; // @synthesize playingQueue=_playingQueue;
- (void *)playingQueueKey;
- (id)init;
- (id)initWithPlayingQueue:(id)arg1 queueName:(id)arg2;
- (id)initWithPlayingQueue:(id)arg1;

@end

