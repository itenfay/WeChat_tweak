//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveSongItem, MMTableView, NSIndexPath, NSMutableArray, NSMutableSet, NSString;

@interface MMFinderLiveAddNewSongTableViewModel : NSObject
{
    CDUnknownBlockType _updatedCallback;
    NSMutableArray *_songs;
    MMTableView *_tableView;
    MMFinderLiveSongItem *_editingItem;
    MMFinderLiveSongItem *_deletingItem;
    NSIndexPath *_indexPathToActivate;
    NSMutableSet *_existingSongNames;
    NSString *_targetWord;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *targetWord; // @synthesize targetWord=_targetWord;
@property(retain, nonatomic) NSMutableSet *existingSongNames; // @synthesize existingSongNames=_existingSongNames;
@property(retain, nonatomic) NSIndexPath *indexPathToActivate; // @synthesize indexPathToActivate=_indexPathToActivate;
@property(retain, nonatomic) MMFinderLiveSongItem *deletingItem; // @synthesize deletingItem=_deletingItem;
@property(retain, nonatomic) MMFinderLiveSongItem *editingItem; // @synthesize editingItem=_editingItem;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *songs; // @synthesize songs=_songs;
@property(copy, nonatomic) CDUnknownBlockType updatedCallback; // @synthesize updatedCallback=_updatedCallback;
- (void)addNewSong;
- (void)manualAddNewSong;
- (void)notifySongsUpdated;
- (id)editingIndexPath;
- (id)indexPathForItem:(id)arg1;
- (void)deleteItem:(id)arg1 correspondingIndexPath:(id)arg2;
- (_Bool)checkAndToastSongNameDuplicated:(id)arg1;
- (void)mmTableView:(id)arg1 safeAreaInsetsDidChange:(struct UIEdgeInsets)arg2;
- (_Bool)mmTableView:(id)arg1 shouldPassHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)installTableView;
- (void)handleItemEndEditing:(id)arg1;
- (void)handleItemDeletingChanged:(id)arg1 deleting:(_Bool)arg2;
- (_Bool)handleItemShouldBeginEditing:(id)arg1;
- (void)handleTableViewPan:(id)arg1;
- (_Bool)mmTableView:(id)arg1 shouldBeginRecognizeGesture:(id)arg2;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)scrollToIndex:(unsigned long long)arg1;
- (_Bool)canSubmitCurrentSongs;
- (id)getCurrentValidSongs;
- (void)clearData;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 songs:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

