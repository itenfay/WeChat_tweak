//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WxSmCertUtil;

@interface WCPayOfflinePayTsmLogicMgr
{
    WxSmCertUtil *_smCertUtil;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WxSmCertUtil *smCertUtil; // @synthesize smCertUtil=_smCertUtil;
- (id)getTsmSignUserId;
- (void)updateTsmCertWithCAVersion:(id)arg1 rootCaChains:(id)arg2;
- (id)getTsmCertCAVersion;
- (id)decryptByTsmCert:(id)arg1 message:(id)arg2;
- (_Bool)importTsmCert:(id)arg1 crt:(id)arg2;
- (id)getTsmCSR:(id)arg1;
- (_Bool)setTsmTokenCode:(id)arg1 certId:(id)arg2;
- (int)getRemainTsmTokenCount:(id)arg1;
- (_Bool)deleteTsmCert:(id)arg1;
- (void)cleanTsmToken:(id)arg1;
- (id)getTsmToken:(id)arg1;
- (id)getTsmCertSign:(id)arg1 message:(id)arg2;
- (id)getTokenPrefix;
- (_Bool)isOfflinePayCertExists:(id)arg1;
- (void)reloadOfflineTsmCertObj;
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

