//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAudioPlayer, MMTimer, NSRecursiveLock, NSString, WXTalkDNSController, WXTalkRoomData, WXTalkStatusReportHelper, WXTalkieComponent;

@interface WXTalkMgr
{
    _Bool _isInTalkRoom;
    _Bool _isRealInTalkRoom;
    MMTimer *_regetMicTimer;
    _Bool _isPause;
    _Bool _isPlayingBeginSound;
    _Bool _isGettingRoomMember;
    _Bool _isRecording;
    _Bool _hasPlayGetMicSound;
    _Bool _isWantToTalk;
    unsigned int _scene;
    AVAudioPlayer *_player;
    WXTalkStatusReportHelper *_reportHelper;
    WXTalkRoomData *roomData;
    WXTalkieComponent *component;
    WXTalkDNSController *wxTalkDNSController;
    NSRecursiveLock *audioEncLock;
    NSRecursiveLock *audioDecLock;
    MMTimer *wxTalkTimer;
    struct __sFILE *recordDumpFile;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) struct __sFILE *recordDumpFile; // @synthesize recordDumpFile;
@property(retain, nonatomic) MMTimer *wxTalkTimer; // @synthesize wxTalkTimer;
@property(retain, nonatomic) NSRecursiveLock *audioDecLock; // @synthesize audioDecLock;
@property(retain, nonatomic) NSRecursiveLock *audioEncLock; // @synthesize audioEncLock;
@property(retain, nonatomic) WXTalkDNSController *wxTalkDNSController; // @synthesize wxTalkDNSController;
@property(retain, nonatomic) WXTalkieComponent *component; // @synthesize component;
@property(retain, nonatomic) WXTalkRoomData *roomData; // @synthesize roomData;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)onModifyContact:(id)arg1;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)TellOthersAllMembersExitRoom;
- (void)TellOthersWhoEnterOrExitRoom:(id)arg1;
- (void)reOpenWXTalkMode:(id)arg1;
- (_Bool)checkIfOfflineAndNeedReEnter:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleHeartBeatResponse:(id)arg1;
- (void)handleGetTalkRoomMemberResponse:(id)arg1;
- (void)SendGiveupMicrophoneRequest;
- (void)SendRegetMicrophoneRequest;
- (void)handleGetMicrophoneResponse:(id)arg1;
- (void)SendGetMicrophoneRequest;
- (void)handleExitTalkRoomResponse:(id)arg1;
- (void)SendExitTalkRoomRequest;
- (void)handleEnterTalkRoomResponse:(id)arg1;
- (int)retToErrType:(int)arg1;
- (void)SendEnterTalkRoomRequest;
- (void)stopRegetMicLogic;
- (void)startRegetMicLogic;
- (void)GiveupMicrophone;
- (void)GetMicrophone;
- (void)CloseWXTalkModeAndNotifyUI:(_Bool)arg1;
- (void)CloseWXTalkMode:(_Bool)arg1;
- (_Bool)IsRealInTalkRoom;
- (_Bool)OpenWXTalkMode:(id)arg1;
- (_Bool)CanEnterThisRoom:(id)arg1;
- (_Bool)IsOpenAnyWXTalkMode;
- (_Bool)IsOpenWXTalkMode:(id)arg1;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)stopPlaySound;
- (void)resetData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (void)UnInitAll;
- (void)InitAll;
- (void)audioDeviceRestart:(id)arg1;
- (void)audioDeviceResetCallback:(id)arg1;
- (void)Restart;
- (void)audioDevicePause:(id)arg1;
- (void)Pause;
- (void)audioDeviceForceStop:(id)arg1;
- (void)ForceStop;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)OnEngineError:(int)arg1;
- (void)OnOpenEngineSuccess;
- (void)NotifyMainThreadEngineError;
- (void)NotifyMainThreadEnterRoomOK;
- (void)handleEndInterruption;
- (void)handleBeginInterruption;
- (void)StopSession;
- (void)StartSession;
- (void)CloseRecordDumpFile;
- (void)CreateRecordDumpFile;
- (void)TimerCheck;
- (void)SendHeartBeatRequest;
- (void)iRemoteControlCheckShouldFinishRecord;
- (void)iRemoteControlCheckShouldBeginRecord;
- (int)AudioDevGetData:(char *)arg1 length:(unsigned int)arg2;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned int)arg2;
- (_Bool)isGetDataReady;
- (void)DumpToRecordFile:(char *)arg1 withDataLen:(unsigned int)arg2;
- (void)NotifyMainThreadCurrentSpeakingStatus:(id)arg1;
- (void)NotifyMainThreadHasTalkingData;
- (void)NotifyMainThreadNoTalkingData;
- (void)PlayBeginSound;
- (void)StopReportNobodyTalking;
- (void)ReportNobodyTalking;
- (void)SetCurrentSpeakingMember:(id)arg1;
- (void)GetUnknowMemberByMemberId:(unsigned int)arg1;
- (void)StopRecord;
- (void)StartPlay;
- (void)StartRecord;
- (void)StopTalk;
- (void)StartTalk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

