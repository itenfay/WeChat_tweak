//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAddressControlData, WCAddressControlLogic;

@interface WCAddressGetAddressControlLogic
{
    WCAddressControlData *m_data;
    WCAddressControlLogic *m_oWCAddressControlLogic;
    int m_eWCAddressGetAddressControlLogicSituation;
}

- (void).cxx_destruct;
- (void)OnPreFinishedWCAddressLogic:(id)arg1 waitUntilDone:(_Bool *)arg2;
- (void)OnGetLatestAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)EndWCAddressGetAddressControlLogic;
- (id)initWithData:(id)arg1 Situation:(int)arg2;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

