//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UITableView, WCListViewController;

@protocol WCListViewProtocol <NSObject>
@property(nonatomic) __weak WCListViewController *viewController;
- (void)reloadBackGround;
- (void)refreshFooterEnd:(unsigned int)arg1;
- (void)refreshHeaderEnd:(unsigned int)arg1;
- (void)onDataChanged:(NSArray *)arg1;
- (void)shouldReloadData:(NSArray *)arg1 starredDataItems:(NSArray *)arg2 jumpState:(_Bool)arg3 prePage:(_Bool)arg4;
- (void)onHomepageClearJumpState;
- (UITableView *)getTableView;

@optional
- (void)onYearMonthPickerViewDismiss;
- (void)onYearMonthPickerViewShow;
- (void)showTableView;
- (void)hideTableView;
- (void)scrollToShowItem:(NSString *)arg1 tryLoadMore:(_Bool)arg2 animated:(_Bool)arg3;
- (void)didReceiveMemoryWarning;
- (void)onNoMoreDataWithRet:(long long)arg1 andTip:(NSString *)arg2;
@end

