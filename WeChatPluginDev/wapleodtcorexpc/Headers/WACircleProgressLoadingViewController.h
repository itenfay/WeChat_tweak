//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSString, UIImageView, UILabel, UIView, WACircleLoadingView, WCTagsView, _TtC9WeAppCore41WALoadingNetWorkInvalidTipsViewController;

@interface WACircleProgressLoadingViewController
{
    _Bool _showWeAppBrand;
    _Bool _isInDarkMode;
    unsigned int _lastProgressTime;
    UIView *_backgroundView;
    MMWebImageView *_logoView;
    MMUILabel *_titleLabel;
    WACircleLoadingView *_circleLoadingView;
    unsigned long long _initTime;
    unsigned long long _appearTime;
    UIView *_weappBrandContainerView;
    UIImageView *_weappBrandLogoImageView;
    UILabel *_weappBrandTitleLabel;
    UILabel *_weakNetTipsLabel;
    WCTagsView *_officialTagsView;
    WCTagsView *_easyBuyLogoImageView;
    WCTagsView *_flagshipImageView;
    _TtC9WeAppCore41WALoadingNetWorkInvalidTipsViewController *_networkInavalidVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC9WeAppCore41WALoadingNetWorkInvalidTipsViewController *networkInavalidVC; // @synthesize networkInavalidVC=_networkInavalidVC;
@property(retain, nonatomic) WCTagsView *flagshipImageView; // @synthesize flagshipImageView=_flagshipImageView;
@property(retain, nonatomic) WCTagsView *easyBuyLogoImageView; // @synthesize easyBuyLogoImageView=_easyBuyLogoImageView;
@property(retain, nonatomic) WCTagsView *officialTagsView; // @synthesize officialTagsView=_officialTagsView;
@property(retain, nonatomic) UILabel *weakNetTipsLabel; // @synthesize weakNetTipsLabel=_weakNetTipsLabel;
@property(retain, nonatomic) UILabel *weappBrandTitleLabel; // @synthesize weappBrandTitleLabel=_weappBrandTitleLabel;
@property(retain, nonatomic) UIImageView *weappBrandLogoImageView; // @synthesize weappBrandLogoImageView=_weappBrandLogoImageView;
@property(retain, nonatomic) UIView *weappBrandContainerView; // @synthesize weappBrandContainerView=_weappBrandContainerView;
@property(nonatomic) unsigned int lastProgressTime; // @synthesize lastProgressTime=_lastProgressTime;
@property(nonatomic) unsigned long long appearTime; // @synthesize appearTime=_appearTime;
@property(nonatomic) unsigned long long initTime; // @synthesize initTime=_initTime;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(nonatomic) _Bool showWeAppBrand; // @synthesize showWeAppBrand=_showWeAppBrand;
@property(retain, nonatomic) WACircleLoadingView *circleLoadingView; // @synthesize circleLoadingView=_circleLoadingView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (_Bool)systemCoverViewHidden;
- (long long)capsuleMenuStyleMode;
- (struct CGRect)capsuleMenuFrame;
- (struct CGRect)capsuleMenuOriginalFrame;
- (_Bool)capsuleMenuHidden;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)onUpdateAppPkgProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 withAppInfoData:(id)arg4;
- (void)onTaskLoadingFailed;
- (_Bool)takeOverLoadFailedBehavior;
- (_Bool)shouldShowBrandOfficialFlag;
- (id)officialTagsArray;
- (void)viewDidLayoutSubviews;
- (_Bool)needWeakNetTips;
- (void)initWeakNetTips;
- (void)initEasyBuyLogo;
- (void)initWeAppBrandView;
- (void)initTagsView;
- (void)initLoadingView;
- (void)initContactTitle;
- (void)initLogoView;
- (void)initBackgroundView;
- (void)initSubViews;
- (void)initView;
- (void)updateUI;
- (void)configUI;
- (void)updateContact:(id)arg1;
- (void)showNetworkInvalidTipsView;
- (void)delayCheckDownloadTunnel;
- (void)delayShowWeakNetTips;
- (void)delayShowLoadingProgress;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

