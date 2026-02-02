//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMLiveCameraOperationItem, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol MMLiveConnectMicAudienceCameraOperationPanelDelegate;

@interface MMLiveConnectMicAudienceCameraOperationPageSheet
{
    id <MMLiveConnectMicAudienceCameraOperationPanelDelegate> _actionDelegate;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _nextStateAfterClose;
    NSArray *_operationItems;
    MMLiveCameraOperationItem *_switchCameraItem;
    MMLiveCameraOperationItem *_mirrorItem;
    UICollectionViewFlowLayout *_operationItemsLayout;
    UICollectionView *_operationItemsCollectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *operationItemsCollectionView; // @synthesize operationItemsCollectionView=_operationItemsCollectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *operationItemsLayout; // @synthesize operationItemsLayout=_operationItemsLayout;
@property(retain, nonatomic) MMLiveCameraOperationItem *mirrorItem; // @synthesize mirrorItem=_mirrorItem;
@property(retain, nonatomic) MMLiveCameraOperationItem *switchCameraItem; // @synthesize switchCameraItem=_switchCameraItem;
@property(retain, nonatomic) NSArray *operationItems; // @synthesize operationItems=_operationItems;
@property(nonatomic) unsigned long long nextStateAfterClose; // @synthesize nextStateAfterClose=_nextStateAfterClose;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveConnectMicAudienceCameraOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)closeWithNextState:(unsigned long long)arg1;
- (id)liveTask;
- (void)updateSwitchCameraItemDisabled:(_Bool)arg1;
- (void)updateMirrorItemStateAndReloadCell:(_Bool)arg1;
- (void)delayResetSwitchCameraItemDisabled;
- (void)updateItemsAfterSwitchCameraFinished;
- (void)handleSwitchCameraItemAction;
- (void)handleMirrorItemAction;
- (void)handleStateTransitionAction:(unsigned long long)arg1;
- (void)updateOperationItems;
- (void)initializeComponents;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetWillAppear;
- (void)layoutSubviews;
- (void)closePanelDirectly;
- (void)showPanel;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

