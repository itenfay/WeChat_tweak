//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TXCAudioSessionManagerDelegateAdapter : NSObject
{
    struct AudioSessionObserver *_observer;
    scoped_refptr_249dff9e _taskRunner;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)deviceOrientationDidChange;
- (void)audioSession:(id)arg1 didChangeOtherAppPlayoutState:(_Bool)arg2;
- (void)audioSession:(id)arg1 didChangeOutputVolume:(int)arg2;
- (void)audioSessionMediaServerReset:(id)arg1;
- (void)audioSessionMediaServerTerminated:(id)arg1;
- (void)audioSessionDidChangeRoute:(id)arg1 reason:(unsigned long long)arg2 previousRoute:(id)arg3;
- (void)audioSessionDidEndInterruption:(id)arg1 shouldResumeSession:(_Bool)arg2;
- (void)audioSessionDidBeginInterruption:(id)arg1;
- (id)initWithObserver:(struct AudioSessionObserver *)arg1 taskRunner:(scoped_refptr_249dff9e)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

