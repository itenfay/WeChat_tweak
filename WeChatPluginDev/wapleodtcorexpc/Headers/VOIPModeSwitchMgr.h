//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, VOIPModeSwitchStateMachine;

@interface VOIPModeSwitchMgr
{
    _Bool mIsWeakSessionActive;
    _Bool mIsSessionActive;
    _Bool mIsLocalVideoClosed;
    _Bool mIsRemoteVideoClosed;
    _Bool mIsMicClosed;
    _Bool mIsVoiceMode;
    _Bool mIsTalkingWithOldVersion;
    unsigned long long mRoomId;
    long long mRoomKey;
    _Bool m_isActiveByCaller;
    _Bool _m_isInitialVoiceMode;
    VOIPModeSwitchStateMachine *mStateMachine;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isInitialVoiceMode; // @synthesize m_isInitialVoiceMode=_m_isInitialVoiceMode;
@property(retain, nonatomic) VOIPModeSwitchStateMachine *mStateMachine; // @synthesize mStateMachine;
@property(nonatomic) _Bool m_isActiveByCaller; // @synthesize m_isActiveByCaller;
- (void)ChangeToAudioMode;
- (_Bool)isVoiceMode;
- (_Bool)isTalkingWithOldVersion;
- (int)CurrentStatus;
- (_Bool)isRemoteVideoClosed;
- (_Bool)isLocalVideoClosed;
- (void)StopSession;
- (void)OpenLocalEarMode;
- (void)OpenLocalEarModeNotPush;
- (void)VideoStatusChange:(_Bool)arg1 update:(_Bool)arg2 notify:(_Bool)arg3;
- (void)VideoSwitchToVoiceMode;
- (void)VideoSwitchToVoiceModeNotPushStatus;
- (void)StartSessionWithRoomId:(unsigned long long)arg1 andRoomKey:(long long)arg2;
- (void)StartWeakSessionWithRoomId:(unsigned long long)arg1 andRoomKey:(long long)arg2;
- (id)init;
- (void)SetRemoteVideoEnable:(_Bool)arg1;
- (void)SetLocalVideoEnable:(_Bool)arg1 shouldSendRUDP:(_Bool)arg2;
- (void)CallBackForModeStatus:(int)arg1;
- (void)SetAudioSpeakerPhone:(_Bool)arg1;
- (void)PushControlStatusToRemote:(unsigned int)arg1;
- (void)OnGotRemoteControlStatus:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

