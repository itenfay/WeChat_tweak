//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString, WCPayControlData;

@interface WCMallMobileChargeControlLogic
{
    WCPayControlData *m_oPayData;
    _Bool m_bNeedFirstGotoWCMallProductView;
    NSDictionary *dicPayedInfo;
    _Bool bHasTwoCGIRequestInStartLogic;
    _Bool bHasOneCGIHasResponsed;
    _Bool _bIsAddressBookLoading;
    _Bool _bHasLoadAddressBook;
    NSArray *_svrRetChangeHistory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *svrRetChangeHistory; // @synthesize svrRetChangeHistory=_svrRetChangeHistory;
@property(nonatomic) _Bool bHasLoadAddressBook; // @synthesize bHasLoadAddressBook=_bHasLoadAddressBook;
@property(nonatomic) _Bool bIsAddressBookLoading; // @synthesize bIsAddressBookLoading=_bIsAddressBookLoading;
@property(nonatomic) _Bool m_bNeedFirstGotoWCMallProductView; // @synthesize m_bNeedFirstGotoWCMallProductView;
- (void)setTelphoneOwnerName:(id)arg1 telString:(id)arg2;
- (void)checkHistoryData;
- (void)tryLoadAddressBook;
- (void)requestAccessForContactsDone:(_Bool)arg1;
- (void)loadAddressBookData;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (id)genTargetUrlFromOriginUrl:(id)arg1 withPhone:(id)arg2 remark:(id)arg3 transid:(id)arg4 reqkey:(id)arg5;
- (void)checkSuccessStopCurrentLogicWithPhone:(id)arg1 remark:(id)arg2;
- (id)getAddressbookRemarkWithPhoneNum:(id)arg1;
- (void)handleSvrRetNumberList:(id)arg1;
- (void)OnGetWCMallPayDeleteChargeHistoryResponse:(id)arg1 Error:(id)arg2;
- (void)OnGetWCMallPayFunctionListRequest:(id)arg1 Error:(id)arg2;
- (void)OnGetWCMallFunctionList:(id)arg1 GlobalList:(id)arg2 BroadCastInfo:(id)arg3 BannerList:(id)arg4 response:(id)arg5 FromCached:(_Bool)arg6 NotShowTutorial:(_Bool)arg7 typeMap:(id)arg8 Error:(id)arg9;
- (_Bool)IsNeedShowChargeEnsureAlertView;
- (void)OnWCMallChargePhoneTelephoneInputComplete:(id)arg1;
- (void)OnWCMallChargePhoneClearOldList;
- (id)GetWCMallMallProductsFiltedOldList:(id)arg1;
- (_Bool)IsUsedWCMallMallProduct;
- (void)OnWCMallChargeMobileViewControllerSelectedProduct:(id)arg1;
- (void)OnWCMallInputedCompleteTelphone:(id)arg1;
- (void)OnWCMallChargeMobileViewControllerRightActionBack;
- (void)OnWCMallChargeMobileViewControllerBack;
- (void)stopLogic;
- (void)startLogic;
- (void)SetPayData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

