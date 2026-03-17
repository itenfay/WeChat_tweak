//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavDataItemWrap, FavoritesItem, FavoritesItemDataField, MMFavCellComponent, NSIndexPath, NSString, UITableView;

@protocol FavBaseSearchViewControllerDelegate <NSObject>

@optional
- (void)onSelectDone;
- (void)onShowFavContext:(FavoritesItem *)arg1 DataItem:(FavoritesItemDataField *)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(NSString *)arg6;
- (void)onSelectFavDataItem:(FavDataItemWrap *)arg1 tableView:(UITableView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)onSelectFavItem:(FavoritesItem *)arg1 tableView:(UITableView *)arg2 atIndexPath:(NSIndexPath *)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(NSString *)arg6 withCell:(MMFavCellComponent *)arg7;
@end

