//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMUIButton, NSString, UIScrollView, UITableView, UIView, WCInputControllerViews, WCStoryAggregateCommentBubbleViewModel, WCStoryComment, WCStoryFriendCommentsListView, WCStoryFriendVisitorListView;
@protocol WCStoryAggregateCommentBubbleViewControllerDelegate;

@interface WCStoryAggregateCommentBubbleViewController
{
    _Bool _focusOnVisitorList;
    id <WCStoryAggregateCommentBubbleViewControllerDelegate> _delegate;
    double _contentViewHeight;
    NSString *_tid;
    WCStoryAggregateCommentBubbleViewModel *_viewModel;
    MMUIButton *_backgroundButton;
    MMUIButton *_closeButton;
    UIView *_topView;
    UIView *_contentView;
    UIView *_maskView;
    CAGradientLayer *_gradientLayer;
    UIView *_buttonGroupView;
    MMUIButton *_leftBtn;
    MMUIButton *_rightBtn;
    UIView *_visitBlueTipsView;
    UIView *_commentBlueTipsView;
    UIScrollView *_scrollView;
    WCStoryFriendVisitorListView *_visitorListView;
    WCStoryFriendCommentsListView *_commentsListView;
    WCInputControllerViews *_inputControllerViews;
    WCStoryComment *_replyComment;
    UITableView *_replyCommentTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *replyCommentTableView; // @synthesize replyCommentTableView=_replyCommentTableView;
@property(retain, nonatomic) WCStoryComment *replyComment; // @synthesize replyComment=_replyComment;
@property(retain, nonatomic) WCInputControllerViews *inputControllerViews; // @synthesize inputControllerViews=_inputControllerViews;
@property(retain, nonatomic) WCStoryFriendCommentsListView *commentsListView; // @synthesize commentsListView=_commentsListView;
@property(retain, nonatomic) WCStoryFriendVisitorListView *visitorListView; // @synthesize visitorListView=_visitorListView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *commentBlueTipsView; // @synthesize commentBlueTipsView=_commentBlueTipsView;
@property(retain, nonatomic) UIView *visitBlueTipsView; // @synthesize visitBlueTipsView=_visitBlueTipsView;
@property(retain, nonatomic) MMUIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) MMUIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIView *buttonGroupView; // @synthesize buttonGroupView=_buttonGroupView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) WCStoryAggregateCommentBubbleViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(readonly, nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(nonatomic, getter=isFocusOnVisitorList) _Bool focusOnVisitorList; // @synthesize focusOnVisitorList=_focusOnVisitorList;
@property(nonatomic) __weak id <WCStoryAggregateCommentBubbleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setPreViewReportObj:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)StoryAggregateCommentBubbleViewModelDidAddNewComment;
- (void)StoryAggregateCommentBubbleViewModelDidAddNewVisitor;
- (void)StoryAggregateCommentBubbleViewModelDataDidUpdate:(id)arg1;
- (id)HeightForCommentsInStoryFriendCommentsListView:(id)arg1;
- (id)CommentsInStoryFriendCommentsListView:(id)arg1;
- (void)StoryFriendCommentsListViewDidClickHeadViewWithComment:(id)arg1;
- (void)StoryFriendCommentsListViewSeletedTableView:(id)arg1 indexPath:(id)arg2;
- (void)StoryFriendCommentsListViewScrollView:(id)arg1 receivePanGesture:(id)arg2;
- (id)VisitorsInStoryFriendVisitorListView:(id)arg1;
- (void)StoryFriendVisitorListViewDidClickHeadViewWithComment:(id)arg1;
- (id)StoryFriendVisitorListViewCollectionViewContentInset;
- (void)StoryFriendVisitorListViewScrollView:(id)arg1 receivePanGesture:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onRightBtnDidClick;
- (void)onLeftBtnDidClick;
- (void)onClickClose;
- (void)handleScrollView:(id)arg1 panGesture:(id)arg2;
- (void)handleTopViewPanGesture:(id)arg1;
- (void)handleScrollingEnd:(id)arg1;
- (void)showContactInfoViewControllerWithStoryComment:(id)arg1;
- (void)deleteComment:(id)arg1;
- (void)setupGesture;
- (void)updateUI;
- (void)setupSubViews;
- (void)setupViewModel;
- (void)scrollToList:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollList:(unsigned long long)arg1 toBottomAnimated:(_Bool)arg2;
- (_Bool)hidesStatusBar;
- (id)navigationBarBackgroundColor;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTid:(id)arg1 focusOnVisitorList:(_Bool)arg2;
- (id)initWithTid:(id)arg1;
- (void)textViewTextDidChange;
- (void)didCommitText:(id)arg1;
- (void)keyboardWillShow;
- (void)keyboardDidHide;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (double)getVisibleHeight;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)updateRemainWordCountLabel;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)initEmoticonView;
- (void)initBackgroundView;
- (void)initRemainWordCountLabel;
- (void)initExpressionButton;
- (void)initGrowTextView;
- (void)initInputToolView;
- (void)resetToKeyboardInputMode;
- (void)ensureInitInputView;
- (void)resignInputViewResponder;
- (_Bool)isShowingKeyBoard;
- (void)showCommentInputView:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

