//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayBalanceSelectCardView, WCPayBindCardInfo;

@protocol WCPayBalanceSelectCardViewDelegate <NSObject>

@optional
- (void)selectCardViewDidSelectAddNewCard:(WCPayBalanceSelectCardView *)arg1;
- (void)selectCardView:(WCPayBalanceSelectCardView *)arg1 didSelectCard:(WCPayBindCardInfo *)arg2;
- (double)selectCardViewSafeBottom;
@end

