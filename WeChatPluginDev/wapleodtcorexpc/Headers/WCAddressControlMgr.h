//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAddressControlMgr
{
}

- (unsigned int)startGetAddressLogic:(id)arg1 logicDelegate:(id)arg2;
- (void)jsGetLatestAddresss:(id)arg1;
- (void)jsEditAddress:(id)arg1;
- (unsigned int)startGetLatestAddressControlLogic:(id)arg1 jsEvent:(id)arg2;
- (unsigned int)startAddressEntranceControlLogic:(id)arg1 entryScene:(int)arg2 logicDelegate:(id)arg3;
- (unsigned int)startAddressEntranceControlLogic:(id)arg1;
- (unsigned int)startEditAddressControlLogic:(id)arg1 jsEvent:(id)arg2 AuthenticationStruct:(id)arg3;
- (unsigned int)startAddressControlLogic:(id)arg1 jsEvent:(id)arg2;
- (unsigned int)startEditAddressControlLogic:(id)arg1;
- (unsigned int)startGetAddressControlLogic:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

