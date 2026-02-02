//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIScrollView, UIStackView, UIView;

@interface ElderModeViewController
{
    _Bool _disableAutoJumpWhenElderModeOpen;
    _Bool _showInWeCheck;
    _Bool _showElderModeToast;
    long long _scene;
    UIScrollView *_scrollView;
    UIStackView *_contentStack;
    UIView *_gradientMaskView;
    UIButton *_openOrCloseButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showElderModeToast; // @synthesize showElderModeToast=_showElderModeToast;
@property(retain, nonatomic) UIButton *openOrCloseButton; // @synthesize openOrCloseButton=_openOrCloseButton;
@property(retain, nonatomic) UIView *gradientMaskView; // @synthesize gradientMaskView=_gradientMaskView;
@property(retain, nonatomic) UIStackView *contentStack; // @synthesize contentStack=_contentStack;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool showInWeCheck; // @synthesize showInWeCheck=_showInWeCheck;
@property(nonatomic) _Bool disableAutoJumpWhenElderModeOpen; // @synthesize disableAutoJumpWhenElderModeOpen=_disableAutoJumpWhenElderModeOpen;
- (void)onSetSilentModeOn:(_Bool)arg1 success:(_Bool)arg2;
- (void)onSetSpecialRenderModeOn:(_Bool)arg1 success:(_Bool)arg2;
- (void)onSetElderModeOn:(_Bool)arg1 success:(_Bool)arg2;
- (void)reloadDataForElderModeChange;
- (void)setElderModeOn:(_Bool)arg1;
- (void)openElderMode;
- (void)closeElderMode;
- (void)onQuickCallClick:(id)arg1;
- (void)onSilentModeSwitchChanged:(id)arg1;
- (void)onTextToSpeechSwitchChanged:(id)arg1;
- (void)onFontLevelSwitchChanged:(id)arg1;
- (void)addSpacerOfMinHeight:(double)arg1;
- (void)loadModeOnComponents;
- (void)appendModeOffDescription:(id)arg1;
- (void)appendModeOffDescriptions:(id)arg1;
- (void)appendModeOffTitle:(id)arg1;
- (void)loadModeOffComponents;
- (id)managerForOnMode;
- (id)logoHeadView;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)registerYReportSdk;
- (void)updateGradientLayer;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithScene:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

