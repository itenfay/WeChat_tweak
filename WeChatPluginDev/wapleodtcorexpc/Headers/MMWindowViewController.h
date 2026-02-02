//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIWindowScene;

@interface MMWindowViewController
{
    _Bool _isHidden;
    _Bool _isRequestKeyWindow;
    _Bool _isNeedNavCtrl;
    int _level;
    int _transitionOptions;
    long long _statusBarStyle;
    _Bool _isChangeStatusBar;
    _Bool _forbidUserInteraction;
    _Bool _forbidVoiceOverAutoFocus;
    _Bool _delayVoiceOverAutoFocus;
    _Bool _shouldHandleStatusBarAppearance;
    _Bool _createNewSceneInVision;
    _Bool _isInOutsidePresentation;
    UIWindowScene *_windowScene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInOutsidePresentation; // @synthesize isInOutsidePresentation=_isInOutsidePresentation;
@property(nonatomic) _Bool createNewSceneInVision; // @synthesize createNewSceneInVision=_createNewSceneInVision;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(nonatomic) _Bool shouldHandleStatusBarAppearance; // @synthesize shouldHandleStatusBarAppearance=_shouldHandleStatusBarAppearance;
@property(nonatomic) _Bool delayVoiceOverAutoFocus; // @synthesize delayVoiceOverAutoFocus=_delayVoiceOverAutoFocus;
@property(nonatomic) _Bool forbidVoiceOverAutoFocus; // @synthesize forbidVoiceOverAutoFocus=_forbidVoiceOverAutoFocus;
@property(nonatomic) _Bool forbidUserInteraction; // @synthesize forbidUserInteraction=_forbidUserInteraction;
- (void)dealloc;
- (void)notifySupportedOrientationMaskShouldAdjust;
- (_Bool)supportAdjustOrientationMask;
- (void)hideWithAnimated:(int)arg1;
- (void)hide;
- (_Bool)DismissMyselfAnimated:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showWithAnimated:(int)arg1 willCloseAfter:(double)arg2;
- (_Bool)isObjShowing;
- (_Bool)isClassShowing;
- (long long)preferredStatusBarStyle;
- (id)presentContentView;
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2 showEndEditing:(_Bool)arg3;
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2;
- (void)showWithAnimated:(int)arg1;
- (void)show;
- (void)setStatusBarStyle:(long long)arg1;
- (void)hideNavBar;
- (void)setWindowLevel:(int)arg1;
- (void)updateWindowSceneUpTo:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

