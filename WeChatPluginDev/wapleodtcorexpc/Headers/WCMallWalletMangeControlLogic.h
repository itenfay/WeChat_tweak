//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayWalletBatchFunctionOperateCgi, WCPayWalletGetFunctionSwitchListCgi;
@protocol WCMallWalletMangeControlLogicDelegate;

@interface WCMallWalletMangeControlLogic
{
    id <WCMallWalletMangeControlLogicDelegate> m_delegate;
    WCPayWalletGetFunctionSwitchListCgi *_getListCgi;
    WCPayWalletBatchFunctionOperateCgi *_batchOperateCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayWalletBatchFunctionOperateCgi *batchOperateCgi; // @synthesize batchOperateCgi=_batchOperateCgi;
@property(retain, nonatomic) WCPayWalletGetFunctionSwitchListCgi *getListCgi; // @synthesize getListCgi=_getListCgi;
- (void)onWCPayWalletBatchFunctionOperateCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCBizMainViewControllerGetFuncDone;
- (void)onWCPayWalletBatchFunctionOperateCgiResponseOK:(id)arg1;
- (void)OnWCPayMallFuncManageViewControllerBatchOperate:(id)arg1;
- (_Bool)isWCPayMallFuncManagerViewControllerBePresent;
- (void)OnWCPayMallFuncManageViewControllerCancel;
- (void)onWCPayWalletGetFunctionSwitchListCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayWalletGetFunctionSwitchListCgiResponseOK:(id)arg1;
- (void)startLogic;
- (void)setControlLogicDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

