//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSThread.h>

@class NSObject, NSRunLoop;
@protocol OS_dispatch_group;

@interface SRRunLoopThread : NSThread
{
    NSObject<OS_dispatch_group> *_waitGroup;
    NSRunLoop *_runLoop;
}

+ (id)sharedThread;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void)main;
- (id)init;
- (void)dealloc;

@end

