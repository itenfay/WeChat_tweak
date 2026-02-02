//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, QRCodeLoginLogic, WCAccountManualAuthControlLogic, WCPlayLiveWithoutLoginControlLogic;

@interface WCAccountQRCodeLoginControlLogic
{
    QRCodeLoginLogic *m_qrcodeLoginLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    WCPlayLiveWithoutLoginControlLogic *_m_playLiveWthioutLoginLoigc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayLiveWithoutLoginControlLogic *m_playLiveWthioutLoginLoigc; // @synthesize m_playLiveWthioutLoginLoigc=_m_playLiveWthioutLoginLoigc;
- (void)onLaunchOpenFirstView;
- (void)onMainControllStart;
- (void)onPlayLiveWithoutLogin;
- (void)onCancelLogin;
- (void)onCancel;
- (void)onRefreshBtnClicked;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)startLogic;
- (id)OnQRCodeLogicGetCurrentViewController;
- (void)OnQRCodeLoginCancel;
- (void)OnQRCodeLoginExpired;
- (void)OnQRCodeLoginConfirmedWithUserName:(id)arg1 pwd:(id)arg2 nickName:(id)arg3 headImgURL:(id)arg4;
- (void)OnQRCodeLoginScaned:(id)arg1 nickName:(id)arg2 authUrl:(id)arg3;
- (void)OnQRCodeLoginReciveImage:(id)arg1 expiredTime:(unsigned int)arg2 loginURL:(id)arg3;
- (void)OnQRCodeLoginFail;
- (void)OnQRCodeLoginUUIDExipred;
- (void)sendGetQRCodeRequest;
- (id)getQRCodeLoginLogic;
- (void)startGetQRCode;
- (void)onQRCodeLoginUserName:(id)arg1 Pwd:(id)arg2 nickName:(id)arg3 headImgURL:(id)arg4;
- (id)getQRCodeViewController;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

