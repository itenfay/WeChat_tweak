//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardView, MMGrowTextView, MMUILabel, ModifyPatSuffixLogic, NSString, PatSuffixWrap, UIButton, UIImpactFeedbackGenerator, UIView, WCInputController, WCSingleEmoticonInputView;

@interface ModifyPatSuffixPageSheetViewController
{
    CDUnknownBlockType _beginCommitHandler;
    CDUnknownBlockType _endCommitHandler;
    MMUILabel *_prefixLabel;
    UIView *_backgroundView;
    MMUILabel *_descriptionLabel;
    MMGrowTextView *_textView;
    UIButton *_doneButton;
    EmoticonBoardView *_emoticonBoardView;
    UIView *_inputBackgroundView;
    WCSingleEmoticonInputView *_inputBar;
    WCInputController *_inputController;
    double _currentInputViewHeight;
    long long _currentOrientation;
    NSString *_sessionId;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    PatSuffixWrap *_selfPatSuffixWrap;
    ModifyPatSuffixLogic *_modifyPatSuffixLogic;
    ModifyPatSuffixPageSheetViewController *_viewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ModifyPatSuffixPageSheetViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) ModifyPatSuffixLogic *modifyPatSuffixLogic; // @synthesize modifyPatSuffixLogic=_modifyPatSuffixLogic;
@property(retain, nonatomic) PatSuffixWrap *selfPatSuffixWrap; // @synthesize selfPatSuffixWrap=_selfPatSuffixWrap;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) double currentInputViewHeight; // @synthesize currentInputViewHeight=_currentInputViewHeight;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) WCSingleEmoticonInputView *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUILabel *prefixLabel; // @synthesize prefixLabel=_prefixLabel;
@property(copy, nonatomic) CDUnknownBlockType endCommitHandler; // @synthesize endCommitHandler=_endCommitHandler;
@property(copy, nonatomic) CDUnknownBlockType beginCommitHandler; // @synthesize beginCommitHandler=_beginCommitHandler;
- (void)OnModifyPatSuffixWithResult:(unsigned int)arg1 errorMsgTitle:(id)arg2 errorMsgContent:(id)arg3 errorCode:(int)arg4;
- (void)onInputViewExpressionButtonClicked:(id)arg1;
- (void)updateCurrentInputViewHeightAnimated:(id)arg1;
- (void)textViewTextDidExceedMaxLength;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)keyboardHiding;
- (void)keyboardShowing;
- (void)keyboardWillShow;
- (void)onInputModeChangingTo:(long long)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)reportAction:(unsigned long long)arg1 errorCode:(int)arg2;
- (unsigned int)getMaxPatSuffixLength;
- (void)onTapDoneButton;
- (void)checkDone;
- (void)changeBackDescription;
- (void)changeToExceedMaxLength;
- (void)updateDetailViewLayoutAnimated:(_Bool)arg1;
- (void)configInputView;
- (void)configDetailView;
- (void)configData;
- (void)configPageSheet;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillAppear;
- (double)pageSheetContentWidth;
- (double)getVisibleHeight;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

