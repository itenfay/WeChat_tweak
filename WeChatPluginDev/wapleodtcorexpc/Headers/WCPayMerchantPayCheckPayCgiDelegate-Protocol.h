//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MerchantPayCheckPayResp, NSString;

@protocol WCPayMerchantPayCheckPayCgiDelegate <NSObject>
- (void)onWCPayMerchantPayCheckPayError:(long long)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayMerchantPayCheckPayResp:(MerchantPayCheckPayResp *)arg1;
@end

