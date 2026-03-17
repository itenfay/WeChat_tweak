//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AudioHelper : NSObject
{
}

+ (id)GetQVIVoiceAnalysis;
+ (_Bool)isSilkFile:(id)arg1;
+ (void)showRecordDenied;
+ (void)playSendMsgNotify;
+ (_Bool)playNewMsgNotifyInMessageContent;
+ (_Bool)playNewMsgNotify;
+ (void)playVibration;
+ (void)playSoundAtPath:(id)arg1 volume:(float)arg2 ambient:(_Bool)arg3;
+ (void)playSound:(id)arg1 fileType:(id)arg2 volume:(float)arg3 ambient:(_Bool)arg4;
+ (void)AVPlaySystemSound:(id)arg1 FileType:(id)arg2 Ambient:(_Bool)arg3;
+ (void)PlaySystemSound:(id)arg1 FileType:(id)arg2 Ambient:(_Bool)arg3;
+ (void)RestartAudioTalk;
+ (_Bool)PauseAudioTalk;
+ (void)StopAudioTalk;
+ (_Bool)IsAudioTalkRecording;
+ (_Bool)IsAudioTalkPlaying;
+ (void)RestartMusic;
+ (_Bool)PauseMusic;
+ (void)StopMusic;
+ (_Bool)IsMusicPaused;
+ (_Bool)IsMusicWaiting;
+ (_Bool)IsMusicIdle;
+ (_Bool)IsMusicPlaying;
+ (void)StopAudio;
+ (_Bool)IsWeiXinSoundPaused;
+ (_Bool)IsWeiXinSoundPlaying;

@end

