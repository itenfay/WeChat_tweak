//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMTextView, MMUIButton, MMWebImageView, NSObject, NSString, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UIScrollView, UIStackView, UITapGestureRecognizer, UIView, WCFinderAnimationLoadingView, WCFinderBulletGroupView, WCFinderFeedContentTextView, WCFinderFeedContentVM, WCFinderFeedImageCDNView, WCFinderFeedMediaWrap, WCFinderMediaInfo, WCFinderMegaVideoViewModel, WCFinderPlayBar, WCPlayerView;
@protocol WCFinderFeedLongPlayTableViewCellDelegate;

@interface WCFinderFeedLongPlayTableViewCell : UITableViewCell
{
    id <WCFinderFeedLongPlayTableViewCellDelegate> _delegate;
    WCPlayerView *_player;
    WCFinderPlayBar *_playBar;
    MMTextView *_postTextView;
    UIView *_postContainerView;
    UILabel *_postLengthLabel;
    UIView *_bottomView;
    UIButton *_fullScreenBtn;
    MMWebImageView *_headImageView;
    UILabel *_userNameLabel;
    UIView *_topView;
    MMUIButton *_likeButton;
    UIButton *_favButton;
    UIButton *_shareButton;
    UIButton *_bulletButton;
    WCFinderFeedContentTextView *_descTextView;
    WCFinderFeedImageCDNView *_coverImageView;
    UIImageView *_captureImageView;
    UIView *_bulletActionView;
    UIView *_bottomFunctionView;
    UIView *_dangerousView;
    UILabel *_dangerousLabel;
    UIButton *_moreButton;
    UIImageView *_lockImageView;
    UIView *_rightTopView;
    UIScrollView *_titleScrollView;
    UIStackView *_titleView;
    WCFinderBulletGroupView *_bulletView;
    WCFinderAnimationLoadingView *_loadingView;
    MMUIButton *_playRateButton;
    UIView *_playRatePanel;
    WCFinderFeedContentVM *_contentVM;
    WCFinderMegaVideoViewModel *_viewModel;
    NSString *_url;
    NSObject *_dispose;
    double _nextBulletRequestTime;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderMediaInfo *_mediaInfo;
    UIPanGestureRecognizer *_playerPostionPanGesture;
    UITapGestureRecognizer *_playerTapGesture;
    long long _orientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UITapGestureRecognizer *playerTapGesture; // @synthesize playerTapGesture=_playerTapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *playerPostionPanGesture; // @synthesize playerPostionPanGesture=_playerPostionPanGesture;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(nonatomic) double nextBulletRequestTime; // @synthesize nextBulletRequestTime=_nextBulletRequestTime;
@property(retain, nonatomic) NSObject *dispose; // @synthesize dispose=_dispose;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak WCFinderMegaVideoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIView *playRatePanel; // @synthesize playRatePanel=_playRatePanel;
@property(retain, nonatomic) MMUIButton *playRateButton; // @synthesize playRateButton=_playRateButton;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderBulletGroupView *bulletView; // @synthesize bulletView=_bulletView;
@property(retain, nonatomic) UIStackView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIScrollView *titleScrollView; // @synthesize titleScrollView=_titleScrollView;
@property(retain, nonatomic) UIView *rightTopView; // @synthesize rightTopView=_rightTopView;
@property(retain, nonatomic) UIImageView *lockImageView; // @synthesize lockImageView=_lockImageView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *dangerousLabel; // @synthesize dangerousLabel=_dangerousLabel;
@property(retain, nonatomic) UIView *dangerousView; // @synthesize dangerousView=_dangerousView;
@property(retain, nonatomic) UIView *bottomFunctionView; // @synthesize bottomFunctionView=_bottomFunctionView;
@property(retain, nonatomic) UIView *bulletActionView; // @synthesize bulletActionView=_bulletActionView;
@property(retain, nonatomic) UIImageView *captureImageView; // @synthesize captureImageView=_captureImageView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) WCFinderFeedContentTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UIButton *bulletButton; // @synthesize bulletButton=_bulletButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) MMUIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIButton *fullScreenBtn; // @synthesize fullScreenBtn=_fullScreenBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *postLengthLabel; // @synthesize postLengthLabel=_postLengthLabel;
@property(retain, nonatomic) UIView *postContainerView; // @synthesize postContainerView=_postContainerView;
@property(retain, nonatomic) MMTextView *postTextView; // @synthesize postTextView=_postTextView;
@property(retain, nonatomic) WCFinderPlayBar *playBar; // @synthesize playBar=_playBar;
@property(retain, nonatomic) WCPlayerView *player; // @synthesize player=_player;
@property(nonatomic) __weak id <WCFinderFeedLongPlayTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onFinderMegaVideoUpdate:(id)arg1;
- (void)onFinderMegaVideoPrivateChanged:(id)arg1 videoId:(id)arg2;
- (void)onFinderMegaVideoBulletOpenChanged:(id)arg1 videoId:(id)arg2;
- (void)onFinderMegaVideoLikeChanged:(id)arg1 videoId:(id)arg2;
- (void)onFinderMegaVideoFavChanged:(id)arg1 videoId:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2 isTouchExpand:(_Bool)arg3;
- (void)onComment;
- (void)onVideoStopLoading;
- (void)onVideoLoading;
- (void)onVideoStartDrag;
- (void)onVideoPause;
- (void)onVideoEnd;
- (void)onVideoStart;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)fetchNextPageBulletInPosition:(double)arg1;
- (void)updateBullet;
- (void)resetBulletConfig;
- (id)playRateTitleForRate:(double)arg1;
- (void)showDoubleLikeAnimation:(struct CGPoint)arg1;
- (void)showCapture:(id)arg1;
- (id)megaVideo;
- (_Bool)isAuthorView;
- (id)playerReporter;
- (void)showPlayRatePanel;
- (void)setPlayRate:(double)arg1;
- (_Bool)isEditing;
- (_Bool)setPlayerMute:(_Bool)arg1;
- (void)closeInPicture;
- (void)inPicture;
- (_Bool)isBottomViewHidden;
- (void)playPositionMoveEnd;
- (void)playPositionMoveChange:(double)arg1;
- (void)playPositionMoveBegin;
- (_Bool)canRecognizeTouch:(id)arg1;
- (void)reportPlayerInfo;
- (void)stashPlayer;
- (void)stopAll;
- (void)stop;
- (void)play;
- (void)addGestures;
- (void)resetFunctionState;
- (id)authorIcon;
- (void)setupTop;
- (void)setupLandScapedBottom;
- (void)setupBottom;
- (void)setupProtraitUI;
- (_Bool)createPlayerIfNeed;
- (void)updateLayoutWithItem:(id)arg1 viewModel:(id)arg2 orientation:(long long)arg3;
- (double)playerHeightFitInHeight:(double)arg1;
- (void)updateFullScreenBtn;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)updateStatus;
- (void)onPlayRate:(id)arg1;
- (void)onDoubleLike:(id)arg1;
- (void)titleExpandToggle;
- (void)onReportBullet:(id)arg1;
- (void)onDeleteBullet;
- (void)onReport;
- (void)onBulletToggel;
- (void)hideFunctionsToggle;
- (void)onShare;
- (void)onFav;
- (void)onMore;
- (void)onInPicture;
- (void)onMiniMize;
- (void)onlike;
- (void)onAvatar;
- (void)onEditingEnd:(id)arg1;
- (void)onProtrait;
- (void)onLandscape;
- (void)onDismiss;
- (void)onKeyboardFrameChange:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)onPanProgress:(id)arg1;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

