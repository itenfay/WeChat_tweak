//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, PlanIndexResp;

@protocol LQTDepositPlanIndexAfterModifyDelegate <NSObject>
- (void)onLQTDepositPlanIndexAfterModifyError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPlanIndexAfterModifyResp:(PlanIndexResp *)arg1;
@end

