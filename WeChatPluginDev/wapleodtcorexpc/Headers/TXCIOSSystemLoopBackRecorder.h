//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TXCIOSSystemLoopBackRecorder : NSObject
{
    NSString *_replaykitObserverKey;
    void *_recorder;
}

- (void).cxx_destruct;
@property void *recorder; // @synthesize recorder=_recorder;
@property(copy, nonatomic) NSString *replaykitObserverKey; // @synthesize replaykitObserverKey=_replaykitObserverKey;
- (void)onBroadcastExtResumed;
- (void)onBroadcastExtPaused;
- (void)onBroadcastExtFinished;
- (void)onBroadcastExtStarted;
- (void)onReceiveAudioPacket:(const void *)arg1;
- (void)stop;
- (void)start;
- (id)initWithRecorder:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

