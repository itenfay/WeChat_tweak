//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"

@class TouchLockAuthenResp, WCPayBaseNetworkingError, WCPayTouchLockAuthenCgi;

@protocol WCPayTouchLockAuthenCgiDelegate <WCPayBaseCgiDelegate, WCPayLogicMgrExt>
- (void)touchLockAuthenCgi:(WCPayTouchLockAuthenCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)touchLockAuthenCgi:(WCPayTouchLockAuthenCgi *)arg1 didGetResponse:(TouchLockAuthenResp *)arg2;

@optional
- (void)touchLockAuthenCgiVerifyPwdFail:(WCPayTouchLockAuthenCgi *)arg1;
@end

