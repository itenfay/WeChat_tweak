//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, UIScrollView, UITableView, UITableViewCell, UIView;

@protocol MMLocationSearchResultTableViewDelegate <NSObject>
- (double)heightForSearchViewTable:(NSIndexPath *)arg1;
- (void)searchTableViewCellWillDisplay:(UITableViewCell *)arg1 index:(NSIndexPath *)arg2;
- (UITableViewCell *)cellForSearchViewTable:(UITableView *)arg1 AtIndexPath:(NSIndexPath *)arg2;

@optional
- (void)didSearchViewTableEndDecelerating:(UIScrollView *)arg1;
- (void)didSearchViewTableEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)didSearchViewTableEndScrollingAnimation:(UIScrollView *)arg1;
- (void)didSearchViewTableBeginDragging:(UIScrollView *)arg1;
- (void)didSearchViewTableScroll:(UIScrollView *)arg1;
- (_Bool)shouldHighlightRowAtIndexPath:(NSIndexPath *)arg1;
- (UIView *)viewForFooterInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (double)heightForFooterInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (UIView *)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (NSString *)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(UITableView *)arg2;
- (void)didSearchViewTableSelect:(NSIndexPath *)arg1;
@end

