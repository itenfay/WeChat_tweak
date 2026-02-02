//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMNewVoiceInputReportObj, MMTransparentButton, NSString;
@protocol RecordViewDelegate;

@interface RecordAdapterView : UIView
{
    _Bool _isTouchEnd;
    _Bool _bForbidVoiceTrans;
    _Bool _bPreventRecordViewExit;
    NSString *_chatUserName;
    id <RecordViewDelegate> _delegate;
    MMTransparentButton *_recordButton;
    MMNewVoiceInputReportObj *_reportObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMNewVoiceInputReportObj *reportObj; // @synthesize reportObj=_reportObj;
@property(nonatomic) _Bool bPreventRecordViewExit; // @synthesize bPreventRecordViewExit=_bPreventRecordViewExit;
@property(nonatomic) _Bool bForbidVoiceTrans; // @synthesize bForbidVoiceTrans=_bForbidVoiceTrans;
@property(nonatomic) _Bool isTouchEnd; // @synthesize isTouchEnd=_isTouchEnd;
@property(nonatomic) __weak MMTransparentButton *recordButton; // @synthesize recordButton=_recordButton;
@property(nonatomic) __weak id <RecordViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
- (void)onTouchEndSendVoiceMsg;
- (void)startTextMsgAnimate:(id)arg1;
- (void)startRecordingWithRecordBtn:(id)arg1;
- (_Bool)isPointInRecordButton:(struct CGPoint)arg1;
- (unsigned long long)getRecordState;
- (_Bool)onRecordCountRemainSec:(long long)arg1 IsShow:(_Bool)arg2;
- (_Bool)changeStateWhenRecordEnd;
- (void)forceStopVoiceRecording;
- (void)cancelVoiceRecording;
- (void)hiddenRecordView;
- (void)showRecordStartFailTips:(id)arg1;
- (void)showTooLongTips;
- (void)showTooShortTips;
- (void)showRecordingTips;
- (void)showRecordCancelTips;
- (void)showPreparingTips;
- (void)setPeakPower:(float)arg1;
- (void)onTouchCancelWithTouches:(id)arg1;
- (void)onTouchEndWithTouches:(id)arg1;
- (void)onTouchMoveWithTouches:(id)arg1;
- (void)onTouchBeginWithTouches:(id)arg1;
- (_Bool)isRecordBkgShow;
- (_Bool)needPopUpBackgroundViewController;
- (_Bool)canShowTransEntry;
- (id)initWithFrame:(struct CGRect)arg1 ForbidVoiceTrans:(_Bool)arg2 ChatName:(id)arg3;

@end

