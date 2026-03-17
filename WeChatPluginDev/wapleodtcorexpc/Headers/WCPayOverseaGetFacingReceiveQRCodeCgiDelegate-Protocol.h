//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayOverseaGetFacingReceiveQRCodeResponse;

@protocol WCPayOverseaGetFacingReceiveQRCodeCgiDelegate <NSObject>
- (void)onWCPayOverseaGetFacingRecevieQRCodeResponseCgiError:(int)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayOverseaGetFacingRecevieQRCodeResponseBizError:(WCPayOverseaGetFacingReceiveQRCodeResponse *)arg1 errorCode:(int)arg2 errorMsg:(NSString *)arg3;
- (void)onWCPayOverseaGetFacingRecevieNotFixQRCodeResponseOK:(WCPayOverseaGetFacingReceiveQRCodeResponse *)arg1;
- (void)onWCPayOverseaGetFacingRecevieNotFixQRCodeLocalResponse:(WCPayOverseaGetFacingReceiveQRCodeResponse *)arg1;
- (void)onWCPayOverseaGetFacingReceiveFixQRCodeResponseOK:(WCPayOverseaGetFacingReceiveQRCodeResponse *)arg1;
@end

