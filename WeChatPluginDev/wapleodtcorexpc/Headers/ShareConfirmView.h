//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardView, MMGrowTextView, NSString, UIButton, UIImage, UIImageView, UIView, WCInputController, WCPasteTextLengthLogic;
@protocol ShareConfirmViewDelegate;

@interface ShareConfirmView
{
    UIImageView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_expressionButton;
    MMGrowTextView *_textView;
    WCInputController *_inputController;
    UIImage *_thumbImage;
    NSString *_title;
    NSString *_desc;
    NSString *_source;
    NSString *_thumbImageUrl;
    NSString *_defaultInputText;
    NSString *_defaultShowText;
    unsigned long long _style;
    unsigned long long _innerPlayerStyle;
    _Bool _isShowTextView;
    _Bool _hasInputSth;
    long long _currentOrientation;
    unsigned long long _confirmType;
    id <ShareConfirmViewDelegate> _scvDelegate;
    NSString *_successText;
    UIView *m_textBackgroundImage;
    UIView *m_bottomView;
    WCPasteTextLengthLogic *pastelogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *successText; // @synthesize successText=_successText;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) WCPasteTextLengthLogic *pastelogic; // @synthesize pastelogic;
@property(nonatomic) unsigned long long confirmType; // @synthesize confirmType=_confirmType;
@property(nonatomic) _Bool hasInputSth; // @synthesize hasInputSth=_hasInputSth;
@property(nonatomic) __weak id <ShareConfirmViewDelegate> scvDelegate; // @synthesize scvDelegate=_scvDelegate;
@property(nonatomic) _Bool isShowTextView; // @synthesize isShowTextView=_isShowTextView;
@property(nonatomic) unsigned long long innerPlayerStyle; // @synthesize innerPlayerStyle=_innerPlayerStyle;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *defaultShowText; // @synthesize defaultShowText=_defaultShowText;
@property(retain, nonatomic) NSString *defaultInputText; // @synthesize defaultInputText=_defaultInputText;
@property(retain, nonatomic) NSString *thumbImageUrl; // @synthesize thumbImageUrl=_thumbImageUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
- (void)onMainWindowFrameChanged;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (id)getWebThumbImage;
- (void)hideKeyBoard;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)keyboardWillShow;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)stayAtWeChat;
- (void)notifySendMsgOK;
- (void)showSendSuccessView;
- (void)resignInput;
- (void)becomeInput;
- (void)initInputController;
- (void)initEmoticonView;
- (void)initInputToolView;
- (void)initBottomButtons;
- (void)genBottomContentView:(id)arg1;
- (void)formTitleAtTopContentView;
- (void)formTitleAtRightContentView;
- (void)formImageContentView;
- (id)genDescriptionLabel;
- (id)genTitleLabel;
- (id)genBackgroundView;
- (id)genSourceLabel:(id)arg1;
- (void)genTextView:(struct CGRect)arg1;
- (long long)calTextViewBackgroundImageFrameHeight:(long long)arg1;
- (long long)getTextViewBackgroundFrameHeight;
- (void)calNewImageViewFrame:(id)arg1;
- (void)rotateToCurrentOrientation;
- (void)rotateToOrientation:(long long)arg1;
- (void)updateContentLayout;
- (void)updateInputViewLayout;
- (void)layoutSubviewToOrientation:(long long)arg1;
- (double)getVisibleHeight;
- (void)initContentView;
- (id)getInputText;
- (void)showView;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupRootViewController;
- (void)internalInit;
- (void)setHidden:(_Bool)arg1;
- (void)unregisterLogoutEvent;
- (void)registerLogoutEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

