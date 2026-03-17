//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayOverseaFacingTransferOrderResponse;

@protocol WCPayOverseaFacingTransferOrderCgiDelegate <NSObject>
- (void)onWCPayOverseaFacingTransferOrderResponseCgiError:(int)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayOverseaFacingTransferOrderResponseBizError:(int)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayOverseaFacingTransferOrderResponseOK:(WCPayOverseaFacingTransferOrderResponse *)arg1;
@end

