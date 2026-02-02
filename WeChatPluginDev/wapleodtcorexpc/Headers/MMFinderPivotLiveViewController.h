//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTask, MMLiveCompleteViewController, MMLiveFullScreenTipsView, MMLivePivotItemViewController, NSString;
@protocol MMFinderPivotLiveViewControllerDelegate;

@interface MMFinderPivotLiveViewController
{
    _Bool _postponeJoinLive;
    _Bool _supressMinimizeWindowAutoupdate;
    MMLivePivotItemViewController *_itemController;
    id <MMFinderPivotLiveViewControllerDelegate> _pivotLiveVcDelegate;
    MMLiveFullScreenTipsView *_privateJoinBlockView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveFullScreenTipsView *privateJoinBlockView; // @synthesize privateJoinBlockView=_privateJoinBlockView;
@property(nonatomic) _Bool supressMinimizeWindowAutoupdate; // @synthesize supressMinimizeWindowAutoupdate=_supressMinimizeWindowAutoupdate;
@property(nonatomic) _Bool postponeJoinLive; // @synthesize postponeJoinLive=_postponeJoinLive;
@property(nonatomic) __weak id <MMFinderPivotLiveViewControllerDelegate> pivotLiveVcDelegate; // @synthesize pivotLiveVcDelegate=_pivotLiveVcDelegate;
@property __weak MMLivePivotItemViewController *itemController; // @synthesize itemController=_itemController;
- (id)liveMorphDismissSourceTransitionSnapshotView;
- (void)setupMorphDismiss;
- (void)persistMorphDismissTarget;
- (struct CGRect)getWindowBounds;
- (void)onMMFinderLiveShopShelfCloseWithReason:(long long)arg1;
- (void)openShopShelfWithGoods:(id)arg1 extraInfo:(id)arg2 shopSelfParams:(id)arg3;
- (void)viewWillLayoutSubviews;
- (_Bool)shouldSupportInteractiveTransition;
- (void)showCompleteViewControllerWithoutAnimation;
- (id)createCompleteViewController;
- (void)gotoCompletePageOverride;
- (id)createOperationViewWithTaskId:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (id)initWithLiveTaskId:(id)arg1;

// Remaining properties
@property(retain, nonatomic) MMLiveCompleteViewController *completeViewController;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

