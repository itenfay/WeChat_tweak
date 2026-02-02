//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiApplyQrcodeResp, NSString;

@protocol WCPayApplyQrcodeCgiDelegate <NSObject>
- (void)onApplyQrcodeError:(long long)arg1 errorMsg:(NSString *)arg2;
- (void)onApplyQrcode:(CgiApplyQrcodeResp *)arg1;
@end

