//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayOverseaTransferGetCurrencyCgiRespObject;

@protocol WCPayOverseaTransferGetCurrencyCgiDelegate <NSObject>
- (void)onWCPayOverseaTransferGetCurrencyBizErrorWithRetCode:(int)arg1 ErrorMsg:(NSString *)arg2;
- (void)onWCPayOverseaTransferGetCurrencyCgiErrorWithRetCode:(int)arg1 ErrorMsg:(NSString *)arg2;
- (void)onWCPayOverseaTransferGetCurrencyCgiOkArgument:(WCPayOverseaTransferGetCurrencyCgiRespObject *)arg1;
@end

