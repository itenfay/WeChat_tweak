//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, EmoticonBoardView, MMCPLabel, MMGrowTextView, MMHeadImageView, MMTableView, MMUILabel, NSString, UIButton, UILabel, UIView, UIVisualEffectView, WCInputController, WCStoryComment, WCStoryCommentsForSelfShowViewModel, WCStoryPreviewReportObj;

@interface WCStoryCommentsForSelfViewController
{
    _Bool _isKeyboardPushedByPreviousVC;
    _Bool _showingInputView;
    NSString *_dataItemID;
    WCStoryComment *_replyComment;
    WCStoryCommentsForSelfShowViewModel *_viewModel;
    WCStoryPreviewReportObj *_previewReportObj;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _pushAnotherVCBlock;
    CDUnknownBlockType _popFromAnotherVCBlock;
    CDUnknownBlockType _viewWillAppearBlock;
    UIView *_gradientMaskView;
    CAGradientLayer *_gradientLayer;
    MMTableView *_tableView;
    MMGrowTextView *_growTextView;
    WCInputController *_inputController;
    UIView *_inputView;
    UIButton *_expressionButton;
    EmoticonBoardView *_emoticonBoardView;
    UIVisualEffectView *_blurView;
    MMHeadImageView *_headerImageView;
    MMCPLabel *_userNameLabel;
    UILabel *_colonLabel;
    MMUILabel *_charsCountTipLabel;
    MMUILabel *_privacyTipsLabel;
    struct CGRect _iconFrame;
    struct CGRect _commentBtnFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *privacyTipsLabel; // @synthesize privacyTipsLabel=_privacyTipsLabel;
@property(retain, nonatomic) MMUILabel *charsCountTipLabel; // @synthesize charsCountTipLabel=_charsCountTipLabel;
@property(retain, nonatomic) UILabel *colonLabel; // @synthesize colonLabel=_colonLabel;
@property(retain, nonatomic) MMCPLabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) MMHeadImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientMaskView; // @synthesize gradientMaskView=_gradientMaskView;
@property(copy, nonatomic) CDUnknownBlockType viewWillAppearBlock; // @synthesize viewWillAppearBlock=_viewWillAppearBlock;
@property(copy, nonatomic) CDUnknownBlockType popFromAnotherVCBlock; // @synthesize popFromAnotherVCBlock=_popFromAnotherVCBlock;
@property(copy, nonatomic) CDUnknownBlockType pushAnotherVCBlock; // @synthesize pushAnotherVCBlock=_pushAnotherVCBlock;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) WCStoryPreviewReportObj *previewReportObj; // @synthesize previewReportObj=_previewReportObj;
@property(retain, nonatomic) WCStoryCommentsForSelfShowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCStoryComment *replyComment; // @synthesize replyComment=_replyComment;
@property(nonatomic, getter=isShowingInputView) _Bool showingInputView; // @synthesize showingInputView=_showingInputView;
@property(copy, nonatomic) NSString *dataItemID; // @synthesize dataItemID=_dataItemID;
@property(nonatomic) struct CGRect commentBtnFrame; // @synthesize commentBtnFrame=_commentBtnFrame;
@property(nonatomic) struct CGRect iconFrame; // @synthesize iconFrame=_iconFrame;
@property(nonatomic) _Bool isKeyboardPushedByPreviousVC; // @synthesize isKeyboardPushedByPreviousVC=_isKeyboardPushedByPreviousVC;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onBubbleBtnClick;
- (void)onCommentBtnClicked;
- (void)closeGesture:(id)arg1;
- (void)closeViewBtnClick;
- (void)showInputViewForReplyCommentRow:(unsigned long long)arg1;
- (void)StoryCommentCellDidTapDeleteButton:(id)arg1;
- (void)StoryCommentsCellDidClickReplyBtn:(id)arg1;
- (void)StoryCommentsCellDidClickBlurEffectView:(id)arg1;
- (void)StoryCommentsCellDidClickHeadImageView:(id)arg1;
- (void)reloadData;
- (void)updateSubviewFrame;
- (void)updateForReplyComment:(id)arg1;
- (void)showReplyViewControllerForCell:(id)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)dismissSelfControllerAnimated:(_Bool)arg1;
- (void)updateCharsCountTipLabel;
- (void)updateUserNameLabelColor;
- (void)textViewTextDidChange;
- (void)updateTableViewSizeWithInputViewTop:(double)arg1;
- (void)updateViewSize;
- (void)didCommitText:(id)arg1;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)initEmoticonView;
- (void)addExpressionView;
- (void)addPrivacyTipsLabel;
- (void)addTextTooLongLabel;
- (void)addGrowTextView;
- (void)addUsernameView;
- (void)addHeaderImageView;
- (void)addBlurAndAboveView;
- (void)initInputToolView;
- (void)addInputView;
- (void)setupCommentInputView;
- (void)setupCommentBtn;
- (void)addTableView;
- (void)addGradientMaskView;
- (void)addCloseView;
- (void)setupCommentView;
- (void)setupSubViews;
- (void)scrollTableViewToLastCelWithAnimate:(_Bool)arg1;
- (void)scrollTableViewToRow:(unsigned long long)arg1;
- (void)resetTableViewFrame;
- (void)setTabelViewBottom:(double)arg1;
- (void)adjustTableViewHeight;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)navigationBarBackgroundColor;
- (_Bool)hidesStatusBar;
- (void)scrollToBottomWithAnimated:(_Bool)arg1;
- (void)scrollToCommment:(id)arg1;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataItemID:(id)arg1 iconFrame:(struct CGRect)arg2 commentBtnFrame:(struct CGRect)arg3 showKeyboard:(_Bool)arg4 withComplete:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

