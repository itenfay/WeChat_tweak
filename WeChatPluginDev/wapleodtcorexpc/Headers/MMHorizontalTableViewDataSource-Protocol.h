//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMHorizontalTableView, MMHorizontalTableViewCell;

@protocol MMHorizontalTableViewDataSource <NSObject>
- (MMHorizontalTableViewCell *)horizontalTableView:(MMHorizontalTableView *)arg1 viewForColumnAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfColumnsInHorizontalTableView:(MMHorizontalTableView *)arg1;
@end

