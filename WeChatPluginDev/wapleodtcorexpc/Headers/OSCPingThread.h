//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSThread.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface OSCPingThread : NSThread
{
    _Bool _pingTaskIsRunning;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    double _threshold;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property _Bool pingTaskIsRunning; // @synthesize pingTaskIsRunning=_pingTaskIsRunning;
- (void)main;
- (id)initWithThreashold:(double)arg1 handler:(CDUnknownBlockType)arg2;

@end

