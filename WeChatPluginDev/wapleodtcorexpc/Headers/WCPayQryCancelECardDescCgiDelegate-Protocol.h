//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class QryCancelECardDescRes, WCPayECardCgiError, WCPayQryCancelECardDescCgi;

@protocol WCPayQryCancelECardDescCgiDelegate <WCPayBaseCgiDelegate>
- (void)qryCancelECardDescCgi:(WCPayQryCancelECardDescCgi *)arg1 didFailWithError:(WCPayECardCgiError *)arg2;
- (void)qryCancelECardDescCgi:(WCPayQryCancelECardDescCgi *)arg1 didGetResponse:(QryCancelECardDescRes *)arg2;
@end

