//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WABizF2FRequestPaymentResp;

@protocol WABizF2FRequestPaymentCgiDelegate <NSObject>
- (void)onWABizF2FRequestPaymentCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWABizF2FRequestPaymentCgiResponseOK:(WABizF2FRequestPaymentResp *)arg1;
@end

