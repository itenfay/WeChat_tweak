//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAudioPlayer, AVPlayer, MMWebViewController;

@protocol AudioPlayingEvent <NSObject>
- (void)onWebViewControllerDisappear:(MMWebViewController *)arg1;
- (void)onWebViewControllerAppear:(MMWebViewController *)arg1;
- (void)onSetScheduleAudioSlice:(struct ScheduledAudioSlice *)arg1;
- (void)onAudioUnitPlaybackEnd:(struct AudioBufferList *)arg1;
- (void)onSystemSoundWillPlay:(unsigned int)arg1 stop:(inout _Bool *)arg2;
- (void)onALDeleteSources:(unsigned int)arg1;
- (void)onALGenSources:(unsigned int)arg1;
- (void)onALSourcePlayBegin:(unsigned int)arg1;
- (void)onALSourcefBegin:(unsigned int)arg1 param:(int)arg2 value:(float)arg3 stop:(inout _Bool *)arg4;
- (void)onAudioQueue:(struct OpaqueAudioQueue *)arg1 willEnqueueBuffer:(struct AudioQueueBuffer *)arg2;
- (void)onAudioQueueNewOutput:(struct OpaqueAudioQueue *)arg1;
- (void)onAVPlayer:(AVPlayer *)arg1 setVolume:(float)arg2 stop:(inout _Bool *)arg3;
- (void)onAVPlayerWillPlay:(AVPlayer *)arg1;
- (void)onAVPlayerInit:(AVPlayer *)arg1;
- (void)onAVAudioPlayer:(AVAudioPlayer *)arg1 setVolume:(float)arg2 stop:(inout _Bool *)arg3;
- (void)onAVAudioPlayerWillPlay:(AVAudioPlayer *)arg1;
- (void)onAVAudioPlayerInit:(AVAudioPlayer *)arg1;
@end

