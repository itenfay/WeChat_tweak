//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMNewVoiceInputReportObj, NSSet, NSString, RecordInfoContentView, SightIconView, UIButton, UILabel, VoiceRecordTextureButtonView;
@protocol RecordViewDelegate, VoiceRecordViewDelegate;

@interface VoiceRecordView : UIView
{
    _Bool _bPreventRecordViewExit;
    _Bool _bNeedPopUpBackgroundViewController;
    _Bool _isEnableVoiceTrans;
    _Bool _isStartEditing;
    _Bool _needShowFirstTips;
    _Bool _needShowSecondTips;
    unsigned int _inputLanguageType;
    id <RecordViewDelegate> _delegate;
    id <VoiceRecordViewDelegate> _recordDelegate;
    MMNewVoiceInputReportObj *_reportObj;
    NSSet *_originTouches;
    NSString *_chatName;
    UIView *_backgroundBlurView;
    UIView *_backgroundView;
    CAGradientLayer *_backgroundGradientLayer;
    double _operateButtonSeparateProportion;
    UIButton *_cancelOperateButton;
    UIButton *_translateOperateButton;
    UILabel *_cancelLabel;
    UILabel *_translateLabel;
    UILabel *_tipsLabel;
    VoiceRecordTextureButtonView *_bottomContentView;
    RecordInfoContentView *_infoContentView;
    UIView *_displayBackgroundContentView;
    UIView *_inputToolView;
    UIButton *_inputCancelButton;
    UIButton *_inputSendOriginButton;
    UIButton *_inputSendTextButton;
    SightIconView *_inputSendLoadingView;
    long long _inputSendTextButtonState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int inputLanguageType; // @synthesize inputLanguageType=_inputLanguageType;
@property(nonatomic) _Bool needShowSecondTips; // @synthesize needShowSecondTips=_needShowSecondTips;
@property(nonatomic) _Bool needShowFirstTips; // @synthesize needShowFirstTips=_needShowFirstTips;
@property(nonatomic) long long inputSendTextButtonState; // @synthesize inputSendTextButtonState=_inputSendTextButtonState;
@property(retain, nonatomic) SightIconView *inputSendLoadingView; // @synthesize inputSendLoadingView=_inputSendLoadingView;
@property(retain, nonatomic) UIButton *inputSendTextButton; // @synthesize inputSendTextButton=_inputSendTextButton;
@property(retain, nonatomic) UIButton *inputSendOriginButton; // @synthesize inputSendOriginButton=_inputSendOriginButton;
@property(retain, nonatomic) UIButton *inputCancelButton; // @synthesize inputCancelButton=_inputCancelButton;
@property(retain, nonatomic) UIView *inputToolView; // @synthesize inputToolView=_inputToolView;
@property(retain, nonatomic) UIView *displayBackgroundContentView; // @synthesize displayBackgroundContentView=_displayBackgroundContentView;
@property(retain, nonatomic) RecordInfoContentView *infoContentView; // @synthesize infoContentView=_infoContentView;
@property(retain, nonatomic) VoiceRecordTextureButtonView *bottomContentView; // @synthesize bottomContentView=_bottomContentView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *translateLabel; // @synthesize translateLabel=_translateLabel;
@property(retain, nonatomic) UILabel *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(retain, nonatomic) UIButton *translateOperateButton; // @synthesize translateOperateButton=_translateOperateButton;
@property(retain, nonatomic) UIButton *cancelOperateButton; // @synthesize cancelOperateButton=_cancelOperateButton;
@property(nonatomic) double operateButtonSeparateProportion; // @synthesize operateButtonSeparateProportion=_operateButtonSeparateProportion;
@property(nonatomic) _Bool isStartEditing; // @synthesize isStartEditing=_isStartEditing;
@property(retain, nonatomic) CAGradientLayer *backgroundGradientLayer; // @synthesize backgroundGradientLayer=_backgroundGradientLayer;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) _Bool isEnableVoiceTrans; // @synthesize isEnableVoiceTrans=_isEnableVoiceTrans;
@property(retain, nonatomic) NSSet *originTouches; // @synthesize originTouches=_originTouches;
@property(nonatomic) _Bool bNeedPopUpBackgroundViewController; // @synthesize bNeedPopUpBackgroundViewController=_bNeedPopUpBackgroundViewController;
@property(nonatomic) _Bool bPreventRecordViewExit; // @synthesize bPreventRecordViewExit=_bPreventRecordViewExit;
@property(retain, nonatomic) MMNewVoiceInputReportObj *reportObj; // @synthesize reportObj=_reportObj;
@property(nonatomic) __weak id <VoiceRecordViewDelegate> recordDelegate; // @synthesize recordDelegate=_recordDelegate;
@property(nonatomic) __weak id <RecordViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onStartRecordingFromUsr:(id)arg1 ToUsr:(id)arg2;
- (void)onCommitText;
- (void)onTransFail;
- (void)onTransSuccess;
- (void)onReTrans;
- (double)getContentYOffset;
- (double)getVoiceViewBottomPadding;
- (double)getVisibleHeight;
- (void)onInputViewChangedWithInputBar:(id)arg1;
- (void)onEndEditing;
- (void)onBeginEditWithInputBar:(id)arg1;
- (void)onClickSendTextBtn;
- (void)onClickSendOriVoiceBtn;
- (void)onClickDeleteBtn;
- (_Bool)isInPageSheetMode;
- (void)addVoiceMsgToScreen:(id)arg1;
- (void)animateShowMsg:(id)arg1;
- (void)doFadeAnimationCompletion:(CDUnknownBlockType)arg1;
- (void)transformToRecordState:(unsigned long long)arg1;
- (void)makeImpactFeedback;
- (void)HiddenRecordView;
- (void)ShowRecordingTimeoutCount:(long long)arg1 isShow:(_Bool)arg2;
- (void)StartTooLongTips;
- (void)StartTooShortTips;
- (void)StartRecordAnimate;
- (void)ShowRecording;
- (void)ShowPreparing;
- (void)doRealExitVoiceRecordWithViewControllerPopAnimated:(_Bool)arg1;
- (void)exitVoiceRecord;
- (void)exitVoiceRecordNeedDelay:(_Bool)arg1 andViewControllerPopAnimated:(_Bool)arg2;
- (void)onTouchEndSendVoiceMsg;
- (void)sendVoiceMsgWithFailStatus;
- (void)onVoiceRecordFinish;
- (void)startTextMsgAnimate:(id)arg1;
- (void)setPeakPower:(float)arg1;
- (void)onTouchMoveWithTouches:(id)arg1;
- (void)startRecordingWithRecordBtn:(id)arg1;
@property(readonly, nonatomic) _Bool bPrepare;
- (unsigned long long)getRecordState;
- (void)layoutSubviews;
- (_Bool)needOpenRealTimeTranslate;
- (double)getOperateButtonSeparateProportion;
- (void)changeButtonWithScale:(float)arg1 Button:(id)arg2;
- (void)restoreBaseMsgContentViewControllerAnimated:(_Bool)arg1;
- (void)setNavigationBarDisable:(_Bool)arg1;
- (void)removeFromSuperview;
- (id)getBaseMsgContentViewController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 forbidVoiceTrans:(_Bool)arg2 chatName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

