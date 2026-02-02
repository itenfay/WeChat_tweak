//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMUIButton, NSIndexPath, NSMutableArray, NSMutableSet, NSString, UICollectionView, UICollectionViewFlowLayout, UIImageView, UIScreenEdgePanGestureRecognizer, UIView, WAAppDismissAnimateTransition, WCStoryDismissInteractiveTransition, WCStoryMultiContactPreviewCell, WCStoryPreivewPageCollectionController, WCStoryPreviewContactIndicatorView, WCStoryPreviewReportObj;

@interface WCStoryMultiContactPreviewViewController
{
    UIView *m_contentView;
    UICollectionView *m_collectionView;
    UICollectionViewFlowLayout *m_collectionLayout;
    WCStoryPreviewContactIndicatorView *m_contactIndicator;
    MMUIButton *m_closeBtn;
    UIImageView *m_topShadowView;
    NSIndexPath *m_startIndexPath;
    WCStoryPreivewPageCollectionController *m_playingPageCollectionController;
    UIScreenEdgePanGestureRecognizer *m_popBackInteractivePopGesture;
    WCStoryDismissInteractiveTransition *m_dimissInteractiveTransition;
    WAAppDismissAnimateTransition *m_dismissAnimateTransition;
    _Bool m_handingDragDownToClose;
    _Bool m_needShowScrollUpTips;
    NSMutableSet *m_dataFetchingUnitIds;
    NSMutableSet *m_dataHasFetchedUnitIds;
    _Bool _bAddTopShadowView;
    WCStoryPreviewReportObj *_previewReportObj;
    CContact *_chatRoomContact;
    NSMutableArray *_dataUnitArray;
    unsigned long long _previewScene;
    unsigned long long _statusChangePreviewType;
    MMUIButton *_moreActionBtn;
    WCStoryMultiContactPreviewCell *_currentPlayCell;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCStoryMultiContactPreviewCell *currentPlayCell; // @synthesize currentPlayCell=_currentPlayCell;
@property(nonatomic) __weak MMUIButton *moreActionBtn; // @synthesize moreActionBtn=_moreActionBtn;
@property(nonatomic) unsigned long long statusChangePreviewType; // @synthesize statusChangePreviewType=_statusChangePreviewType;
@property(nonatomic) unsigned long long previewScene; // @synthesize previewScene=_previewScene;
@property(nonatomic) _Bool bAddTopShadowView; // @synthesize bAddTopShadowView=_bAddTopShadowView;
@property(retain, nonatomic) NSMutableArray *dataUnitArray; // @synthesize dataUnitArray=_dataUnitArray;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
@property(retain, nonatomic) WCStoryPreviewReportObj *previewReportObj; // @synthesize previewReportObj=_previewReportObj;
- (void)clickMoreAction;
- (void)onStoryDeleteSuccessWithDataTid:(id)arg1;
- (void)storyContactIndicatorView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataUnitInStoryContactIndicatorView:(id)arg1;
- (id)storyContactIndicatorView:(id)arg1 dataUnitForIndex:(unsigned long long)arg2;
- (void)reportChangeFeaturedOrHiddenStatusWithTid:(id)arg1 videoType:(unsigned long long)arg2;
- (void)onMultiContactCellShouldHideUIElement:(_Bool)arg1;
- (void)onStoryMultiContactCellCommentListShow:(_Bool)arg1;
- (void)onLongPressStoryMultiContactCellToHideDataItem:(id)arg1;
- (void)onLongPressStoryMultiContactCellToDelete:(id)arg1;
- (void)onStoryMultiContactCellChangePage:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (void)addPopBackInteractivePopGesture;
- (void)showScrollUpTips;
- (void)didDragScrollView:(id)arg1;
- (void)reloadSingleIndex:(id)arg1;
- (void)softReloadSingeIndex:(id)arg1 dataUnit:(id)arg2;
- (void)onDataUnitUpdatedWithIdentifier:(id)arg1 logIdentifier:(id)arg2 retCode:(int)arg3 dataItems:(id)arg4;
- (void)fetchHistoryDataUnitDetail:(id)arg1;
- (void)fetchNewestStoryDataUnit:(id)arg1;
- (_Bool)hasFetchedDataForDataUnit:(id)arg1;
- (void)setDataUnitHasFetchedData:(id)arg1;
- (_Bool)isFetchingDataForDataUnit:(id)arg1;
- (void)clearDataUnitFetchingData:(id)arg1;
- (void)setDataUnitFetchingData:(id)arg1;
- (void)preloadDataWithCurrentIndex:(unsigned long long)arg1;
- (void)changeToPlayingPreviewCell:(id)arg1;
- (void)tilePages;
- (void)reloadCollectionView;
- (void)showTipsWithText:(id)arg1;
- (void)showScrollUpTipsViewWithBottomHeight:(double)arg1;
- (void)configContactIndicator;
- (void)scrollToIndexPath:(id)arg1;
- (void)scrollToIndex:(unsigned long long)arg1;
- (void)configCollectionView;
- (void)configTopShadowView;
- (void)configTopBtn;
- (_Bool)DismissMyselfAnimated:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

