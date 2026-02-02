//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveSongItem, MMFinderLiveSongManageTableViewCell, MMTableView, NSMutableArray, NSString, WCTimeLineFooterView;
@protocol MMFinderLiveSongSettingOperationTableDataDelegate;

@interface MMFinderLiveSongSettingOperationTableViewModel : NSObject
{
    _Bool _singSongEnabled;
    _Bool _isInLive;
    _Bool _isAudience;
    _Bool _isInEditingMode;
    _Bool _hasMusicData;
    unsigned int _indexOffset;
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    id <MMFinderLiveSongSettingOperationTableDataDelegate> _dataDelegate;
    NSMutableArray *_musicDataArray;
    NSMutableArray *_musicDataCopyArray;
    NSMutableArray *_selectedMusicDataItemArray;
    MMFinderLiveSongItem *_preSingingSongItem;
    MMFinderLiveSongManageTableViewCell *_cellToReset;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveSongManageTableViewCell *cellToReset; // @synthesize cellToReset=_cellToReset;
@property(nonatomic) unsigned int indexOffset; // @synthesize indexOffset=_indexOffset;
@property(retain, nonatomic) MMFinderLiveSongItem *preSingingSongItem; // @synthesize preSingingSongItem=_preSingingSongItem;
@property(retain, nonatomic) NSMutableArray *selectedMusicDataItemArray; // @synthesize selectedMusicDataItemArray=_selectedMusicDataItemArray;
@property(retain, nonatomic) NSMutableArray *musicDataCopyArray; // @synthesize musicDataCopyArray=_musicDataCopyArray;
@property(retain, nonatomic) NSMutableArray *musicDataArray; // @synthesize musicDataArray=_musicDataArray;
@property(nonatomic) __weak id <MMFinderLiveSongSettingOperationTableDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) _Bool hasMusicData; // @synthesize hasMusicData=_hasMusicData;
@property(nonatomic) _Bool isInEditingMode; // @synthesize isInEditingMode=_isInEditingMode;
@property(nonatomic) __weak WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(nonatomic) _Bool isInLive; // @synthesize isInLive=_isInLive;
- (void)checkIsSingingSongChange:(_Bool)arg1;
- (void)scrollToMusicDataItem:(id)arg1 animated:(_Bool)arg2;
- (id)getSongItem:(id)arg1;
- (unsigned long long)musicDataCount;
- (void)insertMusicData:(id)arg1;
- (void)resetMusicData:(id)arg1;
- (void)appendMusicData:(id)arg1;
- (void)endEditMode:(_Bool)arg1;
- (void)beginEditMode;
- (void)onFinderLiveMusicDataDelete;
- (void)onFinderLiveMusicDataAllSelected:(_Bool)arg1;
- (void)onSongTableViewCellNeedResetWhenReceiveNewTouches:(id)arg1;
- (void)onSongTableViewCellDidFinishOrder:(id)arg1;
- (void)onSongTableViewCellDidSelect:(id)arg1;
- (_Bool)isInMultiSelectEditingMode;
@property(nonatomic) _Bool singSongEnabled; // @synthesize singSongEnabled=_singSongEnabled;
- (id)getSingingSongItem:(id)arg1;
- (void)updateSingingSongItem:(id)arg1;
- (void)clearAllEditedData;
- (void)synchronizeCurrentSongIdArray;
- (void)recoverMusicDataItemArray;
- (void)makeCopyForCurrentMusicDataItemArray;
- (void)notifyTableAllSelectStateChanged;
- (void)notifyTableDataDeleteDidSelectChanged;
- (_Bool)checkIsEnableToMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)updateStateForDataSourceChanged;
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
- (double)getCellHeight;
- (double)getSeparatorLeftInset;
- (Class)getCellClass;
- (id)getCellIdentifer;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)mmTableView:(id)arg1 shouldPassHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (_Bool)shouldAdaptToDarkLight;
- (void)installTableView;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

