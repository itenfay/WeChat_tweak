//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayOverseaTransferOrderResp;

@protocol WCPayOverseaTransferOrderCgiDelegate <NSObject>
- (void)onWCPayOverseaTransferOrderBizErrorWithRetCode:(int)arg1 ErrorMsg:(NSString *)arg2;
- (void)onWCPayOverseaTransferOrderCgiErrorWithRetCode:(int)arg1 ErrorMsg:(NSString *)arg2;
- (void)onWCPayOverseaTransferOrderCgiReturnHasTheSameAmountUnreceiveTransferWithResp:(WCPayOverseaTransferOrderResp *)arg1;
- (void)onWCPayOverseaTransferOrderCgiRetrunHasUnreceiveTransferWithResp:(WCPayOverseaTransferOrderResp *)arg1;
- (void)onWCPayOverseaTransferOrderCgiOkWithResp:(WCPayOverseaTransferOrderResp *)arg1;
@end

