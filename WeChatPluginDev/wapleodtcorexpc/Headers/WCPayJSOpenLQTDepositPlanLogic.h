//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayJSOpenLQTDepositPlanLogicDelegate;

@interface WCPayJSOpenLQTDepositPlanLogic
{
    id <WCPayJSOpenLQTDepositPlanLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property __weak id <WCPayJSOpenLQTDepositPlanLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)startLQTFixedDepositPlanList;
- (void)authOk;
- (void)authFail;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

