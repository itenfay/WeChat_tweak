//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveCameraOperationItem, MMLiveTaskId, MMUIButton, MMUILabel, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol MMLiveCameraOperationPanelDelegate;

@interface MMLiveCameraOperationPageSheet
{
    _Bool _disableSwitchToAudioMode;
    _Bool _hasMultipleRedDot;
    id <MMLiveCameraOperationPanelDelegate> _actionDelegate;
    MMLiveTaskId *_taskId;
    unsigned long long _nextStateAfterClose;
    NSArray *_operationItems;
    MMLiveCameraOperationItem *_switchCameraItem;
    MMLiveCameraOperationItem *_mirrorItem;
    MMUIButton *_cameraSwitchButton;
    UICollectionViewFlowLayout *_operationItemsLayout;
    UICollectionView *_operationItemsCollectionView;
    MMUILabel *_cameraOffLabel;
    CDUnknownBlockType _redDotQueryBlock;
}

+ (_Bool)isCamGestureEnabled:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasMultipleRedDot; // @synthesize hasMultipleRedDot=_hasMultipleRedDot;
@property(copy, nonatomic) CDUnknownBlockType redDotQueryBlock; // @synthesize redDotQueryBlock=_redDotQueryBlock;
@property(retain, nonatomic) MMUILabel *cameraOffLabel; // @synthesize cameraOffLabel=_cameraOffLabel;
@property(retain, nonatomic) UICollectionView *operationItemsCollectionView; // @synthesize operationItemsCollectionView=_operationItemsCollectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *operationItemsLayout; // @synthesize operationItemsLayout=_operationItemsLayout;
@property(retain, nonatomic) MMUIButton *cameraSwitchButton; // @synthesize cameraSwitchButton=_cameraSwitchButton;
@property(retain, nonatomic) MMLiveCameraOperationItem *mirrorItem; // @synthesize mirrorItem=_mirrorItem;
@property(retain, nonatomic) MMLiveCameraOperationItem *switchCameraItem; // @synthesize switchCameraItem=_switchCameraItem;
@property(retain, nonatomic) NSArray *operationItems; // @synthesize operationItems=_operationItems;
@property(nonatomic) unsigned long long nextStateAfterClose; // @synthesize nextStateAfterClose=_nextStateAfterClose;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool disableSwitchToAudioMode; // @synthesize disableSwitchToAudioMode=_disableSwitchToAudioMode;
@property(nonatomic) __weak id <MMLiveCameraOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)closeWithNextState:(unsigned long long)arg1;
- (_Bool)audioOnlyModeAvailable;
- (void)updateForCameraEnabled:(_Bool)arg1;
- (void)initializeComponents;
- (_Bool)cameraEnabled;
- (id)liveTask;
- (void)updateSwitchCameraItemDisabled:(_Bool)arg1;
- (void)updateMirrorItemStateAndReloadCell:(_Bool)arg1;
- (void)handleChangeAudioOnlyBackgroundItemAction;
- (void)delayResetSwitchCameraItemDisabled;
- (void)updateItemsAfterSwitchCameraFinished;
- (void)handleSwitchCameraItemAction;
- (void)handleMirrorItemAction;
- (void)handleStateTransitionAction:(unsigned long long)arg1 expectedCameraState:(_Bool)arg2;
- (void)updateOperationItemsForCameraState:(_Bool)arg1;
- (id)getBackgroundRedDotPath;
- (id)getSwitchCamRedDotPath;
- (id)getMirrorRedDotPath;
- (id)getGestureRedDotPath;
- (id)getVisionEffectsRedDotPath;
- (id)getDecorationRedDotPath;
- (id)getFilterRedDotPath;
- (id)getMakeUpRedDotPath;
- (id)getBeautyRedDotPath;
- (void)checkCurrentRedDotState:(_Bool)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onCloseButtonTapped;
- (void)onCameraSwitchButtonTapped;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillAppear;
- (void)layoutSubviews;
- (void)closePanelDirectly;
- (void)showPanel;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 redDotQueryBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

