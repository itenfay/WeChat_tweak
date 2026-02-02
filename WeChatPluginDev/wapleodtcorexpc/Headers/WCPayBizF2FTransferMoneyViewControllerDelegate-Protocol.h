//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayBizF2FTransferMoneyPlaceOrderArgs;

@protocol WCPayBizF2FTransferMoneyViewControllerDelegate <NSObject>
- (_Bool)BizTransferMoneyCurrentLogicIsTop;
- (void)onBizTransferMoneyTransferBtnClickWithArgs:(WCPayBizF2FTransferMoneyPlaceOrderArgs *)arg1;
- (void)onBizTransferMoneyViewControllerBack;
@end

