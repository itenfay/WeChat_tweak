//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, PayIBGGetOverseaWalletResp, WCPayOverseaIBGGetWalletCgiCache;

@protocol WCPayOverseaIBGGetWalletCgiDelegate <NSObject>
- (void)onWCPayOverseaIBGGetWalletCgiOkWithRespObject:(WCPayOverseaIBGGetWalletCgiCache *)arg1 withOriginRespObject:(PayIBGGetOverseaWalletResp *)arg2;
- (void)onWCPayOverseaIBGGetWalletCgiErrorWithErrorCode:(int)arg1 ErrorMsg:(NSString *)arg2;
@end

