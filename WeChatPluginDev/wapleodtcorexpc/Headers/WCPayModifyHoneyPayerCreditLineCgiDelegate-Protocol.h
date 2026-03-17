//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class ModifyHoneyPayerCreditLineResp, WCPayBaseNetworkingError, WCPayModifyHoneyPayerCreditLineCgi;

@protocol WCPayModifyHoneyPayerCreditLineCgiDelegate <WCPayBaseCgiDelegate>
- (void)modifyHoneyPayerCreditLineCgi:(WCPayModifyHoneyPayerCreditLineCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)modifyHoneyPayerCreditLineCgi:(WCPayModifyHoneyPayerCreditLineCgi *)arg1 didGetResponse:(ModifyHoneyPayerCreditLineResp *)arg2;
@end

