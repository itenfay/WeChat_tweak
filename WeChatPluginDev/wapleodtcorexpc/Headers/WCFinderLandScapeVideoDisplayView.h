//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIView, WCFinderFeedContentVM, WCFinderFriendLikeToolbarView, WCFinderFullToolbarView, WCFinderLandScapeCollectionDisplayView, WCFinderLandScapePlayerParam, WCFinderLandScapeVideoDisplayViewInitParams, WCFinderLandScapeVideoInteractivePlayerView, WCFinderPanelHotCommentView;
@protocol WCFinderHeadInfoViewDelegate><WCFinderFullToolbarViewDelegate><WCFinderLandScapeVideoDisplayViewDelegate, WCFinderHeadInfoViewProtocol><WCFinderJumpInfoViewProtocol;

@interface WCFinderLandScapeVideoDisplayView
{
    _Bool _isPreOrientationLandScape;
    id <WCFinderHeadInfoViewDelegate><WCFinderFullToolbarViewDelegate><WCFinderLandScapeVideoDisplayViewDelegate> _delegate;
    UIView *_statusBarBackgroundView;
    WCFinderLandScapeVideoInteractivePlayerView *_interactivePlayerView;
    RichTextView *_descLabel;
    RichTextView *_feedTitleLabel;
    WCFinderPanelHotCommentView *_hotCommentView;
    UIView *_descInteractiveView;
    UIView *_containerView;
    UIView<WCFinderHeadInfoViewProtocol><WCFinderJumpInfoViewProtocol> *_headInfoView;
    WCFinderFullToolbarView *_toolBarView;
    WCFinderFriendLikeToolbarView *_friendLikeToolBarView;
    WCFinderLandScapeCollectionDisplayView *_collectionView;
    UIView *_collectionTopSeperator;
    UIView *_collectionViewContainer;
    WCFinderFeedContentVM *_contentVM;
    WCFinderLandScapePlayerParam *_param;
    WCFinderLandScapeVideoDisplayViewInitParams *_setupParams;
}

+ (double)heightWithContentVM:(id)arg1 param:(id)arg2 width:(double)arg3;
+ (_Bool)shouldShowFriendLikeToolbarViewWithContentVM:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPreOrientationLandScape; // @synthesize isPreOrientationLandScape=_isPreOrientationLandScape;
@property(retain, nonatomic) WCFinderLandScapeVideoDisplayViewInitParams *setupParams; // @synthesize setupParams=_setupParams;
@property(retain, nonatomic) WCFinderLandScapePlayerParam *param; // @synthesize param=_param;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIView *collectionViewContainer; // @synthesize collectionViewContainer=_collectionViewContainer;
@property(retain, nonatomic) UIView *collectionTopSeperator; // @synthesize collectionTopSeperator=_collectionTopSeperator;
@property(retain, nonatomic) WCFinderLandScapeCollectionDisplayView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCFinderFriendLikeToolbarView *friendLikeToolBarView; // @synthesize friendLikeToolBarView=_friendLikeToolBarView;
@property(retain, nonatomic) WCFinderFullToolbarView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) UIView<WCFinderHeadInfoViewProtocol><WCFinderJumpInfoViewProtocol> *headInfoView; // @synthesize headInfoView=_headInfoView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *descInteractiveView; // @synthesize descInteractiveView=_descInteractiveView;
@property(retain, nonatomic) WCFinderPanelHotCommentView *hotCommentView; // @synthesize hotCommentView=_hotCommentView;
@property(retain, nonatomic) RichTextView *feedTitleLabel; // @synthesize feedTitleLabel=_feedTitleLabel;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCFinderLandScapeVideoInteractivePlayerView *interactivePlayerView; // @synthesize interactivePlayerView=_interactivePlayerView;
@property(retain, nonatomic) UIView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(nonatomic) __weak id <WCFinderHeadInfoViewDelegate><WCFinderFullToolbarViewDelegate><WCFinderLandScapeVideoDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickPanelHotComment:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onRefreshFriendUI:(id)arg1;
- (void)onClickDescLabel;
- (void)onFinderLandScapeInteractiveViewContentMediaDidEndPlay;
- (void)onFinderLandScapeInteractiveViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (_Bool)shouldHiddenHeadInfoViewFollowBtn;
- (void)onFinderLandScapeInteractiveViewClickPlayNextVideoWithDataItem:(id)arg1;
- (void)onFinderLandScapeInteractiveViewDidEndLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeInteractiveViewDidStartLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeInteractiveViewEndPan;
- (void)onFinderLandScapeInteractiveViewStartPan;
- (void)onFinderLandScapeInteractiveViewClickPlayRateBtnWithRate:(double)arg1;
- (void)onFinderLandScapeInteractiveViewClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderLandScapeInteractiveViewClickBulletBtn;
- (void)onFinderLandScapeInteractiveViewClickReturnBtn;
- (void)onFinderLandScapeInteractiveViewClickPauseBtn:(_Bool)arg1;
- (void)onFinderLandScapeInteractiveViewClickRotateBtn;
- (void)onFinderLandScapeInteractiveViewAntiAddictCheckLogic;
- (void)onCollectionDisplayViewDidSelectContentVM:(id)arg1;
- (void)onCollectionDisplayViewReadyToShowStateChanged:(_Bool)arg1;
- (double)getCurrentPlayVideoPercent;
- (double)getCurrentPlayVideoTime;
- (void)adjustLayoutInPoratialState:(_Bool)arg1;
- (void)adjustLayoutInPoratialState;
- (void)adjustPlayerViewLayoutInPortialState;
- (void)adjustLayoutInLandScapeState;
- (void)updateBulletState;
- (void)updateLikeToolStateWithContentVM:(id)arg1;
- (void)updateHotCommentUIWithContentVM:(id)arg1;
- (void)updateWithContentVM:(id)arg1 param:(id)arg2;
- (_Bool)pointIsOnPlayerArea:(struct CGPoint)arg1;
- (void)moveHeaderToolToBottom;
- (_Bool)canMoveHeaderToolToBottom;
- (void)moveHeaderToolToTop;
- (_Bool)canMoveHeaderToolToTop;
- (void)_moveReleatedViewWithY:(double)arg1;
- (void)moveHeaderToolWithY:(double)arg1;
- (double)foldMinBottom;
- (void)stopSpeedPlay;
- (void)setPlayerInteractiveEnable:(_Bool)arg1;
- (id)getPlayerViewSnapshot;
- (void)landScapeStatWillChange:(_Bool)arg1;
- (void)setupViewLandScapeState;
- (void)setupViews;
- (void)setup;
- (void)resumeVideo;
- (void)pauseVideo;
- (id)getPlayerView;
- (_Bool)isPlayingVideo;
- (void)stopVideo;
- (void)playVideoWithStartTime:(double)arg1 isSilencePlay:(_Bool)arg2;
- (void)playVideo;
- (id)getFinderPlayerView:(_Bool)arg1;
- (void)restorePlayerView:(id)arg1;
- (id)getPlayerViewAndClear;
- (void)restoreInteractiveView:(id)arg1;
- (id)getInteractiveView;
- (_Bool)isFriendLikeToolBarHidden;
- (void)changeToolBarHiddenState:(_Bool)arg1;
- (void)changeToolBarHiddenState;
- (void)reloadToolBar;
- (id)initWithFrame:(struct CGRect)arg1 params:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

