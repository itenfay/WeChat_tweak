//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayBaseNetworkingError, WCPaySendBindCardAwardCgi, WCPaySendBindCardAwardCgiResponse;

@protocol WCPaySendBindCardAwardCgiDelegate <NSObject>
- (void)onWCPaySendBindCardAwardCgi:(WCPaySendBindCardAwardCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)onWCPaySendBindCardAwardCgi:(WCPaySendBindCardAwardCgi *)arg1 didGetResponse:(WCPaySendBindCardAwardCgiResponse *)arg2;
@end

