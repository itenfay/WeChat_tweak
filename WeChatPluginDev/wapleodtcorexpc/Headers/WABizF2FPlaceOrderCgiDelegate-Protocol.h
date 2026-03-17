//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WABizF2FPlaceOrderResp;

@protocol WABizF2FPlaceOrderCgiDelegate <NSObject>
- (void)onWABizF2FPlaceOrderCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWABizF2FPlaceOrderCgiResponseOK:(WABizF2FPlaceOrderResp *)arg1;
@end

