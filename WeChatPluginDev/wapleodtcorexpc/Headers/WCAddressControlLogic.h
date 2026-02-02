//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCAddressAuthenticationSturct, WCAddressControlData;

@interface WCAddressControlLogic
{
    JSEvent *m_jsEvent;
    WCAddressControlData *m_data;
    WCAddressAuthenticationSturct *m_oWCAddressAuthenticationStruct;
    NSString *m_nsUserName;
}

- (void).cxx_destruct;
- (void)OnNotAcceptGetLatestAddress;
- (void)OnImportYiXunAddress:(id)arg1 importStatus:(int)arg2 Error:(id)arg3;
- (void)OnAnalyseAddressInfo:(id)arg1;
- (void)OnSetRecentlyUsedAddress:(id)arg1 Error:(id)arg2;
- (void)OnModifyAddress:(id)arg1 Error:(id)arg2;
- (void)OnDelAddress:(id)arg1 Error:(id)arg2;
- (void)OnAddAddress:(id)arg1 Error:(id)arg2;
- (void)OnGetAllFourthAddressStageData:(id)arg1 Error:(id)arg2;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)OnGetAllAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (_Bool)onError:(id)arg1;
- (void)AddressImport;
- (void)AddressListDelete:(id)arg1;
- (void)AddressListEdit:(id)arg1;
- (void)AddressListAdd;
- (void)AddressListComplete:(id)arg1;
- (void)AddressListBack;
- (void)AddressInfoAnalysic:(id)arg1;
- (void)AddressInfoNext:(id)arg1;
- (void)AddressInfoCancel;
- (void)setIsInGiftMode:(_Bool)arg1;
- (void)setDirectOpenAddAddress:(_Bool)arg1;
- (void)setNeedDismissToParentVCOnAddAddress:(_Bool)arg1;
- (void)setForbidDarkmode:(_Bool)arg1;
- (void)setIsInSheetMode:(_Bool)arg1;
- (void)setNeedStatusBarInset:(_Bool)arg1;
- (void)startLogic;
- (void)EndWCAddressControlLogic;
- (void)stopLogic;
- (void)stopForceRotationToPortrait;
- (void)startForceRotationToPortrait;
- (void)pause;
- (void)resume;
- (void)stopLoading;
- (void)startLoading;
- (id)getLatestAddress;
- (id)initWithJSEvent:(id)arg1 AuthenticationStruct:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

