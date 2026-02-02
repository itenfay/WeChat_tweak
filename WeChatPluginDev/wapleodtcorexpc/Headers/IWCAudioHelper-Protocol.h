//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol IWCAudioHelper <NSObject>
+ (void)StopAudio;
+ (void)RestartAudioTalk;
+ (_Bool)PauseAudioTalk;
+ (void)RestartMusic;
+ (_Bool)IsMusicIdle;
+ (_Bool)PauseMusic;
+ (_Bool)IsMusicPaused;
@end

