//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class OpeniOSTouchLockResp, WCPayBaseNetworkingError, WCPayOpeniOSTouchLockCgi;

@protocol WCPayOpeniOSTouchLockCgiDelegate <WCPayBaseCgiDelegate>
- (void)openiOSTouchLockCgi:(WCPayOpeniOSTouchLockCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)openiOSTouchLockCgi:(WCPayOpeniOSTouchLockCgi *)arg1 didGetResponse:(OpeniOSTouchLockResp *)arg2;
@end

