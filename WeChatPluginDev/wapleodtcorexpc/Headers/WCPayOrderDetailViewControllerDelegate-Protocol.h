//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayControlData;

@protocol WCPayOrderDetailViewControllerDelegate <NSObject>
- (void)OrderDetailBack;
- (void)OrderDetailClickCoupousInfo;
- (void)OrderDetailAddOrderCard:(WCPayControlData *)arg1;
- (void)OrderDetailAdd:(WCPayControlData *)arg1;
- (void)OrderDetailPay:(WCPayControlData *)arg1;
@end

