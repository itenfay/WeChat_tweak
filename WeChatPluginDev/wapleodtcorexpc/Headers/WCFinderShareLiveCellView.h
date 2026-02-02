//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveActivityView, MMFinderLiveLimitModeLiveInfoEnsurer, MMUIViewController, MMWebImageView, NSString, RichTextView, UIImageView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderLiveNowView, WCFinderLiveShareCellFullStatusView, WCFinderShareLiveCellViewModel;

@interface WCFinderShareLiveCellView
{
    _Bool _canShowLiveActivityView;
    _Bool _isVisible;
    MMWebImageView *_contentImageView;
    MMWebImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIView *_coverViewContainer;
    MMWebImageView *_maskImageView;
    UIImageView *_gradientView;
    UIView *_liveMaskView;
    WCFinderLiveShareCellFullStatusView *_liveMaskTipsView;
    WCFinderLiveNowView *_liveNowView;
    UIImageView *_tinyIcon;
    MMFinderLiveActivityView *_liveActivityView;
    WCFinderAuthInfoIconView *_authIconView;
    MMWebImageView *_tailTagView;
    UILabel *_coverEffectLabel;
    UILabel *_detailLabel;
    MMFinderLiveLimitModeLiveInfoEnsurer *_liveInfoEnsurer;
    RichTextView *_mediaTitleTextView;
    MMUIViewController *_lastViewController;
}

+ (void)clearContentViewHiddenState;
- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *lastViewController; // @synthesize lastViewController=_lastViewController;
@property(retain, nonatomic) RichTextView *mediaTitleTextView; // @synthesize mediaTitleTextView=_mediaTitleTextView;
@property(retain, nonatomic) MMFinderLiveLimitModeLiveInfoEnsurer *liveInfoEnsurer; // @synthesize liveInfoEnsurer=_liveInfoEnsurer;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *coverEffectLabel; // @synthesize coverEffectLabel=_coverEffectLabel;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) MMWebImageView *tailTagView; // @synthesize tailTagView=_tailTagView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMFinderLiveActivityView *liveActivityView; // @synthesize liveActivityView=_liveActivityView;
@property(nonatomic) _Bool canShowLiveActivityView; // @synthesize canShowLiveActivityView=_canShowLiveActivityView;
@property(retain, nonatomic) UIImageView *tinyIcon; // @synthesize tinyIcon=_tinyIcon;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) WCFinderLiveShareCellFullStatusView *liveMaskTipsView; // @synthesize liveMaskTipsView=_liveMaskTipsView;
@property(retain, nonatomic) UIView *liveMaskView; // @synthesize liveMaskView=_liveMaskView;
@property(retain, nonatomic) UIImageView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) MMWebImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIView *coverViewContainer; // @synthesize coverViewContainer=_coverViewContainer;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) MMWebImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (void)onAppEnterBackground;
- (_Bool)isListDragging;
- (void)onDisappear;
- (void)didMoveToWindow;
- (void)onLoadImageOK:(id)arg1;
- (void)onLiveStatusChanged;
- (void)doShareAnimation;
- (void)prepareForMorphTransition;
- (void)_executeTouchUpLogic;
- (void)onTouchUpInside;
- (void)setupCallbackViewForTransitionIfNeeded;
- (id)operationMenuItems;
- (id)transitionStartImage;
- (void)refreshLiveMaskEffect;
- (void)layoutLiveActivityView;
- (void)reloadContentViewHiddenState;
- (void)onAppear;
- (void)updateDetailLabel;
- (void)layoutDefault;
- (void)layoutFinished;
- (void)layoutInternal;
- (void)bindYReportSdk:(id)arg1;
@property(retain, nonatomic) WCFinderShareLiveCellViewModel *viewModel; // @dynamic viewModel;
- (void)prepareForReuse;
- (void)layoutContentView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

