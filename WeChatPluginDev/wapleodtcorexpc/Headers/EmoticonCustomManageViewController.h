//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCustomCreateLogic, EmoticonCustomManageAddLogic, EmoticonCustomManageCollectionLayout, EmoticonCustomManageCollectionView, EmoticonCustomManageDataLogic, EmoticonCustomManagePopInteractiveTransition, EmoticonCustomManageSwipeSelectGestureRecognizer, EmoticonCustomSortBGView, EmoticonCustomSortInsertBrickView, EmoticonLoadMoreFooterView, NSString, UIButton, UILabel, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIView;

@interface EmoticonCustomManageViewController
{
    _Bool _isConflictViewClosed;
    _Bool _shouldShowConflictView;
    _Bool _needResetBrickView;
    unsigned int _localEmoticonLimit;
    EmoticonCustomManageCollectionView *_collectionView;
    EmoticonCustomManageCollectionLayout *_collectionLayout;
    EmoticonCustomManageDataLogic *_dataLogic;
    UIView *_bottomBar;
    UIButton *_deleteButton;
    UIButton *_moveButton;
    UIButton *_cancelMoveButton;
    UILabel *_bottomLabel;
    EmoticonCustomSortInsertBrickView *_insertBrickView;
    EmoticonCustomSortInsertBrickView *_insertBrickPlaceHolderView;
    EmoticonCustomSortBGView *_moveBGView;
    UIView *_bottomBarLineView;
    EmoticonLoadMoreFooterView *_footerView;
    double _gridViewWidth;
    unsigned long long _manageStatus;
    EmoticonCustomManageAddLogic *_addEmoticonLogic;
    unsigned long long _type;
    UIPanGestureRecognizer *_moveGesture;
    EmoticonCustomManageSwipeSelectGestureRecognizer *_multiSelectGesture;
    UIScreenEdgePanGestureRecognizer *_dismissModalGesture;
    EmoticonCustomManagePopInteractiveTransition *_popTransition;
    unsigned long long _insertPositionForReport;
    EmoticonCustomCreateLogic *_customCreateLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonCustomCreateLogic *customCreateLogic; // @synthesize customCreateLogic=_customCreateLogic;
@property(nonatomic) unsigned long long insertPositionForReport; // @synthesize insertPositionForReport=_insertPositionForReport;
@property(nonatomic) _Bool needResetBrickView; // @synthesize needResetBrickView=_needResetBrickView;
@property(retain, nonatomic) EmoticonCustomManagePopInteractiveTransition *popTransition; // @synthesize popTransition=_popTransition;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *dismissModalGesture; // @synthesize dismissModalGesture=_dismissModalGesture;
@property(retain, nonatomic) EmoticonCustomManageSwipeSelectGestureRecognizer *multiSelectGesture; // @synthesize multiSelectGesture=_multiSelectGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *moveGesture; // @synthesize moveGesture=_moveGesture;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic; // @synthesize addEmoticonLogic=_addEmoticonLogic;
@property(nonatomic) unsigned int localEmoticonLimit; // @synthesize localEmoticonLimit=_localEmoticonLimit;
@property(nonatomic) _Bool shouldShowConflictView; // @synthesize shouldShowConflictView=_shouldShowConflictView;
@property(nonatomic) _Bool isConflictViewClosed; // @synthesize isConflictViewClosed=_isConflictViewClosed;
@property(nonatomic) unsigned long long manageStatus; // @synthesize manageStatus=_manageStatus;
@property(nonatomic) double gridViewWidth; // @synthesize gridViewWidth=_gridViewWidth;
@property(retain, nonatomic) EmoticonLoadMoreFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *bottomBarLineView; // @synthesize bottomBarLineView=_bottomBarLineView;
@property(retain, nonatomic) EmoticonCustomSortBGView *moveBGView; // @synthesize moveBGView=_moveBGView;
@property(retain, nonatomic) EmoticonCustomSortInsertBrickView *insertBrickPlaceHolderView; // @synthesize insertBrickPlaceHolderView=_insertBrickPlaceHolderView;
@property(retain, nonatomic) EmoticonCustomSortInsertBrickView *insertBrickView; // @synthesize insertBrickView=_insertBrickView;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIButton *cancelMoveButton; // @synthesize cancelMoveButton=_cancelMoveButton;
@property(retain, nonatomic) UIButton *moveButton; // @synthesize moveButton=_moveButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) EmoticonCustomManageDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
@property(retain, nonatomic) EmoticonCustomManageCollectionLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) EmoticonCustomManageCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (unsigned long long)logid;
- (void)registerYReportSdk;
- (_Bool)isCurrentManageStatusCommonSelect;
- (_Bool)isCurrentManangeStatusNoneEdit;
- (_Bool)isCurrentManageStatusAllowRefresh;
- (void)onLoadDone;
- (void)onLoadMore;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)checkIfIsOnEmoticonCustomManageViewController:(_Bool *)arg1;
- (void)onCustomEmoticonConflictViewClickClose;
- (void)onEmoticonBackUpMgrRecoverPartSyncFinishedForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverNetworkChangeToUnreachableForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverFailedForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrSyncOperateForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverCompleteForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverOneEmoticon;
- (void)onStickyBackupEmoticonFailed:(id)arg1;
- (void)onStickyBackupEmoticonOK:(id)arg1;
- (void)onMoveBackupEmoticonFailed:(id)arg1 isSticky:(_Bool)arg2;
- (void)onMoveBackupEmoticonFailed:(id)arg1;
- (void)onMoveBackupEmoticonOK:(id)arg1 isSticky:(_Bool)arg2;
- (void)onMoveBackupEmoticonOK:(id)arg1;
- (void)onDeleteBackupEmoticonFailed:(id)arg1;
- (void)onDeleteBackupEmoticonOK:(id)arg1;
- (void)onAddEmoticonCommonFail;
- (void)onEmoticonBackUpMgrRecoverNotifyProgressForType:(unsigned int)arg1;
- (void)OnUpdateEmoticonListFor:(unsigned long long)arg1;
- (void)onEmoticonCustomManageViewTaped:(id)arg1 andView:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)recoverMgr;
- (void)onMoveEmoticonFromServer:(id)arg1 insertPositionMd5:(id)arg2;
- (void)onStickyEmoticonFromServer:(id)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)onPopBackInteractiveTransitionDidEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)doTaptic:(long long)arg1;
- (void)onMoveGestureSucceed;
- (void)onMoveGestureFailed;
- (void)cleanInsert;
- (_Bool)checkCollectionAutoScrollForMultiSelect:(double)arg1;
- (_Bool)checkCollectionAutoScrollForMove;
- (_Bool)realDoInsertAtIndexPath:(id)arg1;
- (_Bool)checkCollectionInsert;
- (void)checkCollectionInsertPlaceHolder;
- (void)onMoveGesture:(id)arg1;
- (void)onMoveCanceled;
- (void)onMoveTouched;
- (void)updateCellSelectStatusForMultiSelect;
- (void)checkMultiSelectForScroll;
- (void)onMultiSelectGesture:(id)arg1;
- (void)deleteEmoticonFromServer;
- (void)updateBottomDeleteButton;
- (void)onDeleteEmoticonConfirm:(id)arg1;
- (id)getViewController;
- (void)onAddCustomEmoticon;
- (void)onEndEdit;
- (void)onClickEdit;
- (void)updateConflictView;
- (void)updateLoadingStatus;
- (void)initData;
- (void)OnCancelModalView:(id)arg1;
- (void)BackButtonDown:(id)arg1;
- (double)BottomBarHeight;
- (double)genGridViewWidth;
- (id)genCollectionLayout;
- (void)onDismissGesture:(id)arg1;
- (void)initDismissGesture;
- (void)initMultiSelectGestures;
- (void)initCollectionView;
- (void)initNavigationItem;
- (void)initBottomBarView;
- (void)initMoveBrickView;
- (void)initMoveBGView;
- (void)initBackground;
- (void)initView;
- (_Bool)shouldInteractiveDismiss;
- (void)updateColelctionLayout;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

