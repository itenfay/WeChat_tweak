//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAudioSession, AVAudioSessionRouteDescription;

@protocol TXCAudioSessionManagerDelegate <NSObject>

@optional
- (void)deviceOrientationDidChange;
- (void)audioSession:(AVAudioSession *)arg1 didChangeOtherAppPlayoutState:(_Bool)arg2;
- (void)audioSession:(AVAudioSession *)arg1 didChangeOutputVolume:(int)arg2;
- (void)audioSessionMediaServerReset:(AVAudioSession *)arg1;
- (void)audioSessionMediaServerTerminated:(AVAudioSession *)arg1;
- (void)audioSessionDidChangeRoute:(AVAudioSession *)arg1 reason:(unsigned long long)arg2 previousRoute:(AVAudioSessionRouteDescription *)arg3;
- (void)audioSessionDidEndInterruption:(AVAudioSession *)arg1 shouldResumeSession:(_Bool)arg2;
- (void)audioSessionDidBeginInterruption:(AVAudioSession *)arg1;
@end

