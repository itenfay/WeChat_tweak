//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, PlanIndexResp;

@protocol LQTDepositPlanIndexAfterDeleteDelegate <NSObject>
- (void)onLQTDepositPlanIndexAfterDeleteError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPlanIndexAfterDeleteResponseOK:(PlanIndexResp *)arg1;
@end

