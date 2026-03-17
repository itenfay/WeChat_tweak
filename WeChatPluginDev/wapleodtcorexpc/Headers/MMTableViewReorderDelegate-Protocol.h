//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UITableView, UITableViewCell, UIView;

@protocol MMTableViewReorderDelegate <NSObject>
- (_Bool)tableView:(UITableView *)arg1 reorderFromIndex:(NSIndexPath *)arg2 toIndex:(NSIndexPath *)arg3;

@optional
- (void)onReorderEnd;
- (UIView *)tableView:(UITableView *)arg1 draggingViewForIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldStartResortAtPos:(struct CGPoint)arg2 inCell:(UITableViewCell *)arg3 atIndexPath:(NSIndexPath *)arg4;
@end

