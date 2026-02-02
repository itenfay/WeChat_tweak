//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoipmpCoreImplService : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct VoipmpCoreImplServiceCppCover cpp_cover;
    struct weak_ptr<voipmp::VoipmpCoreImplServiceDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)bindSocketToNetWorkAsync:(int)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)bindSocketToNetWorkAsync:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAutoScreenOffEnabled:(_Bool)arg1;
- (void)markUserNotSupport:(id)arg1 videoCall:(_Bool)arg2;
- (_Bool)allowNetWorkChangeToMobileNet;
- (int)getRingStreamType;
- (void)setSplitScreen:(_Bool)arg1;
- (id)getSplitScreenState;
- (_Bool)canQuickAcceptUseBT;
- (id)getDeviceInfo;
- (void)release:(int)arg1;
- (void)updateTextureSize:(int)arg1 newWidth:(int)arg2 newHeight:(int)arg3;
- (id)getRenderTexture:(int)arg1;
- (_Bool)unMuteMicroPhone;
- (_Bool)muteMicrophone;
- (_Bool)isRecording;
- (_Bool)stopRecord;
- (_Bool)startRecord:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (_Bool)stopPlay;
- (_Bool)startPlay:(_Bool)arg1 sampleRate:(int)arg2 channels:(int)arg3 frameDuration:(int)arg4;
- (void)updateAudioScene:(int)arg1;
- (void)deviceRouteToAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deviceRouteToAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getCurrentDevice;
- (id)getAvailableDevices;
- (void)onReportDataAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onReportDataAsync:(CDUnknownBlockType)arg1;
- (void)onVideoFrameAsync:(int)arg1 dataPtr:(id)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6 on:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)onVideoFrameAsync:(int)arg1 dataPtr:(id)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6 completion:(CDUnknownBlockType)arg7;
- (void)onConfEventAsync:(int)arg1 errCode:(int)arg2 paramsBuf:(id)arg3 bufLen:(int)arg4 on:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)onConfEventAsync:(int)arg1 errCode:(int)arg2 paramsBuf:(id)arg3 bufLen:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateAudioMenuAsync:(_Bool)arg1 devices:(id)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateAudioMenuAsync:(_Bool)arg1 devices:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recErrorToAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recErrorToAsync:(CDUnknownBlockType)arg1;
- (void)recordStateUpdateToAsync:(_Bool)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recordStateUpdateToAsync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)audioUIRouteToAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)audioUIRouteToAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initWithZidlImpl:(id)arg1;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_81245fc3)getDispatcher;

@end

