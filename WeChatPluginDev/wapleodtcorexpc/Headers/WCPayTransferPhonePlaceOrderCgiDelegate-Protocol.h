//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhonePlaceOrderResp;

@protocol WCPayTransferPhonePlaceOrderCgiDelegate <NSObject>
- (void)onWCPayTransferPhonePlaceOrderCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhonePlaceOrderCgiResp:(TransferPhonePlaceOrderResp *)arg1;
@end

