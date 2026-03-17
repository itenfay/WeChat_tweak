//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, OrderQueryOrderResponse, WCPayNFCCardQueryOrderCgi;

@protocol WCPayNFCCardQueryOrderCgiDelegate <NSObject>
- (void)onWCPayNFCCardQueryOrderCgiResponseError:(WCPayNFCCardQueryOrderCgi *)arg1 errorMsg:(NSString *)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayNFCCardQueryOrderCgiResponseOK:(WCPayNFCCardQueryOrderCgi *)arg1 result:(OrderQueryOrderResponse *)arg2;
@end

