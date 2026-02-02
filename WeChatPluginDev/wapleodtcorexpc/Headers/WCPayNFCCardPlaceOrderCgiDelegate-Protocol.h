//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, OrderCreateOrderResponse, WCPayNFCCardPlaceOrderCgi;

@protocol WCPayNFCCardPlaceOrderCgiDelegate <NSObject>
- (void)onWCPayNFCCardPlaceOrderCgiResponseError:(WCPayNFCCardPlaceOrderCgi *)arg1 errorMsg:(NSString *)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayNFCCardPlaceOrderCgiResponseOK:(WCPayNFCCardPlaceOrderCgi *)arg1 result:(OrderCreateOrderResponse *)arg2;
@end

