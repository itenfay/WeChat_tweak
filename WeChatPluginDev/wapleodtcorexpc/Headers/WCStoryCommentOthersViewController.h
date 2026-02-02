//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, EmoticonBoardView, MMGrowTextView, MMUIButton, MMUILabel, NSString, UIButton, UILabel, UITableView, UIView, WCInputController, WCStoryComment, WCStoryCommentOthersViewModel, WCStoryPreviewReportObj;
@protocol WCStoryCommentOthersViewControllerDelegate;

@interface WCStoryCommentOthersViewController
{
    id <WCStoryCommentOthersViewControllerDelegate> _delegate;
    double _contentViewHeight;
    NSString *_tid;
    WCStoryCommentOthersViewModel *_viewModel;
    WCStoryPreviewReportObj *_previewReportObj;
    WCStoryComment *_replyComment;
    MMUIButton *_backgroundButton;
    MMUIButton *_closeButton;
    UIView *_topView;
    UIView *_contentView;
    UIView *_maskView;
    CAGradientLayer *_gradientLayer;
    UITableView *_tableView;
    UILabel *_tipsLabel;
    MMGrowTextView *_growTextView;
    WCInputController *_inputController;
    UIView *_inputView;
    UIButton *_expressionButton;
    EmoticonBoardView *_emoticonBoardView;
    UIView *_bottomBackGroundView;
    MMUILabel *_remainWordCountLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *remainWordCountLabel; // @synthesize remainWordCountLabel=_remainWordCountLabel;
@property(retain, nonatomic) UIView *bottomBackGroundView; // @synthesize bottomBackGroundView=_bottomBackGroundView;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) WCStoryComment *replyComment; // @synthesize replyComment=_replyComment;
@property(retain, nonatomic) WCStoryPreviewReportObj *previewReportObj; // @synthesize previewReportObj=_previewReportObj;
@property(retain, nonatomic) WCStoryCommentOthersViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(readonly, nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(nonatomic) __weak id <WCStoryCommentOthersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)getVisibleHeight;
- (void)updateRemainWordCountLabel;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)StoryFriendCommmentHeadCellD:(id)arg1 didClickBodyViewWithComment:(id)arg2;
- (void)StoryFriendCommmentHeadCellD:(id)arg1 didClickHeadViewWithComment:(id)arg2;
- (void)StoryCommentOthersViewModelDataUpdateByAddComment;
- (void)StoryCommentOthersViewModelDataDidUpdate:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickClose;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)handleScrollView:(id)arg1 panGesture:(id)arg2;
- (void)handleTopViewPanGesture:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)showContactInfoViewControllerWithStoryComment:(id)arg1;
- (void)deleteComment:(id)arg1;
- (void)updateUI;
- (void)setupGesture;
- (void)setupInputViewController;
- (void)setupContentView;
- (void)setupSubViews;
- (_Bool)isShowingKeyBoard;
- (void)scrollTableViewToBottomAnimated:(_Bool)arg1;
- (void)setupData;
- (_Bool)hidesStatusBar;
- (id)navigationBarBackgroundColor;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

