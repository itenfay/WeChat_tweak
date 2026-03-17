//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <AVFoundation/AVAudioPlayer.h>

@interface AVAudioPlayer (VolumeHook)
+ (void)hookAVAudioPlayer;
- (void)hook_setVolume:(float)arg1;
- (_Bool)hook_play;
- (id)hook_initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id *)arg3;
- (id)hook_initWithData:(id)arg1 error:(id *)arg2;
- (id)hook_initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id *)arg3;
- (id)hook_initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)hook_init;
- (void)mmAudioHook_stop;
- (void)mmAudioHook_pause;
- (_Bool)mmAudioHook_playAtTime:(double)arg1;
- (_Bool)mmAudioHook_play;
- (void)mmAudioHook_setDelegate:(id)arg1;
@end

