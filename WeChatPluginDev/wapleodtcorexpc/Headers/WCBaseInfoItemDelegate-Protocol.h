//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCBaseInfoItem;

@protocol WCBaseInfoItemDelegate <NSObject>

@optional
- (void)WCBaseInfoItemEditChanged:(WCBaseInfoItem *)arg1;
- (void)WCBaseInfoItemPressReturnKey:(WCBaseInfoItem *)arg1;
- (void)WCBaseInfoItemEndEdit:(WCBaseInfoItem *)arg1;
- (void)WCBaseInfoItemBeginEdit:(WCBaseInfoItem *)arg1;
- (void)WCBaseInfoItemCancelEdit:(WCBaseInfoItem *)arg1;
- (_Bool)WCBaseInfoItemShouldBeginEditing:(WCBaseInfoItem *)arg1;
@end

