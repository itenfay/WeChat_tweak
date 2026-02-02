//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"

@class CloseTouchLockResp, WCPayBaseNetworkingError, WCPayCloseWalletLockCgi;

@protocol WCPayCloseWalletLockCgiDelegate <WCPayBaseCgiDelegate, WCPayLogicMgrExt>
- (void)closeWalletLockCgi:(WCPayCloseWalletLockCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)closeWalletLockCgi:(WCPayCloseWalletLockCgi *)arg1 didGetResponse:(CloseTouchLockResp *)arg2;
@end

