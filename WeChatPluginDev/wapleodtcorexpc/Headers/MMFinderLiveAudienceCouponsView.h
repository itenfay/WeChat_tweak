//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface MMFinderLiveAudienceCouponsView
{
    NSMutableSet *_exposedCouponIdSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *exposedCouponIdSet; // @synthesize exposedCouponIdSet=_exposedCouponIdSet;
- (void)willDisplayCellForModel:(id)arg1;
- (CDUnknownBlockType)actionForReportButtonActionWithIsReceiveFailForCoupon:(id)arg1;
- (void)onActionButtonClicked:(id)arg1 view:(id)arg2;
- (void)updateWithCoordinator;
- (id)initWithTaskID:(id)arg1 shopShelfCoordinator:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

