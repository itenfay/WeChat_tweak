//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMOpenVoiceNativeEngine : NSObject
{
}

+ (int)sendCmdMsg:(id)arg1 targetMemberId:(int)arg2;
+ (int)subScribeVideoAndResList:(id)arg1 screenMembers:(id)arg2;
+ (int)imageConvert:(void *)arg1 dstImg:(void *)arg2;
+ (int)uninit;
+ (int)exitRoom:(int)arg1;
+ (void)onNetworkChanged:(int)arg1;
+ (int)setCmdData:(int)arg1 dataPtr:(char *)arg2 dataLen:(int)arg3;
+ (int)setCmdData:(int)arg1 data:(id)arg2;
+ (int)SwitchAV:(_Bool)arg1 bOpenVideo:(_Bool)arg2 bScreenStatus:(_Bool)arg3;
+ (int)getVoiceActivity:(int)arg1;
+ (int)sendVideoData:(struct ImagePlane *)arg1;
+ (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 format:(int)arg5;
+ (int)getAudioData:(char *)arg1 dataLength:(int)arg2;
+ (int)sendAudioData:(id)arg1 delay:(int)arg2;
+ (int)joinRoom:(long long)arg1 roomType:(int)arg2 networkType:(int)arg3 muteAudio:(_Bool)arg4 videoConfig:(int)arg5 videoRatio:(int)arg6 fixedVideoRes:(int)arg7 maxFPS:(int)arg8;
+ (int)updateSessionKey:(id)arg1;
+ (id)generateInitInfo:(id)arg1 subAppId:(id)arg2 sessionKey:(id)arg3 audioType:(int)arg4 maxWidth:(int)arg5 maxHeight:(int)arg6 videoRatio:(int)arg7 videoConfig:(int)arg8 forceCellularNetwork:(_Bool)arg9;
+ (int)GetCPUCapacity;
+ (int)initEngine:(id)arg1 subAppId:(id)arg2 sessionKey:(id)arg3 audioType:(int)arg4 maxWidth:(int)arg5 maxHeight:(int)arg6 videoRatio:(int)arg7 videoConfig:(int)arg8 forceCellularNetwork:(_Bool)arg9 nCallback:(struct IWXConfCallback *)arg10;
+ (struct IWXConfService *)getConfInst;

@end

