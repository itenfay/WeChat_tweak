//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WACapsuleView, WASplashAdRootView, WAWebViewMutiFuncMenuView;
@protocol WASplashADViewControllerDelegate;

@interface WASplashADViewController
{
    _Bool _didAppear;
    unsigned long long _scene;
    id <WASplashADViewControllerDelegate> _delegate;
    WASplashAdRootView *_adRootView;
    WACapsuleView *_capsuleView;
    WAWebViewMutiFuncMenuView *_funcMenuView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAWebViewMutiFuncMenuView *funcMenuView; // @synthesize funcMenuView=_funcMenuView;
@property(retain, nonatomic) WACapsuleView *capsuleView; // @synthesize capsuleView=_capsuleView;
@property(retain, nonatomic) WASplashAdRootView *adRootView; // @synthesize adRootView=_adRootView;
@property(nonatomic) __weak id <WASplashADViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
- (_Bool)systemCoverViewHidden;
- (long long)capsuleMenuStyleMode;
- (struct CGRect)calculateCapsuleMenuFrame:(double)arg1;
- (struct CGRect)capsuleMenuFrame;
- (struct CGRect)capsuleMenuOriginalFrame;
- (_Bool)capsuleMenuHidden;
- (_Bool)webViewControllerMenuMustNotHandleMenuShowOrDismiss:(id)arg1;
- (_Bool)webViewControllerMenuMustNotShowADMenuItem:(id)arg1;
- (_Bool)webViewControllerMenuMustShowGoHomeInWeApp:(id)arg1;
- (_Bool)webViewControllerMenuMustNotShareTimeline:(id)arg1;
- (_Bool)webViewControllerMenuMustNotShare:(id)arg1;
- (unsigned long long)leftButtonTypeForMultiFuncMenuView:(id)arg1;
- (void)capsuleViewOnClickExit:(id)arg1;
- (void)capsuleViewOnClickMore:(id)arg1;
- (void)onWebViewMenuReturn;
- (id)backgroundColor;
- (void)onClickButtonClicked:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
- (_Bool)hidesStatusBar;
- (_Bool)useCustomNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (double)getCapsuleMenuWidth;
- (struct CGRect)capsuleFrame;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithScene:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

