//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MerchantPayGetQRCodeInfoResp, NSString;

@protocol WCPayMerchantPayGetQRCodeInfoCgiDelegate <NSObject>
- (void)onWCPayMerchantPayGetQRCodeInfoError:(long long)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayMerchantPayGetQRCodeInfo:(MerchantPayGetQRCodeInfoResp *)arg1;
@end

