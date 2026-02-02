//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIView, NSString, UIView, WCAdContinuousLikeButtonView, WCAdSocialLikeCheerPlayerView, WCAdSocialLikeInfo, WCAdSocialLikeLogic, WCDataItem;
@protocol WCAdSocialLikeViewDelegate;

@interface WCAdSocialLikeView
{
    _Bool _bTimelineScene;
    _Bool _isLikeIconAnimating;
    _Bool _isLikeButtonTransformAnimating;
    WCDataItem *_dataItem;
    id <WCAdSocialLikeViewDelegate> _delegate;
    WCAdSocialLikeCheerPlayerView *_adSocialLikeCheerPlayerView;
    WCAdSocialLikeInfo *_adSocialLikeInfo;
    double _inlineRemainWidth;
    double _blockRemainWidth;
    MMUIView *_likeContainer;
    MMUIButton *_likeButton;
    MMUIButton *_commentButton;
    UIView *_dividerView;
    WCAdContinuousLikeButtonView *_continuousLikeButtonView;
    long long _viewDisplayType;
}

+ (double)uiDividerWidth:(id)arg1;
+ (double)uiButtonCommentIconSize:(id)arg1;
+ (double)uiButtonLikeIconMaxSize:(id)arg1;
+ (double)uiButtonPaddingVertical:(id)arg1;
+ (double)calcMinWidthInline:(id)arg1;
+ (double)calcCommentTitleWidth:(id)arg1;
+ (double)calcCurrentLikeTitleWidth:(id)arg1 isSelfLiked:(_Bool)arg2;
+ (double)calcLikeTitleMaxWidth:(id)arg1;
+ (id)fetchCommentTitle:(id)arg1;
+ (id)fetchCurrentLikeTitle:(id)arg1 isSelfLiked:(_Bool)arg2;
+ (id)fetchCancelLikeTitle:(id)arg1;
+ (id)fetchLikeTitle:(id)arg1;
+ (double)calcSocialLikeViewHeight:(id)arg1;
+ (long long)fetchDisplayType:(id)arg1 inlineRemainWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long viewDisplayType; // @synthesize viewDisplayType=_viewDisplayType;
@property(nonatomic) _Bool isLikeButtonTransformAnimating; // @synthesize isLikeButtonTransformAnimating=_isLikeButtonTransformAnimating;
@property(nonatomic) _Bool isLikeIconAnimating; // @synthesize isLikeIconAnimating=_isLikeIconAnimating;
@property(retain, nonatomic) WCAdContinuousLikeButtonView *continuousLikeButtonView; // @synthesize continuousLikeButtonView=_continuousLikeButtonView;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) MMUIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) MMUIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) MMUIView *likeContainer; // @synthesize likeContainer=_likeContainer;
@property(nonatomic) double blockRemainWidth; // @synthesize blockRemainWidth=_blockRemainWidth;
@property(nonatomic) double inlineRemainWidth; // @synthesize inlineRemainWidth=_inlineRemainWidth;
@property(nonatomic) _Bool bTimelineScene; // @synthesize bTimelineScene=_bTimelineScene;
@property(retain, nonatomic) WCAdSocialLikeInfo *adSocialLikeInfo; // @synthesize adSocialLikeInfo=_adSocialLikeInfo;
@property(nonatomic) __weak WCAdSocialLikeCheerPlayerView *adSocialLikeCheerPlayerView; // @synthesize adSocialLikeCheerPlayerView=_adSocialLikeCheerPlayerView;
@property(nonatomic) __weak id <WCAdSocialLikeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)traitCollectionDidChange:(id)arg1;
- (void)registerButtonGesture;
- (id)uiButtonCommentIconImage;
- (SEL)uiButtonLikeClickSelector;
- (id)uiDividerColor;
- (id)uiButtonContainerBgColor;
- (double)uiButtonRadius;
- (id)uiButtonDefaultBgImage;
- (double)uiButtonLikeIconSize;
- (void)reportPatLikeButtonClick:(int)arg1;
- (void)registerPatButtonGesture;
- (void)realStopPatIconPag;
- (void)tryToStopPatIconPag;
- (void)tryToPlayPatIconPag;
- (id)fetchCurrentPatLikeIconPagView;
- (id)createPatButtonLikeIconPag;
- (id)createPatButtonLikeIcon;
- (void)patPlayFullScreenAnimation;
- (void)patToggleLike;
- (void)onPatLikeButtonDoubleClick;
- (void)onPatLikeButtonSingleClick;
@property(readonly, nonatomic) _Bool isPatStyle;
- (id)fetchFireworkCheerReportInfo;
- (void)doFireworkCheerRealLike;
- (void)onFireworkCheerLikeButtonClick;
- (void)playFireworkCheerAttracting;
- (id)createFireworkCheerIconPag;
- (void)startFireworkCheerLikeButtonAnimation;
- (void)realStopFireworkCheerIconPag;
- (void)tryToStopFireworkCheerIconPag;
- (void)tryToPlayFireworkCheerIconPag;
- (void)updateFireworkCheerLikeButton;
@property(readonly, nonatomic) _Bool isFireworkCheerStyle;
- (void)onAnimationUpdate:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)fetchContinuousLikeReportInfo;
@property(readonly, nonatomic) WCAdSocialLikeLogic *socialLikeLogic;
- (void)onMainMediaPlayStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 isPlaying:(_Bool)arg3;
- (void)onFireworkCheerCommentAnimationStarted:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)onFireworkCheerRealLike:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)onContinuousLikeStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 likeState:(int)arg3;
- (void)onSocialLikeAttractingAnimationCancel;
- (void)onSocialLikeAttractingIconAnimationEnd;
- (void)onSocialLikeAttractingAnimationEnd;
- (id)createButtonLikeIcon;
- (void)playLikeButtonTransformAnimation;
- (void)playAttractingIconAnimation:(_Bool)arg1;
- (void)tryToRestoreAttractingIconAnimation;
- (void)playAttractingAnimation;
- (void)playCheerPAG;
- (void)displayLikeIconAnimation;
- (void)onCommentButtonClick;
- (void)onLikeButtonClick;
- (id)createContinuousLikeButtonView:(_Bool)arg1;
- (void)initContinuousLikeButton;
- (id)fetchLikeIconView;
- (void)updateLikeIconImage:(id)arg1;
- (id)createBasicButtonWithTitle:(id)arg1;
- (id)createButtonBlock:(id)arg1 buttonWidth:(double)arg2 contentScale:(double)arg3 iconView:(id)arg4 iconSize:(double)arg5;
- (void)initViewBlock;
- (id)createDividerView;
- (id)createButtonInline:(id)arg1 paddingScale:(double)arg2 iconView:(id)arg3 iconSize:(double)arg4;
- (void)initViewInline;
- (void)initLikeContainer;
- (void)initView;
@property(readonly, nonatomic) long long displayType;
- (void)dealloc;
- (id)initWithSocialLikeInfo:(id)arg1 dataItem:(id)arg2 bTimelineScene:(_Bool)arg3 inlineRemainWidth:(double)arg4 blockRemainWidth:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

