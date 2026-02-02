//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIScrollView, ZZFLEXAngelIndexPathChainModel, ZZFLEXAngelViewBatchEditChainModel, ZZFLEXAngelViewEditChainModel;

@interface ZZFLEXAngel : NSObject
{
    NSMutableArray *_data;
    UIScrollView *_hostView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIScrollView *hostView; // @synthesize hostView=_hostView;
@property(readonly, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) ZZFLEXAngelIndexPathChainModel *indexPath;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *dataModelArray;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *dataModel;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *hasCell;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *updateCells;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *updateCell;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *deleteCells;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *deleteCell;
- (id)_insertCellsWithViewClass:(Class)arg1 xib:(_Bool)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertXibCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertCells;
- (id)_insertCellWithViewClass:(Class)arg1 xib:(_Bool)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertXibCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType addSeperatorCell;
- (id)_addCellsWithViewClass:(Class)arg1 xib:(_Bool)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType addXibCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType addCells;
- (id)_addCellWithViewClass:(Class)arg1 xib:(_Bool)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType addXibCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType addCell;
- (id)viewChainViewModelWithViewModel:(id)arg1 type:(long long)arg2 xib:(_Bool)arg3;
- (id)_setFotterWithViewClass:(Class)arg1 xib:(_Bool)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType setXibFooter;
@property(readonly, copy, nonatomic) CDUnknownBlockType setFooter;
- (id)_setHeaderWithViewClass:(Class)arg1 xib:(_Bool)arg2;
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
- (id)init;
- (id)initWithHostView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_headerFooterViewForTableView:(id)arg1 viewModel:(id)arg2 section:(long long)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
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
- (id)viewModelAtIndexPath:(id)arg1;
- (id)sectionModelForTag:(long long)arg1;
- (id)sectionModelAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

