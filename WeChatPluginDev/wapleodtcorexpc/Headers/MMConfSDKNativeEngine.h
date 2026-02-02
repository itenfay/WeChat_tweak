//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMConfSDKNativeEngine : NSObject
{
}

+ (_Bool)hasCall;
+ (void)stat:(unsigned long long)arg1 withUserInfo:(id)arg2;
+ (int)sendResponse:(id)arg1 errCode:(int)arg2 taskid:(unsigned int)arg3;
+ (id)ilinkGenerateInitInfo:(id)arg1 audioType:(int)arg2 videoRatio:(int)arg3 videoLength:(int)arg4;
+ (int)ilinkInitEngine:(id)arg1 audioType:(int)arg2 videoRatio:(int)arg3 videoLength:(int)arg4 isSubCallEnable:(_Bool)arg5 nCallback:(struct IWXConfCallback *)arg6;
+ (void)setAudioDataCallback:(weak_ptr_42c0f24b)arg1;
+ (void)sendTRTCRemoteData:(char *)arg1 length:(unsigned int)arg2 channels:(unsigned int)arg3 sampleRate:(unsigned int)arg4;
+ (void)setAudioCaptureVolume:(long long)arg1;
+ (void)enableCustomAudioCapture:(_Bool)arg1;
+ (_Bool)setMutePlay:(_Bool)arg1;
+ (_Bool)setMuteRecord:(_Bool)arg1;
+ (void)setHandsFree:(_Bool)arg1;
+ (void)setSystemVolumeType:(int)arg1;
+ (void)stopLocalAudio;
+ (void)startLocalAudio;
+ (void)setAllMusicVolume:(long long)arg1;
+ (void)stopAllMusic;
+ (void)resumePlayMusic:(int)arg1;
+ (void)pausePlayMusic:(int)arg1;
+ (void)stopPlayMusic:(int)arg1;
+ (void)startPlayMusic:(int)arg1 path:(id)arg2 publish:(_Bool)arg3 onStart:(CDUnknownBlockType)arg4 onProgress:(CDUnknownBlockType)arg5 onComplete:(CDUnknownBlockType)arg6;
+ (void)sendCmdMsgData:(id)arg1;
+ (void)sendCmdMsg:(int)arg1 data:(id)arg2;
+ (int)stopPulish;
+ (int)startPulish:(id)arg1;
+ (id)generateLiveInitInfo:(id)arg1;
+ (int)initLiveEngine:(id)arg1 nCallback:(struct IWXConfCallback *)arg2;
+ (int)reportInfo:(const char *)arg1 len:(int)arg2;
+ (int)imageConvert:(void *)arg1 dstImg:(void *)arg2;
+ (int)accept:(_Bool)arg1;
+ (int)recvNotify:(const char *)arg1 datalen:(int)arg2 netType:(int)arg3;
+ (void)ack;
+ (int)addmember:(id)arg1 roomType:(int)arg2 wxGroupId:(id)arg3 token:(id)arg4 netType:(int)arg5;
+ (int)invite:(id)arg1 roomType:(int)arg2 wxGroupId:(id)arg3 token:(id)arg4 netType:(int)arg5 muteVideo:(_Bool)arg6;
+ (int)subScribeVideoAndResList:(id)arg1 screenMembers:(id)arg2;
+ (int)uninit;
+ (int)hangup:(int)arg1;
+ (int)hangup:(int)arg1 isSubCall:(_Bool)arg2;
+ (int)exitRoom:(int)arg1;
+ (void)onNetworkChanged:(int)arg1;
+ (int)setAudioDevFormat:(int)arg1 RecChannels:(int)arg2 PcmFmt:(int)arg3 PlaySampleRate:(int)arg4 PlayChannels:(int)arg5;
+ (int)setCmdData:(int)arg1 dataPtr:(char *)arg2 dataLen:(int)arg3;
+ (int)setCmdData:(int)arg1 data:(id)arg2;
+ (int)SwitchAudio:(_Bool)arg1;
+ (int)SwitchAV:(_Bool)arg1 bOpenVideo:(_Bool)arg2 bScreenStatus:(int)arg3;
+ (int)getVoiceActivity:(int)arg1;
+ (int)sendVideoData:(struct ImagePlane *)arg1;
+ (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 format:(int)arg5;
+ (int)getAudioData:(char *)arg1 dataLength:(int)arg2;
+ (int)sendProcessedAudioData:(id)arg1;
+ (int)sendAudioData:(id)arg1 delay:(int)arg2;
+ (int)joinRoomWithGroupID:(id)arg1 roomType:(int)arg2 token:(id)arg3 networkType:(int)arg4 wxGroupId:(id)arg5;
+ (int)joinRoomWithGroupID:(id)arg1 roomType:(int)arg2 token:(id)arg3 networkType:(int)arg4 wxGroupId:(id)arg5 muteVideo:(_Bool)arg6;
+ (int)updateSessionKey:(id)arg1;
+ (id)generateInitInfo:(id)arg1 audioType:(int)arg2 videoRatio:(int)arg3 videoLength:(int)arg4;
+ (int)GetCPUCapacity;
+ (int)initEngine:(id)arg1 audioType:(int)arg2 videoRatio:(int)arg3 videoLength:(int)arg4 nCallback:(struct IWXConfCallback *)arg5;
+ (struct IWXConfService *)getConfInst;
+ (void)updateFrameOrientation:(long long)arg1 isFrontCamera:(_Bool)arg2;

@end

