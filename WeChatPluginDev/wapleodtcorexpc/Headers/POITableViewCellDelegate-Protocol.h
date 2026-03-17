//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UITableView;

@protocol POITableViewCellDelegate <NSObject>
- (void)tableView:(UITableView *)arg1 didSelectAt:(NSIndexPath *)arg2;
@end

