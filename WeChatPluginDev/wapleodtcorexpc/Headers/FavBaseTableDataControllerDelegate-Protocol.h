//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesItem, MMUIViewController, NSIndexPath, UIScrollView;

@protocol FavBaseTableDataControllerDelegate <NSObject>
- (MMUIViewController *)getCurrentViewController;

@optional
- (int)getSortType;
- (_Bool)isOnSearch;
- (void)canNotSelecteDueToExceedCount;
- (long long)getSelectedType;
- (void)onLoadMore;
- (void)onShowEmptyView;
- (void)onUpdateUnexistItem:(FavoritesItem *)arg1;
- (void)onScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)onScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)onScrollViewDidScroll:(UIScrollView *)arg1;
- (void)onSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)canPerformAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
@end

