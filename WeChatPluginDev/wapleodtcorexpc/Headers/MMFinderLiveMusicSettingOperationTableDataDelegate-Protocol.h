//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveMusicDataItem, NSArray, NSIndexPath, NSMutableArray;

@protocol MMFinderLiveMusicSettingOperationTableDataDelegate <NSObject>
- (void)onMusicSettingTableDataSelectAllStateChanged:(_Bool)arg1;
- (void)synchronizeModifiedBriefMusicInfos:(NSArray *)arg1;
- (NSMutableArray *)getCurrentBriefMusicInfos;
- (void)onMusicSettingTableDataDeleteDataItemList:(NSArray *)arg1;
- (void)onMusicSettingTableDataDeleteDidSelectInEditingMode:(_Bool)arg1;
- (void)onMusicSettingTableDataDidSelect:(MMFinderLiveMusicDataItem *)arg1 isInEditing:(_Bool)arg2;
- (void)onMusicSettingTableDataDeleteDateItem:(MMFinderLiveMusicDataItem *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)onMusicSettingTableDidScroll;
- (void)onMusicSettingTableDataEndEdit:(_Bool)arg1;
- (void)onMusicSettingTableDataBeginEdit;
- (void)onMusicSettingTableDataCleared;
- (void)onMusicSettingTableDataLoaded;
@end

