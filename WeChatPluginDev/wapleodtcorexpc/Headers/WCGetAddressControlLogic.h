//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAddressControlData;
@protocol WCGetAddressControlLogicDelegate;

@interface WCGetAddressControlLogic
{
    WCAddressControlData *m_data;
    id <WCGetAddressControlLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCGetAddressControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnNotAcceptGetLatestAddress;
- (void)OnImportYiXunAddress:(id)arg1 importStatus:(int)arg2 Error:(id)arg3;
- (void)OnSetRecentlyUsedAddress:(id)arg1 Error:(id)arg2;
- (void)OnModifyAddress:(id)arg1 Error:(id)arg2;
- (void)OnDelAddress:(id)arg1 Error:(id)arg2;
- (void)OnAddAddress:(id)arg1 Error:(id)arg2;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)OnGetAllAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (_Bool)onError:(id)arg1;
- (void)AddressImport;
- (void)AddressListDelete:(id)arg1;
- (void)AddressListEdit:(id)arg1;
- (void)AddressListAdd;
- (void)AddressListComplete:(id)arg1;
- (void)AddressListBack;
- (void)AddressInfoNext:(id)arg1;
- (void)AddressInfoCancel;
- (void)startLogic;
- (void)stopLogic;
- (void)pause;
- (void)resume;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

