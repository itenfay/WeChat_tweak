//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSIndexPath, NSString, UIImage, UITableView;

@protocol MMTableViewMultipleReorderDataSource <UITableViewDataSource>
- (void)tableView:(UITableView *)arg1 moveRowsAtIndexPaths:(NSArray *)arg2 toIndexPaths:(NSArray *)arg3;
- (UIImage *)tableView:(UITableView *)arg1 cellSnapshotImageForIndexPath:(NSIndexPath *)arg2;

@optional
- (NSString *)tableView:(UITableView *)arg1 multipleReorderAccessibilityLabelForRowAtIndexPath:(NSIndexPath *)arg2;
@end

