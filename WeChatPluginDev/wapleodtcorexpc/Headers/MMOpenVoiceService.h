//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class IConfSDKRegisterableCallbackHolder, MMConfSDKVideoHWenc, MMOpenVoiceAudioMgr, MMOpenVoiceJoinRoomCGIImp, MMOpenVoiceMemberMgr, MMOpenVoiceNetworkMgr, MMOpenVoiceSessionMgr, MMOpenVoiceVideoMgr, NSObject, NSString, VoIPConfSDKNativeCallbackMgr;
@protocol OS_dispatch_queue;

@interface MMOpenVoiceService
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    MMOpenVoiceSessionMgr *_sessionMgr;
    MMOpenVoiceMemberMgr *_memberMgr;
    MMOpenVoiceAudioMgr *_audioMgr;
    MMOpenVoiceVideoMgr *_videoMgr;
    MMOpenVoiceNetworkMgr *_networkMgr;
    MMOpenVoiceJoinRoomCGIImp *_joinRoomImp;
    VoIPConfSDKNativeCallbackMgr *voipCallbackMgr;
    IConfSDKRegisterableCallbackHolder *joinSucc;
    IConfSDKRegisterableCallbackHolder *joinFail;
    IConfSDKRegisterableCallbackHolder *talkSucc;
    IConfSDKRegisterableCallbackHolder *talkFail;
    IConfSDKRegisterableCallbackHolder *callBroken;
    IConfSDKRegisterableCallbackHolder *callExit;
    IConfSDKRegisterableCallbackHolder *sessionExpiredCallback;
    IConfSDKRegisterableCallbackHolder *memberChange;
    IConfSDKRegisterableCallbackHolder *videoMemberChange;
    IConfSDKRegisterableCallbackHolder *receiveCmdMsg;
    CDUnknownBlockType _currentInterruptedCallback;
    CDUnknownBlockType _currentMemberChangeCallback;
    CDUnknownBlockType _currentVideoMemberChangeCallback;
    CDUnknownBlockType _currentSpeakerChangedCallback;
    CDUnknownBlockType _currentReceiveCmdMsg;
    CDUnknownBlockType _currentEventCallback;
    int _currentStatus;
    _Bool _isQuitingRoom;
    NSString *_currentAppId;
    NSString *_busiAppId;
    NSString *_privateData;
    int _exitReason;
    _Bool _isJoiningRoom;
    _Bool _isInit;
    _Bool _isRequireExit;
    CDUnknownBlockType _pendingExitCallback;
    _Bool _isSyncJoinDone;
    _Bool _isCallbackJoinDone;
    _Bool _isCallbackTalkDone;
    _Bool _isCameraStarted;
    _Bool _isMicStarted;
    _Bool _isHandsFree;
    _Bool _isScreenStarted;
    _Bool _isForceCellularNetwork;
    long long _roomId;
    int _audioType;
    int _roomType;
    int _maxWidth;
    int _maxHeight;
    int _videoRatio;
    int _videoConfig;
    int _fixedVideoResolution;
    int _maxDecodeFPS;
    int _hwEncStatus;
    int _capW;
    int _capH;
    int _encStatusList[2];
    _Bool _isSWEncUsing;
    int _capStatus;
    MMConfSDKVideoHWenc *_hwEncoderList[2];
    struct __CVBuffer *_encodePixelBuffer;
    int _lastEncodePlaneWidth;
    int _lastEncodePlaneHeight;
    int _encodeWidth;
    int _encodeHeight;
    int _first5Frames;
    int _expectedRatio;
    int mApplicationState;
    _Bool _enable720pCapture;
    _Bool _enableDirectRendering;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableDirectRendering; // @synthesize enableDirectRendering=_enableDirectRendering;
