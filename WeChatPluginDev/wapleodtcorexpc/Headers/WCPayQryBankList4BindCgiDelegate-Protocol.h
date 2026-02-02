//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class QryBankList4BindRes, WCPayECardCgiError, WCPayQryBankList4BindCgi;

@protocol WCPayQryBankList4BindCgiDelegate <WCPayBaseCgiDelegate>
- (void)qryBankList4BindCgi:(WCPayQryBankList4BindCgi *)arg1 didFailWithError:(WCPayECardCgiError *)arg2;
- (void)qryBankList4BindCgi:(WCPayQryBankList4BindCgi *)arg1 didGetResponse:(QryBankList4BindRes *)arg2;
@end

