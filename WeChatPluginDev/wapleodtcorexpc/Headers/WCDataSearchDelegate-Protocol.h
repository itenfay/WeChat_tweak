//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, UIScrollView, UITableView, UITableViewCell, UIView;

@protocol WCDataSearchDelegate <NSObject>

@optional
- (void)wcSearchViewTableWillBeginDragging:(UIScrollView *)arg1;
- (void)wcSearchViewTableWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)wcSearchViewTableDidEndDecelerating:(UIScrollView *)arg1;
- (void)wcSearchViewTableDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)wcSearchViewTableDidScroll:(UIScrollView *)arg1;
- (long long)wcSearcherTableView:(UITableView *)arg1 editingStyleForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)wcSearcherTableView:(UITableView *)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)wcSearcherPerformAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 withSender:(id)arg3;
- (_Bool)wcSearcherCanPerformAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 withSender:(id)arg3;
- (_Bool)wcSearcherShouldShowMenuForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)wcSearcherWillDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)shouldHighlightRowAtIndexPath:(NSIndexPath *)arg1;
- (UIView *)viewForFooterInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (double)heightForFooterInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (NSString *)titleForFooterInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (NSString *)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (UIView *)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (long long)numberOfSectionsForSearchViewTable:(UITableView *)arg1;
- (UITableViewCell *)cellForIndex:(NSIndexPath *)arg1 ForSearchViewTable:(UITableView *)arg2;
- (void)didSearchViewTableSelect:(NSIndexPath *)arg1;
- (double)heightForSearchViewTable:(NSIndexPath *)arg1;
- (UITableViewCell *)cellForSearchViewTable:(UITableViewCell *)arg1 index:(NSIndexPath *)arg2;
- (void)cancelSearch;
- (void)doSearch:(NSString *)arg1 Pre:(_Bool)arg2;
@end

