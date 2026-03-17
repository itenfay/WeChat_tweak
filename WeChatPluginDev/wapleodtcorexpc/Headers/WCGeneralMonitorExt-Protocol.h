//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UIScrollView, UITableView, UIViewController;

@protocol WCGeneralMonitorExt <NSObject>

@optional
- (void)onNearbySubTabDisappear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbySubTabAppear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onDidEndDisplayingCell:(UIScrollView *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)onCellForRowAtIndexPath:(UITableView *)arg1 indexPath:(NSIndexPath *)arg2;
- (void)onSetHidden:(UIScrollView *)arg1 hidden:(_Bool)arg2;
- (void)onDeleteItemsAtIndexPaths:(UIScrollView *)arg1;
- (void)onInsertItemsAtIndexPaths:(UIScrollView *)arg1;
- (void)onDeleteSections:(UIScrollView *)arg1;
- (void)onInsertSections:(UIScrollView *)arg1;
- (void)onDeleteRowsAtIndexPathsWithRowAnimation:(UIScrollView *)arg1;
- (void)onInsertRowsAtIndexPathsWithRowAnimation:(UIScrollView *)arg1;
- (void)onDeleteSectionsWithRowAnimation:(UIScrollView *)arg1;
- (void)onInsertSectionsWithRowAnimation:(UIScrollView *)arg1;
- (void)onReloadItemsAtIndexPaths:(UIScrollView *)arg1;
- (void)onReloadSections:(UIScrollView *)arg1;
- (void)onReloadRowsAtIndexPaths:(UIScrollView *)arg1;
- (void)onReloadData:(UIScrollView *)arg1;
- (void)onScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)onScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)onScrollViewDidScroll:(UIScrollView *)arg1;
- (void)onViewDidDisappear:(UIViewController *)arg1;
- (void)onViewDidAppear:(UIViewController *)arg1;
@end

