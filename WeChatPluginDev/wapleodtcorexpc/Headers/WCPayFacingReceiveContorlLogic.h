//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMWebViewController, NSString, WCPayApplyQrcodeCgi, WCPayF2FQrcodeCgi, WCPayF2fShortTermQrcodeCgi, WCPayFacingReceiveQRCodeViewController, WCPayGetMchQRCodeCgi, WCPayMchCodeVoiceOperateCgi, WCPayMchShortTermQrcodeCgi, WCPayNotifyMchQRCodeSaveCgi, WCPayQrcodeSaveNotifyCgi, WCPaySaveMchQRCodeCgi, WCPaySaveQrcodeCgi;

@interface WCPayFacingReceiveContorlLogic
{
    NSString *m_nsFacingAmountTotalMoney;
    NSString *m_nsFacingAmountDesc;
    _Bool _m_isSoundOn;
    _Bool _m_bHasReportBottomDetailItem;
    _Bool _m_isOnBackground;
    _Bool _bHasReportShowPage;
    _Bool _refresh_url_has_processed_user;
    _Bool _refresh_url_has_processed_mch;
    int _currentCodeType;
    WCPayF2FQrcodeCgi *_m_getQRCodeCgi;
    WCPayApplyQrcodeCgi *_m_applyQRCodeCgi;
    WCPaySaveQrcodeCgi *_m_saveQRCodeCgi;
    WCPayQrcodeSaveNotifyCgi *_qrcodeSaveNotifyCgi;
    MMWebViewController *_uploadIdWebView;
    WCPayGetMchQRCodeCgi *_getMchQRCodeCgi;
    WCPaySaveMchQRCodeCgi *_saveMchQRCodeCgi;
    WCPayNotifyMchQRCodeSaveCgi *_notifyMchQRCodeSaveCgi;
    WCPayMchCodeVoiceOperateCgi *_mchCodeVoiceOperateCgi;
    WCPayFacingReceiveQRCodeViewController *_m_WCPayFacingReceiveQRCodeViewController;
    WCPayF2fShortTermQrcodeCgi *_shortTermQrcodeCgi;
    MMTimer *_getUserShortTermCodeTimer;
    MMTimer *_getUserShortTermCodeErrorTimer;
    long long _refresh_url_last_time_user;
    long long _fixed_refresh_url_last_time_user;
    WCPayMchShortTermQrcodeCgi *_shortTermQrcodeMchCgi;
    MMTimer *_getMchShortTermCodeTimer;
    MMTimer *_getMchShortTermCodeErrorTimer;
    long long _refresh_url_last_time_mch;
    long long _fixed_refresh_url_last_time_mch;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool refresh_url_has_processed_mch; // @synthesize refresh_url_has_processed_mch=_refresh_url_has_processed_mch;
@property(nonatomic) long long fixed_refresh_url_last_time_mch; // @synthesize fixed_refresh_url_last_time_mch=_fixed_refresh_url_last_time_mch;
@property(nonatomic) long long refresh_url_last_time_mch; // @synthesize refresh_url_last_time_mch=_refresh_url_last_time_mch;
@property(retain, nonatomic) MMTimer *getMchShortTermCodeErrorTimer; // @synthesize getMchShortTermCodeErrorTimer=_getMchShortTermCodeErrorTimer;
@property(retain, nonatomic) MMTimer *getMchShortTermCodeTimer; // @synthesize getMchShortTermCodeTimer=_getMchShortTermCodeTimer;
@property(retain, nonatomic) WCPayMchShortTermQrcodeCgi *shortTermQrcodeMchCgi; // @synthesize shortTermQrcodeMchCgi=_shortTermQrcodeMchCgi;
@property(nonatomic) _Bool refresh_url_has_processed_user; // @synthesize refresh_url_has_processed_user=_refresh_url_has_processed_user;
@property(nonatomic) long long fixed_refresh_url_last_time_user; // @synthesize fixed_refresh_url_last_time_user=_fixed_refresh_url_last_time_user;
@property(nonatomic) long long refresh_url_last_time_user; // @synthesize refresh_url_last_time_user=_refresh_url_last_time_user;
@property(retain, nonatomic) MMTimer *getUserShortTermCodeErrorTimer; // @synthesize getUserShortTermCodeErrorTimer=_getUserShortTermCodeErrorTimer;
@property(retain, nonatomic) MMTimer *getUserShortTermCodeTimer; // @synthesize getUserShortTermCodeTimer=_getUserShortTermCodeTimer;
@property(retain, nonatomic) WCPayF2fShortTermQrcodeCgi *shortTermQrcodeCgi; // @synthesize shortTermQrcodeCgi=_shortTermQrcodeCgi;
@property(nonatomic) __weak WCPayFacingReceiveQRCodeViewController *m_WCPayFacingReceiveQRCodeViewController; // @synthesize m_WCPayFacingReceiveQRCodeViewController=_m_WCPayFacingReceiveQRCodeViewController;
@property(nonatomic) _Bool bHasReportShowPage; // @synthesize bHasReportShowPage=_bHasReportShowPage;
@property(retain, nonatomic) WCPayMchCodeVoiceOperateCgi *mchCodeVoiceOperateCgi; // @synthesize mchCodeVoiceOperateCgi=_mchCodeVoiceOperateCgi;
@property(retain, nonatomic) WCPayNotifyMchQRCodeSaveCgi *notifyMchQRCodeSaveCgi; // @synthesize notifyMchQRCodeSaveCgi=_notifyMchQRCodeSaveCgi;
@property(retain, nonatomic) WCPaySaveMchQRCodeCgi *saveMchQRCodeCgi; // @synthesize saveMchQRCodeCgi=_saveMchQRCodeCgi;
@property(retain, nonatomic) WCPayGetMchQRCodeCgi *getMchQRCodeCgi; // @synthesize getMchQRCodeCgi=_getMchQRCodeCgi;
@property(nonatomic) int currentCodeType; // @synthesize currentCodeType=_currentCodeType;
@property(retain, nonatomic) MMWebViewController *uploadIdWebView; // @synthesize uploadIdWebView=_uploadIdWebView;
@property(nonatomic) _Bool m_isOnBackground; // @synthesize m_isOnBackground=_m_isOnBackground;
@property(nonatomic) _Bool m_bHasReportBottomDetailItem; // @synthesize m_bHasReportBottomDetailItem=_m_bHasReportBottomDetailItem;
@property(retain, nonatomic) WCPayQrcodeSaveNotifyCgi *qrcodeSaveNotifyCgi; // @synthesize qrcodeSaveNotifyCgi=_qrcodeSaveNotifyCgi;
@property(retain, nonatomic) WCPaySaveQrcodeCgi *m_saveQRCodeCgi; // @synthesize m_saveQRCodeCgi=_m_saveQRCodeCgi;
@property(retain, nonatomic) WCPayApplyQrcodeCgi *m_applyQRCodeCgi; // @synthesize m_applyQRCodeCgi=_m_applyQRCodeCgi;
@property(retain, nonatomic) WCPayF2FQrcodeCgi *m_getQRCodeCgi; // @synthesize m_getQRCodeCgi=_m_getQRCodeCgi;
@property(nonatomic) _Bool m_isSoundOn; // @synthesize m_isSoundOn=_m_isSoundOn;
- (_Bool)hasMchQrcode;
- (void)onViewEnterBackground:(id)arg1;
- (void)onViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)doGetShortTermQrCodeError:(int)arg1;
- (void)doGetMchShortTermQrCodeError;
- (void)doGetUserShortTermQrCodeError;
- (void)startShortTermQrCodeErrorTimer:(int)arg1;
- (void)continueOnSuccessfullyGetMchShortTermQrcodeResp:(int)arg1 hasDesc:(_Bool)arg2;
- (void)onCgiGetMchShortTermQrcodeResp:(id)arg1;
- (void)continueOnSuccessfullyGetShortTermQrcodeResp:(int)arg1 hasDesc:(_Bool)arg2;
- (void)onCgiGetShortTermQrcodeResp:(id)arg1;
- (void)doGetShortTermQrCodeForFixedAmount:(int)arg1 Money:(unsigned long long)arg2 Description:(id)arg3;
- (void)doGetShortTermQrCode:(int)arg1 isFixedCode:(_Bool)arg2 isHardRefresh:(_Bool)arg3 isTimeoutRefresh:(_Bool)arg4;
- (void)doGetUserShortTermQrCode:(_Bool)arg1;
- (void)doGetUserShortTermQrCodeActively;
- (void)doGetUserShortTermQrCode;
- (void)doGetMchShortTermQrCodeWithLoading:(_Bool)arg1;
- (void)doGetMchShortTermQrCode:(_Bool)arg1;
- (void)doGetMchShortTermQrCodeActively;
- (void)doGetMchShortTermQrCode;
- (void)startShortTermQrCodeTimer:(int)arg1;
- (void)updateMchCodeVoiceSwitchWithState:(_Bool)arg1;
- (void)onGetMchCodeVoiceOperateCgiResp:(id)arg1;
- (void)requestMchCodeVoiceOperateWithScene:(unsigned int)arg1;
- (void)onGetNotifyMchQRCodeSaveCgiResp:(id)arg1;
- (void)requestMchQRCodeSaveNotify:(unsigned int)arg1 isFixedCode:(_Bool)arg2;
- (void)onGetSaveMchQRCodeCgiResp:(id)arg1;
- (void)onGetMchQRCodeCgiResp:(id)arg1;
- (void)requestGetMchCodeUrlFromSvrNeedLoadCache:(_Bool)arg1;
- (_Bool)isMchCodeAbtestOpen;
- (void)WCPayFacingReceiveRefreshVoiceOperationSetting;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSyncOplogSuccess;
- (void)handleSyncOplogFail;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)updateSoundOn:(_Bool)arg1;
- (void)WCPayFacingReceiveSettingSoundSwicthState:(_Bool)arg1;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(id)arg1;
- (void)WCPayFacingReceiveFixedAmountViewControllerNext:(id)arg1 Description:(id)arg2;
- (void)WCPayFacingReceiveFixedAmountViewControllerCancel:(_Bool)arg1;
- (void)refreshViewController;
- (void)reportShowPage;
- (id)currentReceiveOptionInfo;
- (_Bool)isReceiveOptionEnabled;
- (_Bool)isShowingUserFacingReceiveCode;
- (void)VerifyUserInfo;
- (void)playVibration;
- (void)webViewReturn:(id)arg1;
- (void)onWCPayQrcodeSaveNotifyCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayQrcodeSaveNotifyCgiResp:(id)arg1;
- (void)requestQRCodeSaveNotify:(unsigned int)arg1 isFixedCode:(_Bool)arg2;
- (void)onGetF2FQrcodeError:(long long)arg1 errorMsg:(id)arg2;
- (void)onGetF2FQrcode:(id)arg1;
- (void)onSaveQrcodeError:(long long)arg1 errorMsg:(id)arg2;
- (void)onSaveQrcode:(id)arg1;
- (void)onApplyQrcodeError:(long long)arg1 errorMsg:(id)arg2;
- (void)onApplyQrcode:(id)arg1;
- (void)needRefreshMchCodeDataFromSvr;
- (void)userChangeFacingReceiveCodeType:(int)arg1;
- (int)getCurrentFacingReceiveCodeType;
- (void)WCPayFacingReceiveNotifySaveQRCode:(unsigned int)arg1 isFixedCode:(_Bool)arg2;
- (void)WCPayFacingReceiveSaveQRCode:(id)arg1 feeType:(id)arg2 usage:(id)arg3 latitude:(id)arg4 longtitude:(id)arg5 timeStamp:(id)arg6 saveNotifyInfo:(id)arg7 desc:(id)arg8;
- (void)WCPayFacingReceiveApplyQRCode:(id)arg1;
- (id)WCPayFacingReceiveGetOfflineSlogan;
- (id)WCPayFacingReceiveGetOfflineLogo;
- (void)WCPayFacingReceiveSaveQRCodeImageFromAlert;
- (void)WCPayFacingReceiveSaveQRCodeImage;
- (void)WCPayFacingReceiveViewReceiveDetail;
- (void)WCPayFacingReceiveNoTruthNameBtnDone;
- (void)WCPayFacingReceiveWitchBalance;
- (void)WCPayFacingReceiveChangeToUnFixedAmount;
- (void)WCPayFacingReceiveChangeToFixedAmount;
- (void)WCPayFacingReceiveQRCodeViewControllerCancel;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

