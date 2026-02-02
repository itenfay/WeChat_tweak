//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MiniTaskCollectioViewMaskLayer, MiniTaskCollectionViewLayout, MiniTaskDurantionCounter, MiniTaskDynamicBgView, MiniTaskPanGestureHandler, MiniTaskViewControllerContext, MultiTaskPageActionInfo, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UICollectionView, UIImageView, UIView, WCScheduleLogicController;

@interface MiniTaskViewController
{
    _Bool _bNeedReportVisibleCellsDisplayAction;
    _Bool _isCollectionUpdateAnimating;
    _Bool _bHasAppearAsTopVC;
    MultiTaskPageActionInfo *_pageActionInfo;
    UIView *_collectionContainerView;
    UICollectionView *_collectionView;
    MMUILabel *_titleLabel;
    MiniTaskCollectionViewLayout *_collectionViewLayout;
    NSMutableArray *_sectionModels;
    NSMutableSet *_clickedSchedules;
    MiniTaskCollectioViewMaskLayer *_maskLayer;
    NSMutableSet *_exposedTaskKey;
    NSMutableDictionary *_dicLastExposeTimeStamp;
    MiniTaskDurantionCounter *_gesEduDurantionCounter;
    WCScheduleLogicController *_scheduleRemindLogic;
    MiniTaskViewControllerContext *_context;
    MiniTaskDynamicBgView *_backgroundView;
    UIImageView *_fakeMainFrameSnapshotView;
    MMUIButton *_fakeSnapshotMaskView;
    UIView *_fakeSnapshotShadowView;
    MMUIButton *_exitButton;
    MMUILabel *_gestureExitEducationLabel;
    MiniTaskPanGestureHandler *_leftPanPopGestureHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniTaskPanGestureHandler *leftPanPopGestureHandler; // @synthesize leftPanPopGestureHandler=_leftPanPopGestureHandler;
@property(retain, nonatomic) MMUILabel *gestureExitEducationLabel; // @synthesize gestureExitEducationLabel=_gestureExitEducationLabel;
@property(retain, nonatomic) MMUIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) UIView *fakeSnapshotShadowView; // @synthesize fakeSnapshotShadowView=_fakeSnapshotShadowView;
@property(retain, nonatomic) MMUIButton *fakeSnapshotMaskView; // @synthesize fakeSnapshotMaskView=_fakeSnapshotMaskView;
@property(retain, nonatomic) UIImageView *fakeMainFrameSnapshotView; // @synthesize fakeMainFrameSnapshotView=_fakeMainFrameSnapshotView;
@property(retain, nonatomic) MiniTaskDynamicBgView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MiniTaskViewControllerContext *context; // @synthesize context=_context;
@property(retain, nonatomic) WCScheduleLogicController *scheduleRemindLogic; // @synthesize scheduleRemindLogic=_scheduleRemindLogic;
@property(nonatomic) _Bool bHasAppearAsTopVC; // @synthesize bHasAppearAsTopVC=_bHasAppearAsTopVC;
@property(retain, nonatomic) MiniTaskDurantionCounter *gesEduDurantionCounter; // @synthesize gesEduDurantionCounter=_gesEduDurantionCounter;
@property(nonatomic) _Bool isCollectionUpdateAnimating; // @synthesize isCollectionUpdateAnimating=_isCollectionUpdateAnimating;
@property(nonatomic) _Bool bNeedReportVisibleCellsDisplayAction; // @synthesize bNeedReportVisibleCellsDisplayAction=_bNeedReportVisibleCellsDisplayAction;
@property(retain, nonatomic) NSMutableDictionary *dicLastExposeTimeStamp; // @synthesize dicLastExposeTimeStamp=_dicLastExposeTimeStamp;
@property(retain, nonatomic) NSMutableSet *exposedTaskKey; // @synthesize exposedTaskKey=_exposedTaskKey;
@property(retain, nonatomic) MiniTaskCollectioViewMaskLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) NSMutableSet *clickedSchedules; // @synthesize clickedSchedules=_clickedSchedules;
@property(retain, nonatomic) NSMutableArray *sectionModels; // @synthesize sectionModels=_sectionModels;
@property(retain, nonatomic) MiniTaskCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(retain, nonatomic) MultiTaskPageActionInfo *pageActionInfo; // @synthesize pageActionInfo=_pageActionInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reportBatchAction:(unsigned long long)arg1;
- (void)reportVisibleCellsExposed;
- (void)reportItemActionWithTaskData:(id)arg1 actionType:(unsigned long long)arg2;
- (void)reportWhenExitWithLaunchedTaskContext:(id)arg1;
- (void)reportWhenExit;
- (void)tryCallMinimizeTaskDataExposed:(id)arg1;
- (void)callVisibleMinimizeTaskDatasExposed;
- (_Bool)isSectionEditing:(long long)arg1;
- (void)updateSectionEditStatus;
- (void)resetScheduleStatus;
- (void)cancelEditing;
- (void)reloadSection:(long long)arg1;
@property(readonly, nonatomic) NSMutableArray *arrOutdateCellViewModel;
@property(readonly, nonatomic) NSMutableArray *arrCellViewModel;
@property(readonly, nonatomic) NSMutableArray *arrScheduleCellViewModel;
- (void)updateOutdateViewModels;
- (id)viewModelAtIndexPath:(id)arg1;
- (void)replaceViewModel:(id)arg1 atIndexPath:(id)arg2;
- (void)removeViewModelAtIndexPath:(id)arg1;
- (id)removeLastTaskDatas:(long long)arg1;
- (id)insertTaskDataViewModel:(id)arg1;
- (void)removeTaskDataAtIndexPath:(id)arg1;
- (id)indexPathForScheduleItem:(id)arg1;
- (id)indexPathForTaskData:(id)arg1;
- (double)collectionViewTop;
- (double)titleCenterY;
- (void)onWCScheduleSelectDatePickerView;
- (void)onWCScheduleItem:(id)arg1 SetSuccess:(_Bool)arg2 ErrMsg:(id)arg3;
- (void)onScheduleModifyFail:(id)arg1 errTips:(id)arg2;
- (void)onScheduleListUpdate;
- (void)onScheduleItemRemindChange:(id)arg1;
- (void)onScheduleRemoveItem:(id)arg1;
- (void)onScheduleAppendItem:(id)arg1;
- (void)updateScheduleFolding;
- (void)reloadScheduleItems;
- (void)launchScheduleItemWithCell:(id)arg1;
- (void)onTaskSnapShotUpdate:(id)arg1 snapshot:(id)arg2;
- (void)onRemoveMinimizedTaskData:(id)arg1;
- (void)onUpdateMinimizedTaskData:(id)arg1;
- (void)onAppendMinimizedTaskData:(id)arg1;
- (void)onMinimizedTaskDataListChanged;
- (id)mergetMinimizeTaskDataInLocalAndAff:(id)arg1;
- (double)collectionViewOffsetY;
- (unsigned long long)currentCellCount;
- (struct CGSize)snapshotImagePreferredSize;
- (void)onMiniTaskCollectionCellRemoveRemind:(id)arg1;
- (void)onMiniTaskCollectionCellAddRemind:(id)arg1;
- (void)onMiniTaskCollectionCellFavorite:(id)arg1 isFromMenu:(_Bool)arg2;
- (void)onMiniTaskCollectionCellDelete:(id)arg1 isFromMenu:(_Bool)arg2;
- (void)onSectionLoadMore:(long long)arg1;
- (void)onMiniTaskEndEdit:(long long)arg1;
- (void)onMiniTaskBeginEdit:(long long)arg1;
- (void)onMiniTaskDeleteAll:(long long)arg1;
- (void)scrollToMakeFirstCellFull;
- (void)updateVisibleCellsFrontViewWithContentOffsetY:(double)arg1;
- (void)updateViewWhenDataListChanged;
- (void)checkAddMiniTaskBackFromNavigationController:(id)arg1;
- (CDUnknownBlockType)createDimissEndCallback;
- (CDUnknownBlockType)createDimisssBeginCallback;
- (CDUnknownBlockType)createPresentEndCallbackWithTaskData:(id)arg1;
- (CDUnknownBlockType)cellFrameForDataTaskGetter;
- (void)launchTaskWithCell:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)shouldNavigationBarAccessibilityHidden;
- (_Bool)shouldInteractivePop;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (_Bool)shouldShowSectionHeader:(long long)arg1;
- (_Bool)isSectionCanLoadMore:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)onExitButtonClicked;
- (void)onFakeSnapshotClicked;
- (void)updateTaskTransitionContext:(id)arg1;
- (void)updateDefaultTaskTransitionContext:(id)arg1;
- (id)getCurrentContextId;
- (void)setupFakeSnapshot;
- (void)setupBackgroundView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onMemoryWarning;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)unregisterAppActiveStateObsever;
- (void)registerAppActiveStateObsever;
- (_Bool)canRightEdgeInteractiveDismiss;
- (void)initEducationLabel;
- (void)initExitButton;
- (void)initTitleLabel;
- (void)setupMaskLayer;
- (void)initCollectionView;
- (void)initNavigationItems;
- (void)initMainUI;
- (void)reloadDataWithArrTaskData:(id)arg1;
- (void)initData;
- (void)dealloc;
- (void)onEnterWithNewContext:(id)arg1;
- (id)init;
- (void)onTransitionEnd:(id)arg1 isComplete:(_Bool)arg2 isInteracting:(_Bool)arg3;
- (void)onMiniInteractiveTransitionChangedOfPanGesture:(id)arg1 progress:(double)arg2;
- (void)onMiniInteractiveTransitionDidEndOfPanGesture:(id)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)shouldMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (void)setupLeftPanGestureHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

