//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMHorizontalTableView;

@protocol MMHorizontalTableViewDelegate <NSObject>
- (double)horizontalTableView:(MMHorizontalTableView *)arg1 widthForColumnAtIndex:(unsigned long long)arg2;
- (void)horizontalTableView:(MMHorizontalTableView *)arg1 didSelectColumnAtIndex:(unsigned long long)arg2;
@end

