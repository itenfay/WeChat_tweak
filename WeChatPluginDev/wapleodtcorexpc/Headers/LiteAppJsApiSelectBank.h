//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPaySelectBankViewController, WCPayT2BCGetBankListCgi;

@interface LiteAppJsApiSelectBank
{
    WCPaySelectBankViewController *_selectBankVC;
    WCPayT2BCGetBankListCgi *_getBankListCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayT2BCGetBankListCgi *getBankListCgi; // @synthesize getBankListCgi=_getBankListCgi;
@property(nonatomic) __weak WCPaySelectBankViewController *selectBankVC; // @synthesize selectBankVC=_selectBankVC;
- (void)OnGetBankListWithError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetBankListOK:(id)arg1 allBankList:(id)arg2;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

