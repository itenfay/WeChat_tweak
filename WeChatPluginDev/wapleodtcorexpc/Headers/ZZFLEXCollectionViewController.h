//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UICollectionView, UIScrollView, ZZFLEXAngel, ZZFLEXAngelIndexPathChainModel, ZZFLEXAngelViewBatchEditChainModel, ZZFLEXAngelViewEditChainModel;

@interface ZZFLEXCollectionViewController
{
    _Bool _sectionHeadersPinToVisibleBounds;
    _Bool _sectionFootersPinToVisibleBounds;
    UICollectionView *_collectionView;
    ZZFLEXAngel *_angel;
    long long _scrollDirection;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sectionFootersPinToVisibleBounds; // @synthesize sectionFootersPinToVisibleBounds=_sectionFootersPinToVisibleBounds;
@property(nonatomic) _Bool sectionHeadersPinToVisibleBounds; // @synthesize sectionHeadersPinToVisibleBounds=_sectionHeadersPinToVisibleBounds;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(readonly, nonatomic) ZZFLEXAngel *angel; // @synthesize angel=_angel;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 didSectionFooterPinToVisibleBounds:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 didSectionHeaderPinToVisibleBounds:(long long)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 colorForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *data;
@property(readonly, nonatomic) __weak UIScrollView *hostView;
@property(readonly, copy, nonatomic) ZZFLEXAngelIndexPathChainModel *indexPath;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *dataModelArray;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *dataModel;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *hasCell;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *updateCells;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *updateCell;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *deleteCells;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *deleteCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertXibCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertXibCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType addSeperatorCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType addXibCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType addCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType addXibCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType addCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType setXibFooter;
@property(readonly, copy, nonatomic) CDUnknownBlockType setFooter;
@property(readonly, copy, nonatomic) CDUnknownBlockType setXibHeader;
@property(readonly, copy, nonatomic) CDUnknownBlockType setHeader;
@property(readonly, copy, nonatomic) CDUnknownBlockType hasSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType deleteSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType sectionForTag;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType addSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType isEmpty;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateAllCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateAllItems;
@property(readonly, copy, nonatomic) CDUnknownBlockType update;
@property(readonly, copy, nonatomic) CDUnknownBlockType clearAllCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType clearAllItems;
@property(readonly, copy, nonatomic) CDUnknownBlockType clear;
@property(readonly, copy, nonatomic) CDUnknownBlockType reload;
- (void)reloadView;
- (void)dealloc;
- (void)resetCollectionViewWithLayout:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)loadView;
- (id)init;
- (id)cellIndexPathForSectionTag:(long long)arg1 cellTag:(long long)arg2;
- (id)cellIndexPathForCellTag:(long long)arg1;
- (long long)sectionIndexForTag:(long long)arg1;
- (void)scrollToIndexPath:(id)arg1 position:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)scrollToSectionIndex:(long long)arg1 position:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)scrollToCell:(long long)arg1 position:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)scrollToSection:(long long)arg1 cell:(long long)arg2 position:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)scrollToSection:(long long)arg1 position:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)scrollToBottom:(_Bool)arg1;
- (void)scrollToTop:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

