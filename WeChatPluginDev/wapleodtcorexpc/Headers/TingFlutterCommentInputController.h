//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CommentInputRequest, EmoticonBoardView, FinderCommentInfo, NSArray, NSMutableArray, NSString, TingMusicCommentCallBack, UIButton, UIImageView, UIView, WCCommentInputView, WCFinderCommentDetailTextView, WCFinderCommentIdentityActionSheetView, WCFinderHeadImageView, WCInputController;
@protocol FlutterCommentMentionDelegate;

@interface TingFlutterCommentInputController
{
    _Bool _quickEmojiSend;
    _Bool _enableMention;
    _Bool _isMentionDialogShowing;
    NSString *_quickEmojiScene;
    unsigned long long _mentionNumLimit;
    id <FlutterCommentMentionDelegate> _flutterCommentMentionDelegate;
    CDUnknownBlockType _keyboardDidHideHandler;
    WCInputController *_inputController;
    WCCommentInputView *_inputBackView;
    double _inputViewDefaultHeight;
    UIView *_textViewBackGroundView;
    UIView *_commentBackgroundView;
    WCFinderCommentDetailTextView *_growTextView;
    WCFinderHeadImageView *_avatarImageView;
    UIButton *_expressionButton;
    UIButton *_mentionButton;
    UIImageView *_iconImageView;
    UIView *_avatarContainerView;
    EmoticonBoardView *_emoticonBoardView;
    unsigned long long _commentTextMaxLimit;
    unsigned long long _commentStyleType;
    NSMutableArray *_pastedStrArray;
    NSMutableArray *_commitPastedStrArray;
    WCFinderCommentIdentityActionSheetView *_identityActionSheet;
    CommentInputRequest *_inputRequest;
    CDUnknownBlockType _inputResult;
    FinderCommentInfo *_replyCommentInfo;
    TingMusicCommentCallBack *_commentCallback;
    NSArray *_rightButtons;
    struct _NSRange _commentTextViewLatestSelectionRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *rightButtons; // @synthesize rightButtons=_rightButtons;
@property(retain, nonatomic) TingMusicCommentCallBack *commentCallback; // @synthesize commentCallback=_commentCallback;
@property(retain, nonatomic) FinderCommentInfo *replyCommentInfo; // @synthesize replyCommentInfo=_replyCommentInfo;
@property(copy, nonatomic) CDUnknownBlockType inputResult; // @synthesize inputResult=_inputResult;
@property(retain, nonatomic) CommentInputRequest *inputRequest; // @synthesize inputRequest=_inputRequest;
@property(retain, nonatomic) WCFinderCommentIdentityActionSheetView *identityActionSheet; // @synthesize identityActionSheet=_identityActionSheet;
@property(nonatomic) struct _NSRange commentTextViewLatestSelectionRange; // @synthesize commentTextViewLatestSelectionRange=_commentTextViewLatestSelectionRange;
@property(retain, nonatomic) NSMutableArray *commitPastedStrArray; // @synthesize commitPastedStrArray=_commitPastedStrArray;
@property(retain, nonatomic) NSMutableArray *pastedStrArray; // @synthesize pastedStrArray=_pastedStrArray;
@property(nonatomic) unsigned long long commentStyleType; // @synthesize commentStyleType=_commentStyleType;
@property(nonatomic) unsigned long long commentTextMaxLimit; // @synthesize commentTextMaxLimit=_commentTextMaxLimit;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *mentionButton; // @synthesize mentionButton=_mentionButton;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCFinderCommentDetailTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIView *commentBackgroundView; // @synthesize commentBackgroundView=_commentBackgroundView;
@property(retain, nonatomic) UIView *textViewBackGroundView; // @synthesize textViewBackGroundView=_textViewBackGroundView;
@property(nonatomic) double inputViewDefaultHeight; // @synthesize inputViewDefaultHeight=_inputViewDefaultHeight;
@property(retain, nonatomic) WCCommentInputView *inputBackView; // @synthesize inputBackView=_inputBackView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(copy, nonatomic) CDUnknownBlockType keyboardDidHideHandler; // @synthesize keyboardDidHideHandler=_keyboardDidHideHandler;
@property(nonatomic) __weak id <FlutterCommentMentionDelegate> flutterCommentMentionDelegate; // @synthesize flutterCommentMentionDelegate=_flutterCommentMentionDelegate;
@property(nonatomic) _Bool isMentionDialogShowing; // @synthesize isMentionDialogShowing=_isMentionDialogShowing;
@property(nonatomic) unsigned long long mentionNumLimit; // @synthesize mentionNumLimit=_mentionNumLimit;
@property(nonatomic) _Bool enableMention; // @synthesize enableMention=_enableMention;
@property(retain, nonatomic) NSString *quickEmojiScene; // @synthesize quickEmojiScene=_quickEmojiScene;
@property(nonatomic) _Bool quickEmojiSend; // @synthesize quickEmojiSend=_quickEmojiSend;
- (void)onSelectFinderContact:(id)arg1;
- (void)showSearchMentionContainerView;
- (void)commentDetailTextViewDidInputValidMentionCharacter;
- (_Bool)canShowMentionButton;
- (void)updateMentionButtonState;
- (void)onMentionButtonClicked:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showEducateDoubleIdentity;
- (int)keyboardAndInputerViewHeight;
- (void)keyboardDidHide;
- (void)keyboardWillHide;
- (void)keyboardDidShow;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillShow;
- (void)emoticonBoardViewWillHide;
- (void)emoticonBoardViewDidShow;
- (void)p_emoticonBoardViewDidShow;
- (void)onInputModeChangingTo:(long long)arg1;
- (void)didCommitPastedArray;
- (void)cleanPastedTextArray;
- (void)addPastedText:(id)arg1;
- (id)willPostComment:(id)arg1;
- (void)didCommitText:(id)arg1;
- (id)getMentionedUserV2List:(id)arg1;
- (void)didCommitEmptyText;
- (_Bool)canCommitWithText:(id)arg1;
- (void)clearCurrentInput;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewTextDidChange;
- (void)MMGrowTextViewDidPasted:(id)arg1 pastedText:(id)arg2;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)clickToToast;
- (void)updateCommentSpamState;
- (_Bool)commentFunctionIsSpam;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)clickCommentIdentityChange;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)setGrowTextViewPlaceholderWithReplyNickname:(id)arg1 isDefaultComment:(_Bool)arg2 useVMData:(_Bool)arg3;
- (void)updateCommetIdentityView:(_Bool)arg1;
- (void)updateTextViewPostCommentIdentity:(_Bool)arg1;
- (void)updateCommentIdentityStatus:(_Bool)arg1;
- (double)inputViewYForInputController;
- (void)addGrowTextView;
- (id)commentIdentityNickname;
- (id)postAuthorIconImageColor;
- (struct CGSize)inputBackViewSize;
- (void)layoutInputBackView;
- (double)getVisibleHeight;
- (void)setupEmojiInputView;
- (void)setupInputView;
- (void)setUpTextView;
- (double)defaultInputBottomViewHeight;
- (void)initEmoticonView;
- (unsigned long long)getCommentIdentityType;
- (void)updateCommentIdentityType:(unsigned long long)arg1;
- (_Bool)isSelfComment:(id)arg1;
- (_Bool)isSelfPostComment:(id)arg1;
- (_Bool)isFinderComment:(unsigned long long)arg1;
- (void)setupFlutterCallback:(id)arg1;
- (void)resignInput:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)exitEnterComment;
- (void)resignResponder;
- (void)tapBecomeFirstResponder;
- (void)p_updateGrowTextViewPlaceHolder:(id)arg1;
- (void)p_updateCommentInputView:(id)arg1;
- (void)activeInput:(id)arg1 resultHanlder:(CDUnknownBlockType)arg2;
- (void)layoutGrowTextView;
- (void)resetUI;
- (void)reloadLayout;
- (void)layoutIconImageView;
- (void)viewDidTransitionToNewSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)shouldSkipNavInteractiveGesture;
- (id)containerView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

