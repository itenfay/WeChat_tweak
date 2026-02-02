//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AudioRecorderUserData, EmoticonBoardView, MMGrowTextView, MMNewVoiceInputReportObj, MMTimer, MMUIButton, NSString, UIButton, UIImage, UIPanGestureRecognizer, VoiceTransLanguageSelectView, WCInputController;
@protocol MMVoiceTransViewDelegate;

@interface MMVoiceTransView : UIView
{
    _Bool _bShowingEmoj;
    _Bool _bIsEditingMode;
    _Bool _bIsForceEndTrans;
    unsigned int _currentInputId;
    unsigned int _inputLanguageType;
    unsigned int _translatingWordingIndex;
    NSString *_chatUserName;
    AudioRecorderUserData *_userData;
    id <MMVoiceTransViewDelegate> _delegate;
    MMNewVoiceInputReportObj *_reportObj;
    unsigned long long _transState;
    UIImage *_stickerImage;
    UIImage *_stickerHLImage;
    UIImage *_keyboradImage;
    UIImage *_keyboradHLImage;
    UIButton *_sendButton;
    MMUIButton *_cancelButton;
    MMUIButton *_endEditButton;
    UIView *_operatePanelView;
    MMUIButton *_expressionButton;
    MMUIButton *_languageSwitchBtn;
    UIButton *_sendOriVoiceMsgBtn;
    MMGrowTextView *_transTextView;
    WCInputController *_inputController;
    EmoticonBoardView *_emoticonBoardView;
    VoiceTransLanguageSelectView *_languageSelectView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    MMTimer *_timer;
    NSString *_translatedText;
    NSString *_translatingWording;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int translatingWordingIndex; // @synthesize translatingWordingIndex=_translatingWordingIndex;
@property(nonatomic) _Bool bIsForceEndTrans; // @synthesize bIsForceEndTrans=_bIsForceEndTrans;
@property(nonatomic) _Bool bIsEditingMode; // @synthesize bIsEditingMode=_bIsEditingMode;
@property(nonatomic) _Bool bShowingEmoj; // @synthesize bShowingEmoj=_bShowingEmoj;
@property(retain, nonatomic) NSString *translatingWording; // @synthesize translatingWording=_translatingWording;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText=_translatedText;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) VoiceTransLanguageSelectView *languageSelectView; // @synthesize languageSelectView=_languageSelectView;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) MMGrowTextView *transTextView; // @synthesize transTextView=_transTextView;
@property(retain, nonatomic) UIButton *sendOriVoiceMsgBtn; // @synthesize sendOriVoiceMsgBtn=_sendOriVoiceMsgBtn;
@property(retain, nonatomic) MMUIButton *languageSwitchBtn; // @synthesize languageSwitchBtn=_languageSwitchBtn;
@property(retain, nonatomic) MMUIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) UIView *operatePanelView; // @synthesize operatePanelView=_operatePanelView;
@property(retain, nonatomic) MMUIButton *endEditButton; // @synthesize endEditButton=_endEditButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIImage *keyboradHLImage; // @synthesize keyboradHLImage=_keyboradHLImage;
@property(retain, nonatomic) UIImage *keyboradImage; // @synthesize keyboradImage=_keyboradImage;
@property(retain, nonatomic) UIImage *stickerHLImage; // @synthesize stickerHLImage=_stickerHLImage;
@property(retain, nonatomic) UIImage *stickerImage; // @synthesize stickerImage=_stickerImage;
@property(nonatomic) unsigned long long transState; // @synthesize transState=_transState;
@property(retain, nonatomic) MMNewVoiceInputReportObj *reportObj; // @synthesize reportObj=_reportObj;
@property(nonatomic) __weak id <MMVoiceTransViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AudioRecorderUserData *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(nonatomic) unsigned int inputLanguageType; // @synthesize inputLanguageType=_inputLanguageType;
@property(nonatomic) unsigned int currentInputId; // @synthesize currentInputId=_currentInputId;
- (void)onCurInputLanguageChange:(unsigned int)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(_Bool)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)adaptTransTextViewHeightWithKeyboardHeight:(double)arg1;
- (void)didCommitText:(id)arg1;
- (double)getVisibleHeight;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)OnRecordVoiceChangeWithUserData:(id)arg1;
- (void)OnVoiceTransResultChange:(id)arg1 InputId:(unsigned int)arg2;
- (void)OnVoiceTransTimeout:(unsigned int)arg1;
- (void)OnVoiceTransEnd:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)onTextViewPanRecognizerStateChanged:(double)arg1 CurrentPositionY:(double)arg2 TopAtPanBegin:(double)arg3;
- (void)onPanRecognizerStateChanged:(double)arg1 CurrentPositionY:(double)arg2 TopAtPanBegin:(double)arg3;
- (void)onPanGestureRecognizerAction:(id)arg1;
- (void)makeTransStop;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onLanguageSwitchBtnClick:(id)arg1;
- (void)onEndEditButtonClick:(id)arg1;
- (void)onCancelBtnClick:(id)arg1;
- (void)onSendBtnClick:(id)arg1;
- (void)onClickSendOriMsgBtn;
- (void)updateSwitchBtn;
- (id)generateAttrTextFrom:(id)arg1 withUncertainLength:(unsigned int)arg2 TranslatingWording:(id)arg3;
- (_Bool)CTRectContainsPointError:(struct CGRect)arg1 point:(struct CGPoint)arg2 error:(double)arg3;
- (unsigned int)getSuffixDotCountWithString:(id)arg1;
- (unsigned int)getUncertainLength;
- (void)changeTranslatingWording:(id)arg1;
- (void)checkChangeTranslatingWording;
- (void)changeToTranslatingState;
- (void)delayCheckTransResult;
- (void)startShowTranslatingWording;
- (void)displayResultText;
- (void)resetState;
- (void)initPanGestureRecognizer;
- (void)initEmoticonView;
- (void)initInputController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 ChatName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