@property(nonatomic) _Bool enable720pCapture; // @synthesize enable720pCapture=_enable720pCapture;
- (void)OnConfEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 callbackData:(id)arg4;
- (void)callIfNotNil:(id)arg1 errCode:(int)arg2 data:(id)arg3 callbackData:(id)arg4;
- (int)sendCmdData:(id)arg1 targetMemberId:(int)arg2;
- (void)notifyEventCallback:(int)arg1 data:(id)arg2;
- (void)forceExitRoom:(int)arg1;
- (int)gotEncodeErrCode:(int)arg1 encIdx:(int)arg2;
- (int)gotXpsData:(id)arg1 codecType:(int)arg2 encIdx:(int)arg3 isScreen:(_Bool)arg4;
- (int)gotEncodedData:(id)arg1 isKeyFrame:(_Bool)arg2 codecType:(int)arg3 encIdx:(int)arg4 isScreen:(_Bool)arg5;
- (void)onMicSwitch:(_Bool)arg1;
- (void)onCameraSwitch:(_Bool)arg1;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (void)onVideoCapture:(struct __CVBuffer *)arg1 orien:(int)arg2;
- (_Bool)doQosCtrl:(int)arg1;
- (void)CloseCodec:(int)arg1 codecFlag:(int)arg2;
- (int)GetEncWidth:(int)arg1 rmtDispW:(int)arg2 rmtDispH:(int)arg3 mode:(int)arg4;
- (void)checkEnable720pCapture;
- (_Bool)getEnable720pCapture;
- (long long)getCurrentRoomId;
- (void)removeView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)insertView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (int)resetSync:(_Bool)arg1;
- (void)mayRelease:(_Bool)arg1;
- (void)updateConfig:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)subscribe:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)cleanUpLongTermCallbacks;
- (int)exitConferenceSyncWithReason:(int)arg1;
- (int)convertReason:(int)arg1;
- (void)exitConference:(CDUnknownBlockType)arg1 reason:(int)arg2;
- (void)exitConference:(CDUnknownBlockType)arg1;
- (void)resumeCameraIfInVideoRoom;
- (void)pauseCameraIfInVideoRoom;
- (id)getConflictWording;
- (void)showConflictAlertForVoIP;
- (_Bool)isVoIPMuteMicroPhoneForAppId:(id)arg1;
- (_Bool)isVoIPWorkingForAppId:(id)arg1;
- (_Bool)isVideoVoIPWorking;
- (_Bool)isVoIPWorking;
- (void)callbackJoinConference:(CDUnknownBlockType)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (int)initWithSession:(id)arg1;
- (void)stopListenNetworkChange;
- (void)startListenNetworkChange;
- (void)cleanUpJoinStatus;
- (void)suspendByExitRequest:(CDUnknownBlockType)arg1;
- (void)callbackDeviceStartFailed:(CDUnknownBlockType)arg1 errCode:(int)arg2;
- (void)tryTriggerSucc:(CDUnknownBlockType)arg1 shouldMuteMicroPhone:(_Bool)arg2;
- (void)setUpLongTermCallbackAfterJoin;
- (void)furtherJoinCheck:(long long)arg1 IOpenVoiceCallback:(CDUnknownBlockType)arg2 shouldMuteMicroPhone:(_Bool)arg3;
- (void)joinRoomImp:(id)arg1 groupId:(id)arg2 nonceStr:(id)arg3 timeStamp:(int)arg4 joinRoomCallback:(CDUnknownBlockType)arg5 shouldMuteMicroPhone:(_Bool)arg6;
- (id)minimizationHostForAppid:(id)arg1;
- (void)join1v1ConferenceSync:(id)arg1 joinCallback:(CDUnknownBlockType)arg2 interruptedCallback:(CDUnknownBlockType)arg3 memberChangeCallback:(CDUnknownBlockType)arg4 videoMemberChangeCallback:(CDUnknownBlockType)arg5 speakerChangeCallback:(CDUnknownBlockType)arg6 eventCallback:(CDUnknownBlockType)arg7;
- (void)join1v1Conference:(id)arg1 joinCallback:(CDUnknownBlockType)arg2 interruptedCallback:(CDUnknownBlockType)arg3 memberChangeCallback:(CDUnknownBlockType)arg4 videoMemberChangeCallback:(CDUnknownBlockType)arg5 speakerChangeCallback:(CDUnknownBlockType)arg6 eventCallback:(CDUnknownBlockType)arg7;
- (void)joinConferenceSync:(id)arg1 joinCallback:(CDUnknownBlockType)arg2 interruptedCallback:(CDUnknownBlockType)arg3 memberChangeCallback:(CDUnknownBlockType)arg4 videoMemberChangeCallback:(CDUnknownBlockType)arg5 speakerChangeCallback:(CDUnknownBlockType)arg6 receiveCmdMsgCallback:(CDUnknownBlockType)arg7 eventCallback:(CDUnknownBlockType)arg8;
- (void)joinConference:(id)arg1 joinCallback:(CDUnknownBlockType)arg2 interruptedCallback:(CDUnknownBlockType)arg3 memberChangeCallback:(CDUnknownBlockType)arg4 videoMemberChangeCallback:(CDUnknownBlockType)arg5 speakerChangeCallback:(CDUnknownBlockType)arg6 receiveCmdMsgCallback:(CDUnknownBlockType)arg7 eventCallback:(CDUnknownBlockType)arg8;
- (_Bool)resolveExternalConflicts;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isMonoServiceUIExist;
- (void)setAudioActive:(_Bool)arg1;
- (void)onServiceTerminate;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)whenGoingToResign;
- (void)whenDidActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

