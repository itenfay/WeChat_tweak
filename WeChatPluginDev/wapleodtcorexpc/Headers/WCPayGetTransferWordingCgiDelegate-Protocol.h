//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class GetTransferWordingResponse, WCPayBaseNetworkingError, WCPayGetTransferWordingCgi;

@protocol WCPayGetTransferWordingCgiDelegate <WCPayBaseCgiDelegate>
- (void)wcpayGetTransferWordingCgi:(WCPayGetTransferWordingCgi *)arg1 didGetResponse:(GetTransferWordingResponse *)arg2;

@optional
- (void)wcpayGetTransferWordingCgi:(WCPayGetTransferWordingCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
@end

