//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class PlanIndexResp_PlanItem, QryAutoPlanOrderListResp;

@protocol WCPayLQTDepositDetailViewControllerDelegate <NSObject>
- (PlanIndexResp_PlanItem *)onWCPayLQTDepositDetailViewControllerPlanItem;
- (QryAutoPlanOrderListResp *)onWCPayLQTDepositDetailViewControllerDetailResp;
- (void)onWCPayLQTDepositDetailViewControllerModify:(PlanIndexResp_PlanItem *)arg1;
- (void)onWCPayLQTDepositDetailViewControllerDelete:(PlanIndexResp_PlanItem *)arg1;
- (void)onWCPayLQTDepositDetailViewControllerStop:(PlanIndexResp_PlanItem *)arg1;
- (void)onWCPayLQTDepositDetailViewControllerOpen:(PlanIndexResp_PlanItem *)arg1;
- (_Bool)onWCPayLQTDepositDetailViewControllerNoMoreData;
- (void)onWCPayLQTDepositDetailViewControllerLoadMore;
- (void)onWCPayLQTDepositDetailViewControllerBack;
@end

