//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString, UIImage, UINavigationController;
@protocol WAGameLiveServiceExt;

@protocol IWAGameLiveService <NSObject>
+ (void)reportMenuLiveButtonExpose;
+ (void)joinTeam:(NSDictionary *)arg1 complete:(void (^)(NSDictionary *))arg2;
+ (void)stopGameLive:(unsigned long long)arg1 complete:(void (^)(void))arg2 nav:(UINavigationController *)arg3;
+ (void)setEncoderParamWithVideoSize:(double)arg1 height:(double)arg2;
+ (void)setExperimentConfig:(NSString *)arg1 withParams:(NSDictionary *)arg2;
+ (_Bool)mixExternalAudioData:(NSData *)arg1 sampleRate:(int)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
+ (_Bool)mixExternalAudioData:(void *)arg1 size:(int)arg2 sampleRate:(int)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
+ (_Bool)enableMixExternalAudio:(_Bool)arg1 playout:(_Bool)arg2;
+ (_Bool)sendCustomAudioData:(NSData *)arg1 sampleRate:(int)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
+ (_Bool)sendCustomAudioData:(void *)arg1 size:(int)arg2 sampleRate:(int)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
+ (_Bool)enableCustomAudioCapture:(_Bool)arg1;
+ (_Bool)sendCustomVideoData:(NSData *)arg1 pixelFormat:(int)arg2 timestampMs:(unsigned long long)arg3 width:(double)arg4 height:(double)arg5 rotation:(int)arg6;
+ (_Bool)sendCustomVideoData:(void *)arg1 size:(int)arg2 pixelFormat:(int)arg3 timestampMs:(unsigned long long)arg4 width:(double)arg5 height:(double)arg6 rotation:(int)arg7;
+ (_Bool)sendCustomVideoData:(struct __CVBuffer *)arg1 pixelFormat:(int)arg2 timestampMs:(unsigned long long)arg3 rotation:(int)arg4;
+ (_Bool)enableCustomVideoCapture:(_Bool)arg1;
+ (void)enableLocalAudio:(_Bool)arg1;
+ (void)enableLocalVideo:(_Bool)arg1;
+ (void)updateCoverImage:(UIImage *)arg1;
+ (void)notifyGameViewVisible:(_Bool)arg1;
+ (_Bool)isDisableMicMusicCapture;
+ (_Bool)minimize;
+ (_Bool)isLiving;
+ (_Bool)isGameLiving:(NSString *)arg1 versionType:(unsigned long long)arg2;
+ (void)notifyGameLiveWillStart;
+ (void)sendGameLiveMenuClickEvent:(NSString *)arg1 versionType:(unsigned long long)arg2;
+ (void)notifyAppRebootWithNav:(UINavigationController *)arg1;
+ (void)menuClickStartGameLive:(NSString *)arg1 versionType:(unsigned long long)arg2 callback:(void (^)(_Bool, NSDictionary *))arg3 nav:(UINavigationController *)arg4 dic:(NSDictionary *)arg5;
+ (void)setDelegate:(id <WAGameLiveServiceExt>)arg1;
@end

