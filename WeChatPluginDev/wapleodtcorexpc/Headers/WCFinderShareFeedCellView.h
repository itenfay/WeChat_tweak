//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMUIButton, MMWebImageView, NSString, SightIconView, UIImage, UIImageView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderLiveNowView, WCFinderShareFeedCellViewModel;

@interface WCFinderShareFeedCellView
{
    MMWebImageView *_avatarImageView;
    UILabel *_nameLabel;
    WCFinderLiveNowView *_liveNowView;
    UIImageView *_contentImageView;
    CAGradientLayer *_gradientLayer;
    UIView *_separator;
    UIImageView *_tinyIcon;
    UILabel *_finderLabel;
    SightIconView *_playIconView;
    UIView *_photoCountDotView;
    UIImage *_fullScreenImage;
    WCFinderAuthInfoIconView *_authIconView;
    MMUIButton *_memberFlagButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *memberFlagButton; // @synthesize memberFlagButton=_memberFlagButton;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UIImage *fullScreenImage; // @synthesize fullScreenImage=_fullScreenImage;
@property(retain, nonatomic) UIView *photoCountDotView; // @synthesize photoCountDotView=_photoCountDotView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) UILabel *finderLabel; // @synthesize finderLabel=_finderLabel;
@property(retain, nonatomic) UIImageView *tinyIcon; // @synthesize tinyIcon=_tinyIcon;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onLoadImageOK:(id)arg1;
- (void)onAppear;
- (void)doShareAnimation;
- (_Bool)canResponseTouchNodeView;
- (void)onTouchUpInside;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onSliencePlay:(id)arg1;
- (id)operationMenuItems;
- (id)zoomAnimatorKey;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (void)onAnimatorWillBeginClosure:(id)arg1;
- (_Bool)zoomAnimiatorShouldCacheSnapView;
- (void)onAnimatorWillBeginExpand:(id)arg1;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (id)displayViewForImageBrowser;
- (void)willOpenShareViewController;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionStartImage;
- (void)layoutBottomViews;
- (void)layoutPureText;
- (void)layoutDefault;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WCFinderShareFeedCellViewModel *viewModel; // @dynamic viewModel;

@end

