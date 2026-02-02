//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoipmpCoreApiService : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct VoipmpCoreApiServiceCppCover cpp_cover;
    struct weak_ptr<voipmp::VoipmpCoreApiServiceDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)getVideoData:(int)arg1 buf:(id)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (int)sendVideoDataWithStride:(id)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 stride:(int)arg5 format:(int)arg6;
- (int)sendVideoData:(id)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 format:(int)arg5;
- (int)getAudioData:(id)arg1 bufferLen:(int)arg2;
- (int)sendAudioData:(id)arg1 bufferLen:(int)arg2;
- (int)onNetworkChange:(int)arg1 ispInfo:(id)arg2;
- (int)sendCmdMsg:(id)arg1 dataLen:(int)arg2 targetMid:(int)arg3;
- (int)setAppCmd:(int)arg1 parameter:(id)arg2 len:(int)arg3;
- (id)getEngineInfo;
- (void)getVoiceActivityAsync:(int)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceActivityAsync:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (int)subscribeVideo:(id)arg1 pbLen:(int)arg2;
- (int)switchVideo:(_Bool)arg1;
- (int)switchAudio:(_Bool)arg1;
- (int)switchAV:(_Bool)arg1 openVideo:(_Bool)arg2 screenStatus:(int)arg3;
- (int)hangup:(int)arg1 subCall:(_Bool)arg2;
- (int)add:(id)arg1 infoLen:(int)arg2;
- (int)accept:(_Bool)arg1 subCall:(_Bool)arg2;
- (int)ack;
- (int)recvNotify:(id)arg1 dataLen:(int)arg2 netType:(int)arg3;
- (int)invite:(id)arg1 infoLen:(int)arg2;
- (int)exitRoom:(int)arg1;
- (int)joinRoom:(id)arg1 infoLen:(int)arg2;
- (void)uninitAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uninitAsync:(CDUnknownBlockType)arg1;
- (void)initWithTaskIdEnvInfoEnvInfoLengthAsync:(id)arg1 envInfoLength:(int)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)initWithTaskIdEnvInfoEnvInfoLengthAsync:(id)arg1 envInfoLength:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getDeviceInfo;
- (void)updateTextureInfo:(int)arg1 newRatio:(double)arg2 newRotate:(int)arg3;
- (void)muteMicrophoneAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)muteMicrophoneAsync:(CDUnknownBlockType)arg1;
- (void)unMuteMicrophoneAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unMuteMicrophoneAsync:(CDUnknownBlockType)arg1;
- (void)stopPlayAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopPlayAsync:(CDUnknownBlockType)arg1;
- (void)startPlayAsync:(_Bool)arg1 sampleRate:(int)arg2 channels:(int)arg3 frameDuration:(int)arg4 on:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)startPlayAsync:(_Bool)arg1 sampleRate:(int)arg2 channels:(int)arg3 frameDuration:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)isRecordingAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isRecordingAsync:(CDUnknownBlockType)arg1;
- (void)stopRecordAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopRecordAsync:(CDUnknownBlockType)arg1;
- (void)startRecordAsync:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3 on:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)startRecordAsync:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getCurrentDeviceAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCurrentDeviceAsync:(CDUnknownBlockType)arg1;
- (void)getAvailableDevicesAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAvailableDevicesAsync:(CDUnknownBlockType)arg1;
- (void)routeToDeviceAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)routeToDeviceAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleSpeakerAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleSpeakerAsync:(CDUnknownBlockType)arg1;
- (void)updateSceneAsync:(int)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSceneAsync:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onRecError;
- (void)onRecorderStateUpdate:(_Bool)arg1;
- (void)onDeviceChange:(id)arg1;
- (void)onDeviceAdd:(id)arg1;
- (void)onDeviceRemove:(id)arg1;
- (void)initAudioUnitAsync:(_Bool)arg1 isVideoMode:(_Bool)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)initAudioUnitAsync:(_Bool)arg1 isVideoMode:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setVoIPMPCoreOCImplService:(id)arg1;
- (void)setVoIPMPCoreJavaImplService:(id)arg1;
- (void)setVoIPMPCoreDartImplService:(id)arg1;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_66b52eba)getDispatcher;

@end

