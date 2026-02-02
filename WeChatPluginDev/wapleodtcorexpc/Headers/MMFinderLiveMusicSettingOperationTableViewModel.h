//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveMusicDataItem, MMFinderLiveMusicRelatedSettingTableFooterView, NSMutableArray, NSMutableDictionary, NSString, UITableView, WCTimeLineFooterView;
@protocol MMFinderLiveMusicSettingOperationTableDataDelegate;

@interface MMFinderLiveMusicSettingOperationTableViewModel : NSObject
{
    _Bool _isInEditingMode;
    _Bool _hasMusicData;
    UITableView *_tableView;
    WCTimeLineFooterView *_footerView;
    MMFinderLiveMusicRelatedSettingTableFooterView *_noDataFooterView;
    NSMutableArray *_briefMusicInfosCopy;
    id <MMFinderLiveMusicSettingOperationTableDataDelegate> _dataDelegate;
    NSMutableArray *_musicDataArray;
    NSMutableArray *_musicDataCopyArray;
    NSMutableArray *_selectedMusicDataItemArray;
    MMFinderLiveMusicDataItem *_currentPlayingMusicItem;
    NSMutableDictionary *_playFailedMusicDataDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *playFailedMusicDataDict; // @synthesize playFailedMusicDataDict=_playFailedMusicDataDict;
@property(retain, nonatomic) MMFinderLiveMusicDataItem *currentPlayingMusicItem; // @synthesize currentPlayingMusicItem=_currentPlayingMusicItem;
@property(retain, nonatomic) NSMutableArray *selectedMusicDataItemArray; // @synthesize selectedMusicDataItemArray=_selectedMusicDataItemArray;
@property(retain, nonatomic) NSMutableArray *musicDataCopyArray; // @synthesize musicDataCopyArray=_musicDataCopyArray;
@property(retain, nonatomic) NSMutableArray *musicDataArray; // @synthesize musicDataArray=_musicDataArray;
@property(nonatomic) __weak id <MMFinderLiveMusicSettingOperationTableDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(retain, nonatomic) NSMutableArray *briefMusicInfosCopy; // @synthesize briefMusicInfosCopy=_briefMusicInfosCopy;
@property(nonatomic) _Bool hasMusicData; // @synthesize hasMusicData=_hasMusicData;
@property(nonatomic) _Bool isInEditingMode; // @synthesize isInEditingMode=_isInEditingMode;
@property(retain, nonatomic) MMFinderLiveMusicRelatedSettingTableFooterView *noDataFooterView; // @synthesize noDataFooterView=_noDataFooterView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (id)getDataItemWithSong:(id)arg1;
- (void)scrollToMusicDataItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isMusicDataItemHasFailed:(id)arg1;
- (void)clearAllPlayFailedMusicDataItem;
- (void)addPlayFailedMusicDataItem:(id)arg1;
- (id)getCurrentMusicDataArray;
- (id)getPlayingMusicItemAfterEditing;
- (void)updateCurrentMusicItemInEditing:(id)arg1;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)updatePlayState:(unsigned long long)arg1 musicDataItem:(id)arg2;
- (id)getNextPlayMusicItem:(id)arg1;
- (unsigned long long)musicDataCount;
- (void)insertMusicData:(id)arg1;
- (void)appendMusicData:(id)arg1;
- (void)endEditMode:(_Bool)arg1;
- (void)beginEditMode;
- (void)onFinderLiveMusicDataDelete;
- (void)onFinderLiveMusicDataAllSelected:(_Bool)arg1;
- (void)onMusicTableViewCellDidSelect:(id)arg1;
- (_Bool)isInMultiSelectEditingMode;
- (id)getNextPlayMusicItemBeforeDataSourceDeleted:(id)arg1;
- (void)updateCurrentPlayingItemBeforeDataSourceDeleted:(id)arg1;
- (void)notifyTableAllSelectStateChanged;
- (void)notifyTableDataDeleteDidSelectChanged;
- (void)updateFooterStateForDataSourceChanged;
- (void)updateStateForDataSourceChanged;
- (void)clearAllEditedData;
- (void)synchronizeCurrentSongIdArray;
- (void)prepareCurrentSongIdArray;
- (void)recoverMusicDataItemArray;
- (void)makeCopyForCurrentMusicDataItemArray;
- (_Bool)checkIsEnableToMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)handleSelectCellForMultiSelect:(id)arg1;
- (void)handleMakeCellForMultiSelect:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

