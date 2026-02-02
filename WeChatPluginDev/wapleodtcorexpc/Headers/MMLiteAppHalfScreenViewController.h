//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppViewController, NSString, UIColor, UIPanGestureRecognizer, UIView;

@interface MMLiteAppHalfScreenViewController
{
    _Bool _enablePullUp;
    _Bool _enablePullDown;
    _Bool _enableFullscreenPullDown;
    _Bool _hideWhenPullDown;
    _Bool _withMask;
    _Bool _landscape;
    _Bool _autoRotate;
    MMLiteAppViewController *_liteappViewController;
    double _heightPercent;
    UIPanGestureRecognizer *_contentViewPanGesture;
    UIView *_safeAreaInsetsView;
    UIColor *_titleBgColor;
    UIColor *_darkTitleBgColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *darkTitleBgColor; // @synthesize darkTitleBgColor=_darkTitleBgColor;
@property(retain, nonatomic) UIColor *titleBgColor; // @synthesize titleBgColor=_titleBgColor;
@property(retain, nonatomic) UIView *safeAreaInsetsView; // @synthesize safeAreaInsetsView=_safeAreaInsetsView;
@property(retain, nonatomic) UIPanGestureRecognizer *contentViewPanGesture; // @synthesize contentViewPanGesture=_contentViewPanGesture;
@property(nonatomic) _Bool autoRotate; // @synthesize autoRotate=_autoRotate;
@property(nonatomic) _Bool landscape; // @synthesize landscape=_landscape;
@property(nonatomic) _Bool withMask; // @synthesize withMask=_withMask;
@property(nonatomic) _Bool hideWhenPullDown; // @synthesize hideWhenPullDown=_hideWhenPullDown;
@property(nonatomic) _Bool enableFullscreenPullDown; // @synthesize enableFullscreenPullDown=_enableFullscreenPullDown;
@property(nonatomic) _Bool enablePullDown; // @synthesize enablePullDown=_enablePullDown;
@property(nonatomic) _Bool enablePullUp; // @synthesize enablePullUp=_enablePullUp;
@property(nonatomic) double heightPercent; // @synthesize heightPercent=_heightPercent;
@property(retain, nonatomic) MMLiteAppViewController *liteappViewController; // @synthesize liteappViewController=_liteappViewController;
- (void)start;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDarkMode:(_Bool)arg1;
- (_Bool)darkMode;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(_Bool)arg2 pageId:(unsigned long long)arg3;
- (void)updateSafeAreaInsetsView:(struct CGSize)arg1;
- (double)marginLeft;
- (void)updateByLandscape;
- (void)setSize:(struct CGSize)arg1;
- (id)contentView;
- (id)backgroundButton;
- (void)scrollToResume;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)animationToTarget:(double)arg1 action:(id)arg2;
- (void)setContentViewTopTo:(double)arg1 animatedWithDuration:(double)arg2;
- (double)getContentViewTop;
- (_Bool)isPanUpGesture:(id)arg1;
- (_Bool)isPanVerticalGesture:(id)arg1;
- (double)fetchHalfScreenPageHeight;
- (void)contentTopDidChangeFromTop:(double)arg1 toTop:(double)arg2;
- (id)getHalfDismissTransition;
- (id)getHalfTransformView;
- (id)getHalfContainerView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)initPanGesture;
- (void)updateCanvasView;
- (void)doClickCloseWithNeedAnimated:(_Bool)arg1 action:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)needCloseOnOrientationChanged;
- (_Bool)useTransparentNavibar;
- (_Bool)shouldChangeDetailScrollViewHeightWhileScrolling;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (double)getMaxHalfScreenHeight;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithParams:(id)arg1;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 isTransparent:(_Bool)arg6 startReport:(id)arg7 reporter:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

