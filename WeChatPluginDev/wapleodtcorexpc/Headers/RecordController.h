//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString;
@protocol RecordControllerDelegate;

@interface RecordController
{
    MMTimer *m_TimeoutTimer;
    id <RecordControllerDelegate> m_delegate;
    _Bool m_bRecording;
    _Bool m_bRecordEnabled;
    unsigned int m_uiTmpRecordID;
    _Bool m_bRemoteControl;
    unsigned int m_currentTmpFormat;
    double m_iLastMsgSentTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiTmpRecordID; // @synthesize m_uiTmpRecordID;
@property(nonatomic) __weak id <RecordControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)dealloc;
- (void)Reset;
- (void)onVoiceMsgSent:(id)arg1;
- (void)OnSendError:(id)arg1 ErrNo:(int)arg2;
- (void)OnMsgSent:(id)arg1;
- (void)OnAddMsg:(id)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnRecordStartFail:(id)arg1;
- (void)OnEndRecording:(unsigned int)arg1;
- (void)OnBeginRecording:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)iRemoteControlCheckShouldFinishRecord;
- (void)iRemoteControlCheckShouldBeginRecord;
- (_Bool)canRemoteRecord;
- (void)interruptRecording;
- (void)stopRecording_notification:(id)arg1;
- (id)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (void)CancelRecording;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
- (void)StopRecording;
- (void)StopRecordingInternal:(id)arg1;
- (void)StopRecordingInternal;
- (_Bool)StartRecordingFromUsr:(id)arg1 ToUsr:(id)arg2 UserInfo:(id)arg3;
- (void)StartTmpRecording;
- (void)StartTmpRecording:(unsigned int)arg1;
- (void)StartTmpRecordInternal;
- (void)StartRecordingInternal:(id)arg1;
- (void)RecordingTimeOutCounting;
- (void)TooLongTips;
- (void)TooShortTips;
- (void)ResetStateWithNotifyResetTips:(id)arg1;
- (void)setButtonHighlighted:(_Bool)arg1;
- (_Bool)isRecording;
- (id)init;
- (void)UnRegister;
- (void)Register;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

