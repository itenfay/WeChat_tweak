//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, NSString, WCAdCardBtnInfo, WCAdConventionalHalfScreenCustomBackgroundView, WCDataItem;
@protocol WCAdConventionalDetailContainerViewControllerDelegate;

@interface WCAdConventionalDetailContainerViewController
{
    _Bool _isPageSheetViewFullyVisible;
    _Bool _isPageSheetViewClosedByUser;
    id <WCAdConventionalDetailContainerViewControllerDelegate> _delegate;
    WCDataItem *_dataItem;
    WCAdCardBtnInfo *_actionInfo;
    unsigned long long _scene;
    MMPageSheetAdapter *_pageSheetAdapter;
    WCAdConventionalHalfScreenCustomBackgroundView *_customBackgroundView;
}

+ (double)fetchDetailPageSheetHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPageSheetViewClosedByUser; // @synthesize isPageSheetViewClosedByUser=_isPageSheetViewClosedByUser;
@property(nonatomic) _Bool isPageSheetViewFullyVisible; // @synthesize isPageSheetViewFullyVisible=_isPageSheetViewFullyVisible;
@property(retain, nonatomic) WCAdConventionalHalfScreenCustomBackgroundView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(nonatomic) __weak MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCAdCardBtnInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCAdConventionalDetailContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidChangeVisibleHeight:(id)arg1 toHeight:(double)arg2;
- (void)pageSheetPresentAnimateDidEnd:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (id)onCustomBackgroundViewHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)getAdSheetAdapter;
- (id)fetchPageSheetAdapter;
- (double)fetchHalfScreenDetailContainerHeight;
- (_Bool)isDetailContainerPageSheetClosedByUser;
- (void)dismissPageSheetWithAnimated:(_Bool)arg1;
- (void)showHalfScreenFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)removeMyselfGently;
- (void)removeMyselfDirectly;
- (void)dismissMyselfForce:(_Bool)arg1;
- (_Bool)isInHalfScreenMode;
- (void)onNaviBarCloseButtonClicked;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)needCloseOnOrientationChanged;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (id)initWithDataItem:(id)arg1 clickActionInfo:(id)arg2 scene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

