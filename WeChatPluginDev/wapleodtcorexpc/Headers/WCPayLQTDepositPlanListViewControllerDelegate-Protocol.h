//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class PlanIndexResp_PlanItem;

@protocol WCPayLQTDepositPlanListViewControllerDelegate <NSObject>
- (void)onWCPayLQTDepositPlanListViewControllerToDetail:(PlanIndexResp_PlanItem *)arg1;
- (void)onWCPayLQTDepositEntryViewControllerNewPlan;
- (void)onWCPayLQTDepositEntryViewControllerCancel;
- (void)onWCPayLQTDepositPlanListViewControllerOpearte:(PlanIndexResp_PlanItem *)arg1 operateType:(int)arg2;
- (void)onWCPayLQTDepositPlanListViewControllerClickAddPlan;
- (void)onWCPayLQTDepositPlanListViewControllerBack;
@end

