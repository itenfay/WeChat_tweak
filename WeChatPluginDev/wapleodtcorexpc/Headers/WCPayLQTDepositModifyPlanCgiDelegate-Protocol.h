//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ModifyPlanResp, NSString;

@protocol WCPayLQTDepositModifyPlanCgiDelegate <NSObject>
- (void)onWCPayLQTDepositModifyPlanCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositModifyPlanCgiResponseOK:(ModifyPlanResp *)arg1;
@end

