//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIImageView, MMUILabel, NSMutableArray, NSMutableSet, NSString, UILabel, UIView, WCStoryBubbleOrCommentAnimationView, WCStoryDataItem, WCStoryPreviewReportObj;
@protocol MMUIViewControllerDelegate, WCStoryPreviewPageViewDelegate, WCStoryVideoPlayerViewDelegate;

@interface WCStoryPreviewPageView
{
    _Bool m_isMyOwnWC;
    WCStoryBubbleOrCommentAnimationView *m_commentAnimationView;
    _Bool m_isOnShowing;
    _Bool m_hasDoBubble;
    NSMutableSet *m_unreadCommentIdSet;
    _Bool _canDeleteMyOwnStory;
    _Bool _allElementsHidden;
    id <WCStoryPreviewPageViewDelegate> delegate;
    WCStoryDataItem *m_dataItem;
    id <MMUIViewControllerDelegate> _vcDelegate;
    id <WCStoryVideoPlayerViewDelegate> _playerDelegate;
    long long _pageViewScene;
    MMUIButton *_friendVisitVersionCommentOthersBtn;
    MMUIButton *_oldVersionCommentOthersBtn;
    MMUIButton *_subCommentBtn;
    MMUIButton *_subBubbleBtn;
    MMUILabel *_uploadFailedTipView;
    MMUIImageView *_privateImageView;
    MMUIImageView *_hideInTimelineImageView;
    NSMutableArray *_iconViewArray;
    MMUIButton *_commentCountBtn;
    MMUIButton *_visitorCountBtn;
    UILabel *_commentTipsLabel;
    UIView *_commentBluePointView;
    UIView *_visitBluePointView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *visitBluePointView; // @synthesize visitBluePointView=_visitBluePointView;
@property(retain, nonatomic) UIView *commentBluePointView; // @synthesize commentBluePointView=_commentBluePointView;
@property(retain, nonatomic) UILabel *commentTipsLabel; // @synthesize commentTipsLabel=_commentTipsLabel;
@property(retain, nonatomic) MMUIButton *visitorCountBtn; // @synthesize visitorCountBtn=_visitorCountBtn;
@property(retain, nonatomic) MMUIButton *commentCountBtn; // @synthesize commentCountBtn=_commentCountBtn;
@property(nonatomic, getter=isAllElementsHidden) _Bool allElementsHidden; // @synthesize allElementsHidden=_allElementsHidden;
@property(retain, nonatomic) NSMutableArray *iconViewArray; // @synthesize iconViewArray=_iconViewArray;
@property(retain, nonatomic) MMUIImageView *hideInTimelineImageView; // @synthesize hideInTimelineImageView=_hideInTimelineImageView;
@property(retain, nonatomic) MMUIImageView *privateImageView; // @synthesize privateImageView=_privateImageView;
@property(retain, nonatomic) MMUILabel *uploadFailedTipView; // @synthesize uploadFailedTipView=_uploadFailedTipView;
@property(nonatomic) __weak MMUIButton *subBubbleBtn; // @synthesize subBubbleBtn=_subBubbleBtn;
@property(nonatomic) __weak MMUIButton *subCommentBtn; // @synthesize subCommentBtn=_subCommentBtn;
@property(nonatomic) __weak MMUIButton *oldVersionCommentOthersBtn; // @synthesize oldVersionCommentOthersBtn=_oldVersionCommentOthersBtn;
@property(nonatomic) __weak MMUIButton *friendVisitVersionCommentOthersBtn; // @synthesize friendVisitVersionCommentOthersBtn=_friendVisitVersionCommentOthersBtn;
@property(nonatomic) long long pageViewScene; // @synthesize pageViewScene=_pageViewScene;
@property(nonatomic) _Bool canDeleteMyOwnStory; // @synthesize canDeleteMyOwnStory=_canDeleteMyOwnStory;
@property(nonatomic) __weak id <WCStoryVideoPlayerViewDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
- (void)setDataItem:(id)arg1;
- (id)dataItem;
@property(nonatomic) __weak id <WCStoryPreviewPageViewDelegate> delegate; // @synthesize delegate;
- (void)onDeleteCommentSuccess:(id)arg1;
- (void)onCommentSuccess:(id)arg1;
- (void)StoryCommentOthersViewControllerWillPopFromAnotherController;
- (void)StoryCommentOthersViewControllerWillPushAnotherController;
- (void)StoryAggregateCommentBubbleViewControllerWillPopFromAnotherController;
- (void)StoryAggregateCommentBubbleViewControllerWillPushAnotherController;
- (void)StoryAggregateCommentBubbleViewControllerDidDisMissSelf;
- (void)onBubbleButtonCancel:(id)arg1;
- (void)onBubbleButtonHighlighted:(id)arg1;
- (void)onWCStoryBubbleButtonSingleTap:(id)arg1;
- (void)onDoubleTapBackGroundView:(id)arg1;
- (void)onSingleTapBackGroundView:(id)arg1;
- (void)onOldVersionCommentBtnClick;
- (void)onNewVersionCommentBtnClicked;
- (void)onSingleTagCommentAnimationView;
- (void)onVisitorCountButtonClick;
- (void)onCommentCountButtonClick;
- (void)onBubbleBoilingHasPlayOneTime;
- (void)onBubbleOrCommentAnimationStartToPlayLastOneFirstTime:(id)arg1;
- (void)onBubbleOrCommentShowAnimationDidClick:(id)arg1 atIndex:(long long)arg2;
- (void)onBubbleOrCommentAnimationViewHasPlayFirstReadedItem:(id)arg1;
- (void)onBubbleOrCommentAnimationHasPlayOneTime:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewDidTapCancelButton;
- (void)alertViewDidTapDeleteButton;
- (void)onShowAlertViewOfDelete;
- (void)onReUploadStoryData;
- (void)onHideStoryData;
- (void)hideDataItemAndShowTips;
- (void)onShowActionSheet;
- (void)showMoreAction;
- (_Bool)canReUploadWithErrorType:(int)arg1;
- (id)tipWordingWithErrorType:(int)arg1;
- (void)stopAndCleanPlayer;
- (void)pauseVideo;
- (void)playVideoWithMute:(_Bool)arg1;
- (void)showBubbleList;
- (void)showCommentsListAndScrollToBottom:(_Bool)arg1 animated:(_Bool)arg2 showKeyboard:(_Bool)arg3;
- (void)showRelateCommentsList;
- (void)tryShowCommentsList;
- (void)showCommentsList;
- (void)showAggregateCommentBubbleListFocusOnVisitor:(_Bool)arg1;
- (void)stopBubbleAndCommentAnimation;
- (void)clearUnreadCommentIdSet;
- (void)updataUnreadComment;
- (void)updateDataItemForCommentWithItem:(id)arg1;
- (void)insertNewComment:(id)arg1;
- (void)doCommentWithText:(id)arg1 isDoubleClick:(_Bool)arg2 replyComment:(id)arg3;
- (void)doVisitComment;
- (void)doBubbleCommentWithDoubleClick:(_Bool)arg1;
- (void)startBubbleAndCommentAnimation;
- (void)configCommentAnimationView;
- (void)reloadCommentBtn;
- (void)configOldCommentBtn;
- (void)configCommentBtn;
- (void)voiceOverElementEnable:(_Bool)arg1;
- (void)configFlagIconView;
- (void)configBackGroundGesture;
- (void)configSubView;
- (void)showUnloadFailedWording:(id)arg1;
- (void)updatePrivacyStatusWithItem:(id)arg1;
- (void)updateUploadStateWithItem:(id)arg1;
- (void)updateIconToolView;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 canDeleteMyOwnStory:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WCStoryPreviewReportObj *previewReportObj;
@property(readonly) Class superclass;

@end

