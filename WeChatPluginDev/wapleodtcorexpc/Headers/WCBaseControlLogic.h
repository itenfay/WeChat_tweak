//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;
@protocol MMUIViewControllerDelegate, WCBaseControlLogicDeleagte;

@interface WCBaseControlLogic
{
    NSMutableArray *m_arrVC;
    unsigned int m_uiLogicStatus;
    unsigned int m_tag;
    unsigned long long m_uiStartedTime;
    id <MMUIViewControllerDelegate> m_vcRootDelegate;
    id <WCBaseControlLogicDeleagte> m_logicDelegate;
    _Bool _useGotoRootViewControllerV2;
    _Bool _cancelDimissOrPopAnimation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cancelDimissOrPopAnimation; // @synthesize cancelDimissOrPopAnimation=_cancelDimissOrPopAnimation;
@property(nonatomic) _Bool useGotoRootViewControllerV2; // @synthesize useGotoRootViewControllerV2=_useGotoRootViewControllerV2;
@property(nonatomic) unsigned int m_uiLogicStatus; // @synthesize m_uiLogicStatus;
@property(readonly, nonatomic) unsigned long long m_uiStartedTime; // @synthesize m_uiStartedTime;
@property(readonly, nonatomic) __weak id <WCBaseControlLogicDeleagte> m_logicDelegate; // @synthesize m_logicDelegate;
@property(readonly, nonatomic) __weak id <MMUIViewControllerDelegate> m_vcRootDelegate; // @synthesize m_vcRootDelegate;
@property(nonatomic) unsigned int m_tag; // @synthesize m_tag;
- (void)dismissCurrentViewWithAnimatedV2:(_Bool)arg1;
- (void)gotoLogicFirstViewControllerWithAnimation:(_Bool)arg1;
- (_Bool)isLogicCancel;
- (_Bool)isLogicCompleteOK;
- (_Bool)onError:(id)arg1;
- (id)getCurrentViewController;
- (void)setlogicDelegate:(id)arg1;
- (void)setRootViewControllerDelegate:(id)arg1;
- (void)gotoRootViewControllerAndStopLogicWithAnimated:(_Bool)arg1;
- (void)gotoRootViewControllerWithAnimatedV2:(_Bool)arg1;
- (void)gotoRootViewControllerWithAnimated:(_Bool)arg1;
- (void)setViewControllers:(id)arg1 withData:(id)arg2 Animation:(_Bool)arg3;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Animation:(_Bool)arg3;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3 showNavigation:(_Bool)arg4 Animation:(_Bool)arg5 transitioningDelegate:(id)arg6 forceFullScreen:(_Bool)arg7;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3 Animation:(_Bool)arg4 forceFullScreen:(_Bool)arg5;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3 showNavigation:(_Bool)arg4 Animation:(_Bool)arg5 forceFullScreen:(_Bool)arg6;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(_Bool)arg3 Animation:(_Bool)arg4;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4 Present:(_Bool)arg5;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4 Present:(_Bool)arg5 Animation:(_Bool)arg6;
- (void)pushViewController:(id)arg1 Animated:(_Bool)arg2 transitioningDelegate:(id)arg3;
- (void)presentViewController:(id)arg1 Animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 Animated:(_Bool)arg2;
- (void)presentViewController:(id)arg1 Animated:(_Bool)arg2 showNavigation:(_Bool)arg3 transitioningDelegate:(id)arg4 forceFullScreen:(_Bool)arg5;
- (void)presentViewController:(id)arg1 Animated:(_Bool)arg2 showNavigation:(_Bool)arg3;
- (void)dismissCurrentViewAndCheckStopLogicWithAnimated:(_Bool)arg1;
- (void)dismissCurrentViewWithAnimated:(_Bool)arg1;
- (void)checkStopLogic;
- (void)showRedesignLoadingOK:(id)arg1;
- (void)showLoadingOK:(id)arg1 withDelay:(double)arg2;
- (void)showLoadingOK:(id)arg1;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoading;
- (void)startLoadingWithTip:(id)arg1;
- (void)startLoading;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (id)getLogicViewControllers;
- (void)addTopViewController:(id)arg1;
- (void)removeFromViewController:(id)arg1;
- (void)removeTopViewController;
- (void)stopLogic;
- (void)startLogic;
- (void)cancel;
- (void)pause;
- (void)resume;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

