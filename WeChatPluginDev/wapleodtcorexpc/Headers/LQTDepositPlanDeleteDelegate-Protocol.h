//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ManagePlanResp, NSString;

@protocol LQTDepositPlanDeleteDelegate <NSObject>
- (void)onLQTDepositPlanDeleteError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPlanDeleteResponseOK:(ManagePlanResp *)arg1;
@end

