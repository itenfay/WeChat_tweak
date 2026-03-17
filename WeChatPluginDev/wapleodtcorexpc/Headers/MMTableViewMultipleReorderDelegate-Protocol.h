//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UITableViewDelegate-Protocol.h"

@class UITableView;

@protocol MMTableViewMultipleReorderDelegate <UITableViewDelegate>

@optional
- (double)tableViewEstimatedRowHeightForMultipleReorder:(UITableView *)arg1;
- (void)tableViewDidCancelMultipleReorder:(UITableView *)arg1;
- (void)tableViewDidEndMultipleReorder:(UITableView *)arg1;
- (void)tableViewDidBeginMultipleReorder:(UITableView *)arg1;
- (void)tableViewWillBeginMultipleReorder:(UITableView *)arg1;
- (void)tableViewWillEndMultipleReorder:(UITableView *)arg1;
@end

