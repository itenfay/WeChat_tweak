//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavMultiMenuTableViewCell, MMUIActivityIndicatorView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, OrderedDictionary, UITableView, UIView;
@protocol FavBaseTableDataControllerDelegate;

@interface FavBaseTableDataController
{
    _Bool m_bAnimating;
    _Bool m_bReadyToLoad;
    FavMultiMenuTableViewCell *m_editingMenuTableCell;
    NSMutableDictionary *m_cellViewCache;
    NSMutableDictionary *m_mutiSelectedCellHeightCache;
    MMUIActivityIndicatorView *m_activityView;
    UIView *m_footerView;
    UIView *m_endLineView;
    NSString *m_cellIdentifier;
    NSMutableArray *m_arrFavDataWrap;
    NSMutableArray *m_arrFavItem;
    OrderedDictionary *m_selectedItemsDict;
    _Bool _hasMoreData;
    _Bool _itemEditable;
    _Bool _multiSelecting;
    _Bool _sortUnuploadedItem;
    _Bool _showDataSize;
    _Bool _showEraseBtn;
    unsigned long long _cellStyle;
    double _searchBarHeight;
    UITableView *_tableView;
    NSString *_highLightContent;
    NSArray *_highLightKeywords;
    unsigned long long _maxSelectedCount;
    id <FavBaseTableDataControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavBaseTableDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxSelectedCount; // @synthesize maxSelectedCount=_maxSelectedCount;
@property(nonatomic) _Bool showEraseBtn; // @synthesize showEraseBtn=_showEraseBtn;
@property(nonatomic) _Bool showDataSize; // @synthesize showDataSize=_showDataSize;
@property(nonatomic) _Bool sortUnuploadedItem; // @synthesize sortUnuploadedItem=_sortUnuploadedItem;
@property(retain, nonatomic) NSArray *highLightKeywords; // @synthesize highLightKeywords=_highLightKeywords;
@property(retain, nonatomic) NSString *highLightContent; // @synthesize highLightContent=_highLightContent;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double searchBarHeight; // @synthesize searchBarHeight=_searchBarHeight;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) _Bool multiSelecting; // @synthesize multiSelecting=_multiSelecting;
@property(nonatomic) _Bool itemEditable; // @synthesize itemEditable=_itemEditable;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
- (_Bool)findFavData:(id)arg1 inDataList:(id)arg2;
- (void)updateItems:(id)arg1;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnCacheWebFinish:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)onRepairUpdateFavItem:(id)arg1;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)onMenuOptionsShowOnCell:(id)arg1;
- (void)onLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)autoScrollForSearchBar:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)modifySelectedDicWith:(id)arg1 selected:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned int)selectedItemButWebPageCount;
- (_Bool)getSelectedStateWith:(long long)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)getCellViewAtIndex:(long long)arg1;
- (id)getCellViewWithCellId:(id)arg1;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)genEraseConfirmIcon;
- (id)genDeleteConfirmIcon:(unsigned long long)arg1;
- (id)genImageOfView:(id)arg1;
- (id)getCircleButtonImage:(id)arg1 coler:(id)arg2;
- (id)getReusableCellForRowAtIndexPath:(id)arg1;
- (void)setFooterViewHidden:(_Bool)arg1;
- (void)updateFooterViewWithMultiSelect:(_Bool)arg1;
- (id)getEndLineView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (unsigned int)getSelectedItemTypeWith:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)getHeightForItem:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)dataWrapAtIndex:(long long)arg1;
- (id)dataAtIndex:(long long)arg1;
- (id)getcellIdWith:(id)arg1 data:(id)arg2;
- (id)cellIdForDataIndex:(long long)arg1;
- (void)clearSelection;
- (void)clearData;
- (void)cleanCache;
- (void)clearCache;
- (_Bool)isDataInArray:(id)arg1;
- (int)indexOfdata:(id)arg1;
- (void)moveFavItem:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 bAnimated:(_Bool)arg4;
- (int)getInsertIndexOfFavItem:(id)arg1;
- (int)getInsertIndexOfFavItem:(id)arg1 withOldIndex:(int)arg2;
- (void)removeDataAtIndex:(int)arg1;
- (void)addFavDataWrapList:(id)arg1;
- (int)getInsertIndexOfFavItemByUsedTimes:(id)arg1;
- (int)getInsertIndexOfFavItemByUpdateTimeForASC:(id)arg1;
- (int)getInsertIndexOfFavItemBySize:(id)arg1;
- (void)addFavItemListByUpdateTimeForASC:(id)arg1;
- (void)addFavItemListByUsedTimes:(id)arg1;
- (void)addFavItemListBySize:(id)arg1;
- (void)addFavItemList:(id)arg1;
- (_Bool)bReadyToLoad;
@property(readonly, nonatomic) NSArray *arrFavDataWrap;
@property(readonly, nonatomic) NSArray *arrFavItem;
- (void)setSelectedItemsDictWith:(id)arg1;
@property(readonly, nonatomic) NSDictionary *selectedItemsDict;
- (void)hideEndline;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

