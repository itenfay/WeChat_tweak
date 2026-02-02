//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayFaceHBGetLogic, WCPayFaceHBPayLogic;

@interface WCPayFaceHBMgr
{
    WCPayFaceHBPayLogic *m_faceHBPayLogic;
    WCPayFaceHBGetLogic *m_faceHBGetLogic;
}

- (void).cxx_destruct;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)mergeFaceHBReceiverInfo:(id)arg1 withOldInfo:(id)arg2;
- (id)getContactFromUserName:(id)arg1;
- (void)OnFaceHBGetLogicCancel;
- (void)startFaceHBGetLogic:(id)arg1 withQRCode:(id)arg2 withQRCodeHandle:(id)arg3;
- (void)OnFaceHBPayLogicCancel;
- (void)startFaceHBPayLogic:(id)arg1;
- (unsigned long long)getBigAmount;
- (id)dataForResource:(id)arg1 ofType:(id)arg2;
- (id)getTmpPath;
- (id)getResourcePath;
- (id)getConfigPath;
- (id)getRootPath;
- (void)checkResouce;
- (void)deleteResource;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)saveMount:(unsigned long long)arg1 Count:(unsigned int)arg2;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

