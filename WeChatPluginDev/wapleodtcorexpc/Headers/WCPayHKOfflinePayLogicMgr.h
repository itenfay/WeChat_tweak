//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, MMVoidBoolCallback, NSString, TenpayHKCertUtil;

@interface WCPayHKOfflinePayLogicMgr
{
    TenpayHKCertUtil *_hkCertUtil;
    NSString *_mmkvID;
    MMPageSheetAdapter *_webPageAdapter;
    MMVoidBoolCallback *_webPageSheetCallback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidBoolCallback *webPageSheetCallback; // @synthesize webPageSheetCallback=_webPageSheetCallback;
@property(retain, nonatomic) MMPageSheetAdapter *webPageAdapter; // @synthesize webPageAdapter=_webPageAdapter;
@property(retain, nonatomic) NSString *mmkvID; // @synthesize mmkvID=_mmkvID;
@property(retain, nonatomic) TenpayHKCertUtil *hkCertUtil; // @synthesize hkCertUtil=_hkCertUtil;
- (void)openHKFacingReceiveView;
- (void)openScanQrCodeView;
- (void)webPageSheetWillDismiss:(id)arg1;
- (void)openHalfPageWebViewImpl:(id)arg1 callback:(id)arg2;
- (id)sha256Hex:(id)arg1;
- (id)decryptByAes:(id)arg1 key:(id)arg2 iv:(id)arg3;
- (id)encryptByAes:(id)arg1 key:(id)arg2 iv:(id)arg3;
- (id)genAlgoToken:(id)arg1 type:(int)arg2 uid:(int)arg3 seed:(id)arg4 seedTime:(long long)arg5 currentTime:(long long)arg6 baseStep:(long long)arg7 timeStepSize:(int)arg8;
- (id)decryptByCftCert:(id)arg1 encstr:(id)arg2;
- (_Bool)importCftCert:(id)arg1 crt:(id)arg2;
- (id)getCftCSR:(id)arg1;
- (_Bool)deleteCftCert:(id)arg1;
- (id)getCftCertSign:(id)arg1 message:(id)arg2;
- (id)getOfflinePayAckKey;
- (void)setOfflinePayAckKey:(id)arg1;
- (void)setLastSelectedCVItemId:(id)arg1;
- (id)getLastSelectedCVItemId;
- (void)setLastSelectedCardBindSerial:(id)arg1;
- (id)getLastSelectedCardBindSerial;
- (_Bool)isCertExists:(id)arg1;
- (void)removeCertId;
- (_Bool)setCertId:(id)arg1;
- (id)getCertId;
- (_Bool)setDeviceId:(id)arg1;
- (id)getDeviceId;
- (void)reloadOfflineCertObj;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

