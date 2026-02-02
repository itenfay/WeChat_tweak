//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AUAudioDevice, MMTimer, NSRecursiveLock, NSString, PSTNComponent, PSTNDialData, VOIPKernelLog;

@interface PSTNMgr
{
    int mStatus;
    _Bool mIsInterrupted;
    _Bool mIsCanConnect;
    _Bool mIsConnected;
    _Bool mIsCanTalk;
    _Bool mIsTalked;
    _Bool mIsEngineStarted;
    _Bool mIsCanSendData;
    _Bool mIsAudioStarted;
    _Bool mIsRecordStarted;
    _Bool mIsPreConnectFail;
    _Bool mIsPSTNAnswer;
    _Bool mIsPSTNAccepted;
    unsigned int mLastNetworkStatus;
    int mAudioCodecType;
    int mShutDownStatus;
    _Bool mIsSpeaker;
    unsigned int mLastNetType;
    VOIPKernelLog *mPstnKernelLog;
    int mErrCode;
    int mCntTryStartAudioDev;
    unsigned int mInviteId;
    PSTNDialData *mDialData;
    PSTNComponent *mComponent;
    AUAudioDevice *mAudioDevice;
    NSRecursiveLock *mAudioEncLock;
    NSRecursiveLock *mAudioDecLock;
    NSRecursiveLock *mStartAudioLock;
    NSRecursiveLock *mStartRecordLock;
    NSRecursiveLock *inputVideoRenderLock;
    MMTimer *mPSTNHeartbeatTimer;
    MMTimer *mPSTNDialStatusTimer;
    unsigned long long mLastDisconnectSysCallTime;
    NSRecursiveLock *_mAudioPlayLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *mAudioPlayLock; // @synthesize mAudioPlayLock=_mAudioPlayLock;
@property(nonatomic) unsigned long long mLastDisconnectSysCallTime; // @synthesize mLastDisconnectSysCallTime;
@property(nonatomic) unsigned int mInviteId; // @synthesize mInviteId;
@property(nonatomic) int mCntTryStartAudioDev; // @synthesize mCntTryStartAudioDev;
@property(retain, nonatomic) MMTimer *mPSTNDialStatusTimer; // @synthesize mPSTNDialStatusTimer;
@property(retain, nonatomic) MMTimer *mPSTNHeartbeatTimer; // @synthesize mPSTNHeartbeatTimer;
@property(retain, nonatomic) NSRecursiveLock *inputVideoRenderLock; // @synthesize inputVideoRenderLock;
@property(retain, nonatomic) NSRecursiveLock *mStartRecordLock; // @synthesize mStartRecordLock;
@property(retain, nonatomic) NSRecursiveLock *mStartAudioLock; // @synthesize mStartAudioLock;
@property(retain, nonatomic) NSRecursiveLock *mAudioDecLock; // @synthesize mAudioDecLock;
@property(retain, nonatomic) NSRecursiveLock *mAudioEncLock; // @synthesize mAudioEncLock;
@property(retain, nonatomic) AUAudioDevice *mAudioDevice; // @synthesize mAudioDevice;
@property(retain, nonatomic) PSTNComponent *mComponent; // @synthesize mComponent;
@property(retain, nonatomic) PSTNDialData *mDialData; // @synthesize mDialData;
@property(nonatomic) int mErrCode; // @synthesize mErrCode;
@property(nonatomic) int mStatus; // @synthesize mStatus;
- (void)PstnCheckCountryCode:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (unsigned int)getIsConnected;
- (void)SetAudioCodecType:(int)arg1;
- (void)SetCountryCode:(id)arg1;
- (void)SetSpeakerPhone:(_Bool)arg1;
- (void)SetMicroPhoneMute:(_Bool)arg1;
- (void)PressButton:(int)arg1;
- (void)Hangup;
- (void)CancelCall;
- (void)PSTNCall:(id)arg1 phoneNum:(id)arg2 withCallType:(int)arg3 DialScene:(unsigned int)arg4 CountryCodeFrom:(unsigned int)arg5;
- (int)getNetSpeed;
- (void)dealloc;
- (id)init;
- (void)SetMVEInfo:(CDStruct_c3594123 *)arg1;
- (int)GetCPUCapacity;
- (unsigned int)GetNetType;
- (int)OnTransportChannelEvent:(unsigned short)arg1 ErrNo:(int)arg2;
- (int)OnTransportChannelCmd:(void *)arg1 len:(int)arg2;
- (void)onAcceptBydata;
- (void)ConnectFail:(id)arg1;
- (void)StopConnect;
- (void)StartConnect;
- (void)tryStartConnect;
- (void)SendCheckNumberRequest:(id)arg1;
- (void)SendRedirectRequest;
- (void)SendStatReportRequest;
- (void)SendHeartbeatRequest;
- (void)SendShutdownRequest;
- (void)SendCancelInviteRequest;
- (void)SendInviteRequestBy:(id)arg1 phoneNum:(id)arg2 withCallType:(int)arg3 DialScene:(unsigned int)arg4 CountryCodeFrom:(unsigned int)arg5;
- (void)SetReportData:(id *)arg1 channelReport:(id *)arg2 engineReport:(id *)arg3;
- (void)HandlePSTNCheckNumberResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNRedirectResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNStatReportResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNHeartbeatResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNShutdownResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNCancelInviteResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandlePSTNInviteResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)StopSessionWithProtocolErr:(int)arg1;
- (void)StopSession;
- (void)StartSession;
- (void)handleEnterForeground;
- (void)handleEnterBackground;
- (void)interruptWcoCall;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)restartAudioDevicePSTN;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)DialStatusTimerCheck;
- (void)HeartbeatTimerCheck;
- (void)UnInitAll;
- (void)InitAll;
- (void)OnGotRemoteStatus:(unsigned int)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(id)arg4 ErrTitle:(id)arg5 DataFlag:(unsigned int)arg6;
- (void)OnGotDTMFPayloadType:(unsigned int)arg1;
- (void)OnSyncError:(int)arg1;
- (void)TalkBroken:(id)arg1;
- (void)StopTalk;
- (void)StartAudioData;
- (void)StartAudioDataInNewThread;
- (void)StartRecordAndPlayAudioForVoip;
- (void)StartTalk;
- (void)tryStartTalk;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (int)OnTransportChannelData:(int)arg1 pData:(void *)arg2 len:(int)arg3;
- (void)DataNotify_Arq:(char *)arg1 len:(int)arg2 type:(unsigned char)arg3;
- (void)DataNotify_pp:(char *)arg1 len:(int)arg2 param:(short)arg3;
- (void)DataNotify:(char *)arg1 len:(int)arg2 param:(void *)arg3;
- (void)InfoNotify:(char *)arg1;
- (void)EventNotify:(long long)arg1 param:(int)arg2 type:(int)arg3;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceUnPluginHeadset:(id)arg1;
- (void)audioDevicePluginHeadset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

