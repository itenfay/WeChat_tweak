//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLimitedModeVerifyPasswordUtilLogic, NSString, UINavigationController, UIView, UIViewController;

@interface WCFinderLimitModeGuideViewController
{
    MMLimitedModeVerifyPasswordUtilLogic *m_limitedModeVerifyPasswordUtilLogic;
    int _commenScene;
    UIView *_detailView;
    UINavigationController *_navVC;
    UIViewController *_targetVC;
    long long _themeStyle;
}

+ (_Bool)checkShouldShowGuideView;
+ (void)presendGuideVC:(id)arg1 toTargetVC:(id)arg2;
+ (void)displayToRootView:(id)arg1 commentScene:(int)arg2 type:(long long)arg3 ignoreShareFeedListVC:(_Bool)arg4;
+ (void)displayToRootView:(id)arg1 commentScene:(int)arg2 type:(long long)arg3;
+ (_Bool)shouldShowLimitModeGuidForType:(long long)arg1;
+ (long long)displayType:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long themeStyle; // @synthesize themeStyle=_themeStyle;
@property(nonatomic) __weak UIViewController *targetVC; // @synthesize targetVC=_targetVC;
@property(nonatomic) __weak UINavigationController *navVC; // @synthesize navVC=_navVC;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) int commenScene; // @synthesize commenScene=_commenScene;
- (void)onGoToSetLimitedModeViewControllerSuccess;
- (void)close:(_Bool)arg1;
- (void)onClickSetting;
- (void)onClickIKnow;
- (void)onTapBlankArea:(id)arg1;
- (void)addCloseIconToView:(id)arg1;
- (id)buildBottomGuideView;
- (id)buildMiddleGuildView;
- (id)cornerView:(id)arg1 insets:(struct UIEdgeInsets)arg2 cornerRadius:(double)arg3 needShadow:(_Bool)arg4;
- (id)createIcon:(_Bool)arg1;
- (id)createBottomIKnowButton:(double)arg1;
- (id)createIKnowButton:(double)arg1 verticalPadding:(double)arg2;
- (id)createSettingBtn:(_Bool)arg1;
- (id)wrapDetailView:(id)arg1;
- (id)createDetailLabel:(double)arg1 contentAttrs:(id)arg2;
- (pair_b2618ff2)animationPosition;
- (void)showDetailWithAnimation;
- (void)addTapClaseActionToView:(id)arg1;
- (void)setupBackgroundView;
- (void)updateDetailFrame;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

