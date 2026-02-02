//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, PayIBGQuickGetOverseaWalletResp;

@protocol WCPayOverseaGetOfflinePayUrlCgiDelegate <NSObject>
- (void)onWCPayOverseaGetOfflinePayUrlCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayOverseaGetOfflinePayUrlCgiResponseOK:(PayIBGQuickGetOverseaWalletResp *)arg1;
@end

