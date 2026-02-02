//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayPaidSuccessLogic
{
    long long m_eWCPayPaidSuccessLogicWCPaySituationType;
}

- (void)OnSelectedSuccessBtnDown;
- (void)OnClickedBrandAppUserName:(id)arg1 NickName:(id)arg2;
- (void)OnHistoryOrderDetailRightActionBack:(_Bool)arg1;
- (void)OnHistoryOrderDetailBack:(_Bool)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)convertIAPOrderDetailToWCPayOrderDetailStruct;
- (void)setPayPaidSuccessLogicSituationType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

