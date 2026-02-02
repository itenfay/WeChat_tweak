//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, VoiceRecordView;

@interface RecordViewV2
{
    VoiceRecordView *_recordView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoiceRecordView *recordView; // @synthesize recordView=_recordView;
- (void)onTouchEndSendVoiceMsg;
- (void)forceStopVoiceRecording;
- (void)onExit;
- (void)startTextMsgAnimate:(id)arg1;
- (void)startRecordingWithRecordBtn:(id)arg1;
- (void)cancelVoiceRecording;
- (void)cancelTrans;
- (_Bool)changeStateWhenRecordEnd;
- (_Bool)onRecordCountRemainSec:(long long)arg1 IsShow:(_Bool)arg2;
- (void)hiddenRecordView;
- (void)showTooLongTips;
- (void)showRecordStartFailTips:(id)arg1;
- (void)showTooShortTips;
- (void)showRecordingTips;
- (void)showPreparingTips;
- (void)setPeakPower:(float)arg1;
- (void)onTouchCancelWithTouches:(id)arg1;
- (void)onTouchEndWithTouches:(id)arg1;
- (void)onTouchMoveWithTouches:(id)arg1;
- (void)onTouchBeginWithTouches:(id)arg1;
- (void)setBPreventRecordViewExit:(_Bool)arg1;
- (_Bool)needPopUpBackgroundViewController;
- (_Bool)bPreventRecordViewExit;
- (void)setReportObj:(id)arg1;
- (void)deviceDidRotate:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 ForbidVoiceTrans:(_Bool)arg2 ChatName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

