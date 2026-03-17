//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveSongItem, NSArray, NSIndexPath;

@protocol MMFinderLiveSongSettingOperationTableDataDelegate <NSObject>
- (void)onSongSettingTableDataSelectAllStateChanged:(_Bool)arg1;
- (void)onSongSettingTableAllDataCountChanged:(unsigned long long)arg1;
- (void)synchronizeModifiedSongItemArray:(NSArray *)arg1;
- (void)onSongSettingTableDataDeleteDataItemList:(NSArray *)arg1;
- (void)onSongSettingTableDataDeleteDidSelectInEditingMode:(_Bool)arg1;
- (void)onSongSettingTableDataDidChangeSing:(MMFinderLiveSongItem *)arg1;
- (void)onSongSettingTableDataDidFinishSing:(MMFinderLiveSongItem *)arg1;
- (void)onSongSettingTableDataDidSelect:(MMFinderLiveSongItem *)arg1 isInEditing:(_Bool)arg2;
- (void)onSongSettingTableDataDeleteDateItem:(MMFinderLiveSongItem *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)onSongSettingTableDidScroll;
- (void)onSongSettingTableDataEndEdit:(_Bool)arg1;
- (void)onSongSettingTableDataBeginEdit;
- (void)onSongSettingTableDataCleared;
- (void)onSongSettingTableDataLoaded;
@end

