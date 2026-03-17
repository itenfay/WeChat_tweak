//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayBaseNetworkingError, WCPayQueryBindCardAwardCgi, WCPayQueryBindCardAwardCgiResponse;

@protocol WCPayQueryBindCardAwardCgiDelegate <NSObject>
- (void)onWCPayQueryBindCardAwardCgi:(WCPayQueryBindCardAwardCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)onWCPayQueryBindCardAwardCgi:(WCPayQueryBindCardAwardCgi *)arg1 didGetResponse:(WCPayQueryBindCardAwardCgiResponse *)arg2;
@end

