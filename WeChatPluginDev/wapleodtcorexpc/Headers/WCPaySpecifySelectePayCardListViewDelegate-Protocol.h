//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayBindCardInfo;

@protocol WCPaySpecifySelectePayCardListViewDelegate <NSObject>
- (void)OnWCPaySpecifySelectePayCardListViewBackAddCard;
- (void)OnWCPaySpecifySelectePayCardListViewNext:(WCPayBindCardInfo *)arg1;
- (void)OnWCPaySpecifySelectePayCardListViewBack;
@end

