//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdFinderDialogBaseInfo, WCAdFinderDialogClickManager, WCAdFinderDialogCloseBarView, WCAdFinderDialogContainView, WCFinderJumpInfoParams;

@interface WCAdFinderDialogViewController
{
    WCAdFinderDialogBaseInfo *_dialogInfo;
    WCFinderJumpInfoParams *_jumpParams;
    double _heightRatio;
    WCAdFinderDialogContainView *_dialogContainView;
    WCAdFinderDialogCloseBarView *_closeBarView;
    WCAdFinderDialogClickManager *_clickManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFinderDialogClickManager *clickManager; // @synthesize clickManager=_clickManager;
@property(retain, nonatomic) WCAdFinderDialogCloseBarView *closeBarView; // @synthesize closeBarView=_closeBarView;
@property(retain, nonatomic) WCAdFinderDialogContainView *dialogContainView; // @synthesize dialogContainView=_dialogContainView;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) WCFinderJumpInfoParams *jumpParams; // @synthesize jumpParams=_jumpParams;
@property(retain, nonatomic) WCAdFinderDialogBaseInfo *dialogInfo; // @synthesize dialogInfo=_dialogInfo;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfDismissTransition;
- (_Bool)isHideBackgroupMask;
- (_Bool)isHideBorderShadow;
- (id)getHalfTransformView;
- (id)getHalfContainerView;
- (void)onDialogContainViewConfirmButtonDidClick;
- (void)onDialogContainViewScrollViewDidEndScrolling;
- (void)onDialogContainViewScrollViewDidScroll;
- (void)updateCommonUI;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)needCloseOnOrientationChanged;
- (_Bool)useTransparentNavibar;
- (double)getMaxHalfScreenHeight;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithDialogInfo:(id)arg1 jumpParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

