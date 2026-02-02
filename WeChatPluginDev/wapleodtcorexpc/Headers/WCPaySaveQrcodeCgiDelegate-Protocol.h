//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiSaveQrcodeResp, NSString;

@protocol WCPaySaveQrcodeCgiDelegate <NSObject>
- (void)onSaveQrcodeError:(long long)arg1 errorMsg:(NSString *)arg2;
- (void)onSaveQrcode:(CgiSaveQrcodeResp *)arg1;
@end

