//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class NSString, UIImageView, UINavigationController, UIView;

@interface WCSplitViewController : UIViewController
{
    _Bool _autoCalculatePrimaryWidth;
    double _primaryWidth;
    UIViewController *_primaryViewController;
    UINavigationController *_detailEmptyViewController;
    long long _displayMode;
    double _separatorWidth;
    UIView *_separatorLine;
    UIImageView *_snapshotImageView;
    struct CGSize _lastSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(retain, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) double separatorWidth; // @synthesize separatorWidth=_separatorWidth;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) UINavigationController *detailEmptyViewController; // @synthesize detailEmptyViewController=_detailEmptyViewController;
@property(retain, nonatomic) UIViewController *primaryViewController; // @synthesize primaryViewController=_primaryViewController;
@property(nonatomic) _Bool autoCalculatePrimaryWidth; // @synthesize autoCalculatePrimaryWidth=_autoCalculatePrimaryWidth;
@property(nonatomic) double primaryWidth; // @synthesize primaryWidth=_primaryWidth;
- (void)removeDetailSnapshot;
- (void)addDetailSnapshot;
- (_Bool)shouldUseSplitMode;
- (_Bool)detailViewControllerForceFullscreen;
- (void)updateDetailViewControllerDisplayMode:(long long)arg1;
- (void)changeDisplayMode:(long long)arg1;
- (void)updateContentLayout;
- (_Bool)isInSplitMode;
- (_Bool)detailForceFullscreen;
- (void)onDetailViewControllerDidChangeMode:(_Bool)arg1;
- (void)onDetailViewControllerWillChangeMode:(_Bool)arg1;
- (void)onPresentingEndAppearance;
- (void)onPresentingBeginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)transitionTypeForAnimator:(id)arg1;
- (void)setPrimaryHidden:(_Bool)arg1;
- (void)dismissDetailViewController:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissDetailViewController:(_Bool)arg1;
@property(readonly, nonatomic) long long currentDetailShowType;
@property(readonly, nonatomic) long long currentDisplayMode;
- (void)presentDetailViewController:(id)arg1 showType:(long long)arg2 forceFullScreen:(_Bool)arg3 animated:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;
- (void)internelShowDetailViewController:(id)arg1 canMixed:(_Bool)arg2 showType:(long long)arg3 forceFullScreen:(_Bool)arg4 animated:(_Bool)arg5 complete:(CDUnknownBlockType)arg6;
- (id)showDetailViewController:(id)arg1 showType:(long long)arg2 animated:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (id)showDetailViewController:(id)arg1 showType:(long long)arg2;
- (id)detailTopNavigationController;
@property(readonly, nonatomic) UIViewController *detailViewController;
- (void)onMainWindowFrameChanged;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

