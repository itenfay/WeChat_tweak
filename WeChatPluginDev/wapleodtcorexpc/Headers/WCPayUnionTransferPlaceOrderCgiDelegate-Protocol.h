//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiUnionTransferPlaceOrderResp, NSString;

@protocol WCPayUnionTransferPlaceOrderCgiDelegate <NSObject>
- (void)onWCPayUnionTransferPlaceOrderCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferPlaceOrderCgiResponseOK:(CgiUnionTransferPlaceOrderResp *)arg1;
@end

