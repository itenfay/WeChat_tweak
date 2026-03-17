//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIPanGestureRecognizer, UITableView;

@protocol MMPickLocationActionDelegate <NSObject>

@optional
- (void)handleTableView:(UITableView *)arg1 PanGesture:(UIPanGestureRecognizer *)arg2;
- (void)searchTableFooterDidTriggerRefresh;
- (void)nearTableFooterDidTriggerRefresh;
- (void)searchBarBecomeActive;
- (void)searchBarWillEndSearch;
- (void)searchBarWillBeginSearch;
- (void)searchBarSearchButtonClicked:(NSString *)arg1;
- (void)searchBarTextDidChange:(NSString *)arg1;
- (void)searchBarTextDidBeginEditing;
- (void)searchTableViewDidScroll:(UITableView *)arg1;
- (void)nearTableViewDidScroll:(UITableView *)arg1;
- (void)searchResultCellDidDisplay:(unsigned long long)arg1;
- (void)searchResultPOIItemDidSelect:(unsigned long long)arg1;
- (void)nearbyPOIItemDidSelect:(unsigned long long)arg1;
- (double)getPickLocationSearchViewFoldHeight;
- (double)getPickLocationSearchViewExpandHeight;
- (void)didPickLocationSearchViewFolded;
@end

