//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol IWCAudioSessionService <NSObject>
+ (void)restart;
+ (_Bool)otherPlayingBeforeActive;
+ (_Bool)isOtherAudioPlaying;
+ (_Bool)setAllowHapticsAndSystemSoundsDuringRecording:(_Bool)arg1;
+ (unsigned long long)currentCategoryId;
+ (_Bool)setCategroy:(unsigned long long)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3 forceUseBuiltinMic:(_Bool)arg4;
+ (_Bool)setCategroy:(unsigned long long)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3;
+ (_Bool)setCategroy:(unsigned long long)arg1 withBlockType:(unsigned long long)arg2;
+ (_Bool)setCategroy:(unsigned long long)arg1 mode:(NSString *)arg2 options:(unsigned long long)arg3 error:(id *)arg4 withBlockType:(unsigned long long)arg5;
+ (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3 withBlockType:(unsigned long long)arg4;
+ (_Bool)setCategroy:(unsigned long long)arg1;
+ (_Bool)setCategroy:(unsigned long long)arg1 mode:(NSString *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)setAVCategroy:(NSString *)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3 forceUseBuiltinMic:(_Bool)arg4;
+ (_Bool)setAVCategroy:(NSString *)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3;
+ (_Bool)setAVCategroy:(NSString *)arg1 withBlockType:(unsigned long long)arg2;
+ (_Bool)setAVCategroy:(NSString *)arg1 mode:(NSString *)arg2 options:(unsigned long long)arg3 error:(id *)arg4 withBlockType:(unsigned long long)arg5;
+ (_Bool)setAVCategroy:(NSString *)arg1 options:(unsigned long long)arg2 error:(id *)arg3 withBlockType:(unsigned long long)arg4;
+ (_Bool)setAVCategroy:(NSString *)arg1;
+ (_Bool)setAVCategroy:(NSString *)arg1 mode:(NSString *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (_Bool)setAVCategroy:(NSString *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)setSpeaker:(_Bool)arg1 error:(id *)arg2;
+ (_Bool)setMode:(NSString *)arg1 error:(id *)arg2;
+ (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
+ (NSObject<OS_dispatch_queue> *)audioQueue;
@end

