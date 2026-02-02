//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMSnackBarConfig, NSString, UIViewController;

@interface MMSnackBarWindowViewController
{
    MMSnackBarConfig *_config;
    CDUnknownBlockType _actionHandlerBlock;
    CDUnknownBlockType _willAppearHandlerBlock;
    UIViewController *_snackBarContainer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *snackBarContainer; // @synthesize snackBarContainer=_snackBarContainer;
@property(copy, nonatomic) CDUnknownBlockType willAppearHandlerBlock; // @synthesize willAppearHandlerBlock=_willAppearHandlerBlock;
@property(copy, nonatomic) CDUnknownBlockType actionHandlerBlock; // @synthesize actionHandlerBlock=_actionHandlerBlock;
@property(retain, nonatomic) MMSnackBarConfig *config; // @synthesize config=_config;
- (id)topViewControllerInMainWindow;
- (void)onNeedHideSnackBar;
- (void)onNeedDoAction;
- (_Bool)shouldPassThroughFor:(id)arg1;
- (double)snackBarBottomInsetOffset;
- (void)removeNotification;
- (void)addNotifications;
- (id)snackBarView;
- (void)ensureSnackBarView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)hideSnackBar:(CDUnknownBlockType)arg1;
- (void)updateSnackBar;
- (void)showSnackBar;
- (void)dealloc;
- (id)init;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

