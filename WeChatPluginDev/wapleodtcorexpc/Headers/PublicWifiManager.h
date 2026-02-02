//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class APAccess, APAuth, APCheck, APCheckPwd, APPortal, CContact, MMUIViewController, MMWebViewController, NSArray, NSMutableDictionary, NSString, PublicWifiCache;

@interface PublicWifiManager
{
    _Bool _isOnWifi;
    _Bool _isWifiChanged;
    _Bool _hasDoWifiManager;
    _Bool _isWaitingUserConfirm;
    _Bool _isOpenUrlProcessing;
    _Bool _isWaitingBindPhone;
    _Bool _isRegisterHotspotInterface;
    unsigned int _gAnnotationSwith;
    unsigned int _annotationExpire;
    NSString *_currSSID;
    NSString *_currMAC;
    PublicWifiCache *_cache;
    CContact *_currContact;
    NSArray *_networkList;
    APAuth *_apAuth;
    APCheck *_apCheck;
    APAccess *_apAccess;
    APCheckPwd *_apCheckPwd;
    APPortal *_apPortal;
    APCheckPwd *_successedPwd;
    APPortal *_successedPortal;
    MMWebViewController *_abroadApAuthWebViewController;
    MMUIViewController *_connectWebViewControler;
    NSString *_proto4ToConnectSSID;
    NSString *_proto4ToConnectPassword;
    NSMutableDictionary *_knownProtocol3HotspotsList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *knownProtocol3HotspotsList; // @synthesize knownProtocol3HotspotsList=_knownProtocol3HotspotsList;
@property(retain, nonatomic) NSString *proto4ToConnectPassword; // @synthesize proto4ToConnectPassword=_proto4ToConnectPassword;
@property(retain, nonatomic) NSString *proto4ToConnectSSID; // @synthesize proto4ToConnectSSID=_proto4ToConnectSSID;
@property(retain, nonatomic) MMUIViewController *connectWebViewControler; // @synthesize connectWebViewControler=_connectWebViewControler;
@property(retain, nonatomic) MMWebViewController *abroadApAuthWebViewController; // @synthesize abroadApAuthWebViewController=_abroadApAuthWebViewController;
@property(retain, nonatomic) APPortal *successedPortal; // @synthesize successedPortal=_successedPortal;
@property(retain, nonatomic) APCheckPwd *successedPwd; // @synthesize successedPwd=_successedPwd;
@property(nonatomic) _Bool isRegisterHotspotInterface; // @synthesize isRegisterHotspotInterface=_isRegisterHotspotInterface;
@property(nonatomic) _Bool isWaitingBindPhone; // @synthesize isWaitingBindPhone=_isWaitingBindPhone;
@property(retain, nonatomic) APPortal *apPortal; // @synthesize apPortal=_apPortal;
@property(retain, nonatomic) APCheckPwd *apCheckPwd; // @synthesize apCheckPwd=_apCheckPwd;
@property(retain, nonatomic) APAccess *apAccess; // @synthesize apAccess=_apAccess;
@property(retain, nonatomic) APCheck *apCheck; // @synthesize apCheck=_apCheck;
@property(retain, nonatomic) APAuth *apAuth; // @synthesize apAuth=_apAuth;
@property(nonatomic) _Bool isOpenUrlProcessing; // @synthesize isOpenUrlProcessing=_isOpenUrlProcessing;
@property(nonatomic) _Bool isWaitingUserConfirm; // @synthesize isWaitingUserConfirm=_isWaitingUserConfirm;
@property(nonatomic) unsigned int annotationExpire; // @synthesize annotationExpire=_annotationExpire;
@property(nonatomic) _Bool hasDoWifiManager; // @synthesize hasDoWifiManager=_hasDoWifiManager;
@property(nonatomic) _Bool isWifiChanged; // @synthesize isWifiChanged=_isWifiChanged;
@property(retain, nonatomic) NSArray *networkList; // @synthesize networkList=_networkList;
@property(nonatomic) unsigned int gAnnotationSwith; // @synthesize gAnnotationSwith=_gAnnotationSwith;
@property(retain, nonatomic) CContact *currContact; // @synthesize currContact=_currContact;
@property(nonatomic) _Bool isOnWifi; // @synthesize isOnWifi=_isOnWifi;
@property(retain, nonatomic) PublicWifiCache *cache; // @synthesize cache=_cache;
@property(copy, nonatomic) NSString *currMAC; // @synthesize currMAC=_currMAC;
@property(copy, nonatomic) NSString *currSSID; // @synthesize currSSID=_currSSID;
- (id)forgroundAppTask;
- (_Bool)isHotspotValidAndInList:(id)arg1 macAddr:(id)arg2;
- (void)registerHotspotHelper;
- (void)delayConfig;
- (void)sendCloseEventToObserver;
- (void)showErrorViewControllerWithErrMsg:(id)arg1 fromViewContorller:(id)arg2;
- (void)showGuidePageAfterScanQrCodeOfApPortal;
- (void)refreshApAuthPageIfNeed;
- (_Bool)isBindAboardPhone;
- (void)showBindPhoneViewFromFrontPage;
- (void)logout;
- (void)cleanCache;
- (id)showUrlOfCurrApAuth;
- (_Bool)shouldOpenWebview;
- (id)ssidOfApAuth;
- (int)stateOfApAuth;
- (void)userConfirm;
- (void)onPublicWifiApInfoViewContorllerWillGoBack;
- (void)didFailedWithApCheckPwd:(id)arg1 errorMsg:(id)arg2;
- (void)gotoFrontPageWithApPortal:(id)arg1;
- (void)gotoApPortalWithApCheckPwd:(id)arg1 tid:(id)arg2 openId:(id)arg3 appid:(id)arg4;
- (void)gotoApAuthWithApCheckPwd:(id)arg1 protolType:(unsigned int)arg2;
- (void)didSuccessOfApCheckPwd:(id)arg1;
- (void)didRunningOfApCheckPwd:(id)arg1;
- (void)didReadyWithApCheckPwd:(id)arg1 protolType:(unsigned int)arg2;
- (void)didFailOfApCheck:(id)arg1 withErrCode:(int)arg2;
- (void)didSuccessOfApCheck:(id)arg1;
- (void)didFailOfAPPortal:(id)arg1 errMsg:(id)arg2;
- (void)didSuccessOfAPPortal:(id)arg1;
- (void)didStartApPortal:(id)arg1;
- (void)didReadyOfApPortal:(id)arg1;
- (void)didExpiredOfApAuth:(id)arg1;
- (void)didFailOfApAuth:(id)arg1 withErrCode:(int)arg2;
- (void)didSuccessOfApAuth:(id)arg1;
- (void)didStartApAuth:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)resetWaitingFlagWhenFailed;
- (id)getAbroadApAuthUrlWithSSID:(id)arg1;
- (_Bool)isUserStayOnConnectingView;
- (void)handleOffWifi;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onAuthOK;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

