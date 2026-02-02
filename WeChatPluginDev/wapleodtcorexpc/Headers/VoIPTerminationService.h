//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString;

@interface VoIPTerminationService
{
    _Bool _isWorking;
    _Bool _isCaller;
    unsigned int _mTalkingTime;
    MMTimer *_mVoipTimer;
}

+ (void)launchIfNeed;
- (void).cxx_destruct;
@property(nonatomic) unsigned int mTalkingTime; // @synthesize mTalkingTime=_mTalkingTime;
@property(retain, nonatomic) MMTimer *mVoipTimer; // @synthesize mVoipTimer=_mVoipTimer;
@property(nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) _Bool isWorking; // @synthesize isWorking=_isWorking;
- (void)voIPAudioServiceQuitCompulsivelyFromInterruption;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceInterruptionBegin;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnBeginTalk:(id)arg1;
- (void)OnBeAccepted:(id)arg1;
- (void)OnAccept:(id)arg1 ErrNo:(int)arg2;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (void)onSetIfIsIlink:(_Bool)arg1;
- (void)UIManagerDidClose;
- (void)UIManagerWillOpenWindowWithContact:(id)arg1 isCaller:(_Bool)arg2 monoMsg:(id)arg3 startInApp:(_Bool)arg4 isEarMode:(_Bool)arg5 isAudioMode:(_Bool)arg6 from:(unsigned long long)arg7 isIlink:(_Bool)arg8;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)invalidVoIPTimer;
- (void)TimerCheck;
- (void)tickVoIPTimer;
- (void)handleShutDownResponseWithProtobufCGIWrap:(id)arg1 Event:(unsigned int)arg2;
- (void)handleCancelInviteResponseWithProtobufCGIWrap:(id)arg1 Event:(unsigned int)arg2;
- (void)handleLastTerminationIfNeed;
- (void)clearByReset;
- (void)storeRoomInfo;
- (void)storeRoomInfoWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2 inviteID:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

