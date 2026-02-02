//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ManagePlanResp, NSString;

@protocol WCPayLQTDepositManagePlanCgiDelegate <NSObject>
- (void)onWCPayLQTDepositManagePlanCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositManagePlanCgiResponseOK:(ManagePlanResp *)arg1;
@end

