//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiGetQrcodeUrlV2Resp, NSString;

@protocol WCPayF2FQrcodeCgiDelegate <NSObject>
- (void)onGetF2FQrcodeError:(long long)arg1 errorMsg:(NSString *)arg2;
- (void)onGetF2FQrcode:(CgiGetQrcodeUrlV2Resp *)arg1;
@end

