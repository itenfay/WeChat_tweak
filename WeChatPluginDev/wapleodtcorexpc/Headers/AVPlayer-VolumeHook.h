//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <AVFoundation/AVPlayer.h>

@interface AVPlayer (VolumeHook)
+ (void)hookAVPlayer;
- (void)hook_setVolume:(float)arg1;
- (_Bool)hook_play;
- (id)hook_init;
@end

