//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface WCGeneralMonitorEventCenter : NSObject
{
    NSMapTable *_monitorTable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *monitorTable; // @synthesize monitorTable=_monitorTable;
- (void)onNearbySubTabDisappear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbySubTabAppear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onDidEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)onCellForRowAtIndexPath:(id)arg1 indexPath:(id)arg2;
- (void)onSetHidden:(id)arg1 hidden:(_Bool)arg2;
- (void)onDeleteItemsAtIndexPaths:(id)arg1;
- (void)onInsertItemsAtIndexPaths:(id)arg1;
- (void)onDeleteSections:(id)arg1;
- (void)onInsertSections:(id)arg1;
- (void)onDeleteRowsAtIndexPathsWithRowAnimation:(id)arg1;
- (void)onInsertRowsAtIndexPathsWithRowAnimation:(id)arg1;
- (void)onDeleteSectionsWithRowAnimation:(id)arg1;
- (void)onInsertSectionsWithRowAnimation:(id)arg1;
- (void)onReloadItemsAtIndexPaths:(id)arg1;
- (void)onReloadSections:(id)arg1;
- (void)onReloadRowsAtIndexPaths:(id)arg1;
- (void)onReloadData:(id)arg1;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onViewDidDisappear:(id)arg1;
- (void)onViewDidAppear:(id)arg1;
- (void)onEnterBackground2;
- (void)onEnterForeground2;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)removeGeneralMonitor:(id)arg1;
- (void)addGeneralMonitor:(id)arg1 observerType:(unsigned long long)arg2;
- (void)onClearData;
- (void)onInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

