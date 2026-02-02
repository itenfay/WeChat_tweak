//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class WCPayBindedCardPikerItem;

@protocol WCPayBindedCardPikerItemDelegate <NSObject, WCBaseInfoItemDelegate>

@optional
- (void)OnChooseCard:(WCPayBindedCardPikerItem *)arg1;
- (void)OnChooseNewCard:(WCPayBindedCardPikerItem *)arg1;
@end

