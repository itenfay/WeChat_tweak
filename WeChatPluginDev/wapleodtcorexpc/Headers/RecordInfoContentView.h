//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AudioRecorderUserData, CADisplayLink, CALayer, EmoticonBoardView, MMGrowTextView, MMNewVoiceInputReportObj, MMTimer, MMUIButton, NSMutableArray, NSString, SightIconView, UIButton, UILabel, VoiceRecordSelectLanguageView, WCInputController, WCRecordFeedbackView;
@protocol RecordInfoContentViewDelegate;

@interface RecordInfoContentView : UIView
{
    _Bool _prepare;
    _Bool _bIsForceEndTrans;
    _Bool _needShowCountDown;
    _Bool _bNeedShowTips;
    _Bool _bTransStartSucc;
    _Bool _bCanStartTextViewAnimation;
    _Bool _bRealTimeTranslate;
    unsigned int _localId;
    unsigned int _inputLanguageType;
    unsigned int _translatingWordingIndex;
    int _formatTextState;
    NSString *_chatName;
    UIView *_inputBar;
    UIView *_operatePanelView;
    UIView *_arrowIconView;
    MMNewVoiceInputReportObj *_reportObj;
    unsigned long long _recordState;
    AudioRecorderUserData *_recordInfo;
    id <RecordInfoContentViewDelegate> _delegate;
    unsigned long long _transState;
    NSMutableArray *_arrVoiceIds;
    UIView *_bottomView;
    UIView *_contentView;
    MMGrowTextView *_transTextView;
    EmoticonBoardView *_emoticonBoardView;
    WCInputController *_inputController;
    WCRecordFeedbackView *_feedbackView;
    SightIconView *_preparingView;
    UILabel *_countdownLabel;
    UIButton *_errorButton;
    UILabel *_tipsLabel;
    UIButton *_inputModeButton;
    double _originBottom;
    MMUIButton *_moreButton;
    VoiceRecordSelectLanguageView *_selectedLanguageView;
    double _currentLength;
    double _widthGrowBeginTimeStamp;
    CADisplayLink *_widthGrowDisplayLink;
    CALayer *_fakeAnimateLayer;
    MMTimer *_translatingTimer;
    NSString *_translatedText;
    NSString *_translatingWording;
    NSString *_textToFormat;
    NSString *_formatedText;
    MMTimer *_formattingTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *formattingTimer; // @synthesize formattingTimer=_formattingTimer;
@property(retain, nonatomic) NSString *formatedText; // @synthesize formatedText=_formatedText;
@property(retain, nonatomic) NSString *textToFormat; // @synthesize textToFormat=_textToFormat;
@property(nonatomic) int formatTextState; // @synthesize formatTextState=_formatTextState;
@property(nonatomic) _Bool bRealTimeTranslate; // @synthesize bRealTimeTranslate=_bRealTimeTranslate;
@property(nonatomic) _Bool bCanStartTextViewAnimation; // @synthesize bCanStartTextViewAnimation=_bCanStartTextViewAnimation;
@property(nonatomic) _Bool bTransStartSucc; // @synthesize bTransStartSucc=_bTransStartSucc;
@property(nonatomic) _Bool bNeedShowTips; // @synthesize bNeedShowTips=_bNeedShowTips;
@property(nonatomic) unsigned int translatingWordingIndex; // @synthesize translatingWordingIndex=_translatingWordingIndex;
@property(retain, nonatomic) NSString *translatingWording; // @synthesize translatingWording=_translatingWording;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText=_translatedText;
@property(retain, nonatomic) MMTimer *translatingTimer; // @synthesize translatingTimer=_translatingTimer;
@property(retain, nonatomic) CALayer *fakeAnimateLayer; // @synthesize fakeAnimateLayer=_fakeAnimateLayer;
@property(retain, nonatomic) CADisplayLink *widthGrowDisplayLink; // @synthesize widthGrowDisplayLink=_widthGrowDisplayLink;
@property(nonatomic) double widthGrowBeginTimeStamp; // @synthesize widthGrowBeginTimeStamp=_widthGrowBeginTimeStamp;
@property(nonatomic) double currentLength; // @synthesize currentLength=_currentLength;
@property(retain, nonatomic) VoiceRecordSelectLanguageView *selectedLanguageView; // @synthesize selectedLanguageView=_selectedLanguageView;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) double originBottom; // @synthesize originBottom=_originBottom;
@property(retain, nonatomic) UIButton *inputModeButton; // @synthesize inputModeButton=_inputModeButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *errorButton; // @synthesize errorButton=_errorButton;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(nonatomic) _Bool needShowCountDown; // @synthesize needShowCountDown=_needShowCountDown;
@property(retain, nonatomic) SightIconView *preparingView; // @synthesize preparingView=_preparingView;
@property(retain, nonatomic) WCRecordFeedbackView *feedbackView; // @synthesize feedbackView=_feedbackView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) MMGrowTextView *transTextView; // @synthesize transTextView=_transTextView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool bIsForceEndTrans; // @synthesize bIsForceEndTrans=_bIsForceEndTrans;
@property(retain, nonatomic) NSMutableArray *arrVoiceIds; // @synthesize arrVoiceIds=_arrVoiceIds;
@property(nonatomic) unsigned long long transState; // @synthesize transState=_transState;
@property(nonatomic) __weak id <RecordInfoContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AudioRecorderUserData *recordInfo; // @synthesize recordInfo=_recordInfo;
@property(nonatomic) unsigned int inputLanguageType; // @synthesize inputLanguageType=_inputLanguageType;
@property(nonatomic) unsigned long long recordState; // @synthesize recordState=_recordState;
@property(retain, nonatomic) MMNewVoiceInputReportObj *reportObj; // @synthesize reportObj=_reportObj;
@property(retain, nonatomic) UIView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(nonatomic) __weak UIView *operatePanelView; // @synthesize operatePanelView=_operatePanelView;
@property(retain, nonatomic) UIView *inputBar; // @synthesize inputBar=_inputBar;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) _Bool prepare; // @synthesize prepare=_prepare;
- (_Bool)shouldFormatText;
- (void)setAttributedText:(id)arg1 animated:(_Bool)arg2;
- (void)updateFormatTextResult:(_Bool)arg1;
- (void)updateFormatTextResult;
- (void)invalidateFormatTextTimer;
- (void)startFormatTextTimer;
- (void)onConfirmedWithLanguageType:(unsigned int)arg1;
- (void)updateTextInputRelatedView;
- (void)onInputModeChangingTo:(long long)arg1;
- (void)keyboardDidHide;
- (void)keyboardHiding;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)keyboardShowing;
- (double)getVisibleHeight;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (_Bool)canSelectEmoji:(id)arg1;
- (void)OnRecordVoiceChangeWithUserData:(id)arg1;
- (void)OnVoiceTransResultChange:(id)arg1 InputId:(unsigned int)arg2;
- (void)OnVoiceTransTimeout:(unsigned int)arg1;
- (void)OnVoiceTransEnd:(unsigned int)arg1 VoiceIds:(id)arg2;
- (id)generateAttrTextFrom:(id)arg1 withUncertainLength:(unsigned int)arg2 andTranslatingWording:(id)arg3;
- (void)displayTranslateResultText:(_Bool)arg1;
- (void)displayTranslateResultText;
- (unsigned int)getUncertainLength;
- (unsigned int)getSuffixDotCountWithString:(id)arg1;
- (void)updateTranslatingWording:(_Bool)arg1;
- (void)checkChangeTranslatingWording;
- (void)makeTranslateStopWithError:(id)arg1;
- (void)pauseTranslate;
- (void)realStartTranslate;
- (void)startTranslate;
- (void)startRealTimeTranslate;
- (void)startTranslateTimer;
- (void)invalidateTranslateTimer;
- (void)changeRecordStateTo:(unsigned long long)arg1 CenterX:(double)arg2;
- (void)resignFirstResponder;
- (id)getTransResult;
- (id)getContentView;
- (void)onGrowWidthDisplayLinkCallback;
- (void)startWidthGrowDisplayLink;
- (void)removeWidthGrowDisplayLink;
- (void)setErrorMessage:(id)arg1;
- (void)setTimeoutCountDown:(long long)arg1 needShow:(_Bool)arg2;
- (void)setBubbleBackgroundColor:(id)arg1;
- (void)setPeakPower:(float)arg1;
- (void)onTapMoreButton;
- (void)onTapInputModeButton;
- (void)updateSubviews;
- (void)updateInputModeButton:(long long)arg1;
- (void)adjustTextMaxSize;
- (void)resizeTextView;
- (void)updateFeedbackViewWithRecordState:(unsigned long long)arg1;
- (void)updateCountDownLabelAndFeedbackViewWithRecordState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)createPreparingView;
- (void)removeFeedbackView;
- (id)createTransTextView;
- (void)dealloc;
- (id)initWithBottomView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

