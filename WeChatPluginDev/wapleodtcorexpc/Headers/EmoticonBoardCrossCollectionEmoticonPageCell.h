//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardCrossCollectionEmoticonHeaderModel, EmoticonBoardCrossCollectionEmoticonHeaderView, EmoticonLoadMoreFooterView, MMUIActivityIndicatorView, NSArray, NSIndexPath, NSMutableArray, NSString, UILongPressGestureRecognizer, UIView;
@protocol EmoticonBoardCrossCollectionEmoticonPageDelegate;

@interface EmoticonBoardCrossCollectionEmoticonPageCell
{
    _Bool _hasDescription;
    NSArray *_emoticonList;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSIndexPath *_selectedIndexPath;
    EmoticonBoardCrossCollectionEmoticonHeaderModel *_headerViewModel;
    EmoticonBoardCrossCollectionEmoticonHeaderModel *_headerRecentUseModel;
    EmoticonBoardCrossCollectionEmoticonHeaderView *_headerView;
    EmoticonLoadMoreFooterView *_footerView;
    UIView *_packSyncTip;
    MMUIActivityIndicatorView *_packSyncIndicator;
    NSMutableArray *_recnetUseWraps;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *recnetUseWraps; // @synthesize recnetUseWraps=_recnetUseWraps;
@property(retain, nonatomic) MMUIActivityIndicatorView *packSyncIndicator; // @synthesize packSyncIndicator=_packSyncIndicator;
@property(retain, nonatomic) UIView *packSyncTip; // @synthesize packSyncTip=_packSyncTip;
@property(retain, nonatomic) EmoticonLoadMoreFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak EmoticonBoardCrossCollectionEmoticonHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) EmoticonBoardCrossCollectionEmoticonHeaderModel *headerRecentUseModel; // @synthesize headerRecentUseModel=_headerRecentUseModel;
@property(retain, nonatomic) EmoticonBoardCrossCollectionEmoticonHeaderModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) __weak NSArray *emoticonList; // @synthesize emoticonList=_emoticonList;
@property(nonatomic) _Bool hasDescription; // @synthesize hasDescription=_hasDescription;
- (void)onLoadDone;
- (void)onLoadMore;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onDesignerPersonalInfoUpdated:(id)arg1;
- (void)onDesigner:(id)arg1 changReddotStatus:(_Bool)arg2 newReddotPids:(id)arg3;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)reloadHeader;
- (void)configHeaderModelUpdateLogic;
- (void)configHeaderModel;
- (void)bindHeaderView:(id)arg1;
- (void)configHeaderRecentUseModel;
- (void)bindRecentUseHeaderView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)adjustPreviewComponetColorIfNeed:(id)arg1 emoticonWrap:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)needEnableLoadMore;
- (_Bool)isCustomOrCameraPid:(id)arg1;
- (_Bool)isCameraPid:(id)arg1;
- (_Bool)isCustomPid:(id)arg1;
- (void)onLongPressToPreview:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (unsigned long long)maximumNumberOfItemsInRow;
- (void)refreshWithLoadDone:(_Bool)arg1;
- (void)refreshEmoticonForPid:(id)arg1;
- (void)initPackSyncTipWithFrame:(struct CGRect)arg1;
- (void)configGestureRecognizer;
- (void)configCollectionViewWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <EmoticonBoardCrossCollectionEmoticonPageDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

