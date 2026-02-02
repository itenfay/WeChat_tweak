//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class OfflineGetMsgResponse, WCPayBaseNetworkingError, WCPayOfflineGetMsgCgi;

@protocol WCPayOfflineGetMsgCgiDelegate <WCPayBaseCgiDelegate>
- (void)wcpayOfflineGetMsgCgi:(WCPayOfflineGetMsgCgi *)arg1 didGetResponse:(OfflineGetMsgResponse *)arg2;

@optional
- (void)wcpayOfflineGetMsgCgi:(WCPayOfflineGetMsgCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
@end

