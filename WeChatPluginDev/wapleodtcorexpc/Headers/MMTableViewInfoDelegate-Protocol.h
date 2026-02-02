//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMTableViewDelegate-Protocol.h"
#import "NSObject-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSIndexPath, WCTableViewCellManager;

@protocol MMTableViewInfoDelegate <NSObject, UIScrollViewDelegate, MMTableViewDelegate>

@optional
- (void)commitEditingForRowAtIndexPath:(NSIndexPath *)arg1 Cell:(WCTableViewCellManager *)arg2;
- (void)accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg1 Cell:(WCTableViewCellManager *)arg2;
@end

