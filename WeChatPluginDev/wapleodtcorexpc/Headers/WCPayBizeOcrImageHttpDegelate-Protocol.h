//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayBizOcrImageHttp;

@protocol WCPayBizeOcrImageHttpDegelate <NSObject>
- (void)onWCPayScanCardNumberHttp:(WCPayBizOcrImageHttp *)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayScanCardNumberHttp:(WCPayBizOcrImageHttp *)arg1 cardNumber:(NSString *)arg2 scanResult:(NSString *)arg3;
@end

