//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactSearchLogic, DeepLinkBitSet, GeneralControlBitSet, JSAPIPermissionBitSet, JumpEmoticonDetailCgi, MMTipsViewController, MMUIViewController, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString, NewLifeDetailLinkJumper, SKBuiltinBuffer_t, StrongNotificationScanLogic, WCFinderCreateLiveViewModel, WCFinderQRCodeViewModel, WCRedEnvelopesGetRedPacketPreviewCgi;
@protocol GetA8KeyLogicDelegate;

@interface GetA8KeyLogic
{
    MMUIViewController *m_viewController;
    id <GetA8KeyLogicDelegate> m_delegate;
    NSString *m_nsLastResult;
    NSString *m_nsBundleID;
    JSAPIPermissionBitSet *m_lastPmsBitSet;
    GeneralControlBitSet *m_lastGenCtlBitSet;
    DeepLinkBitSet *m_lastDeepLinkBitSet;
    NSData *m_lastJsApiControlBytes;
    NSMutableDictionary *m_wifiData;
    unsigned int _lastRequestID;
    SKBuiltinBuffer_t *_lastA8KeyCookie;
    CContact *m_deviceContact;
    NSDictionary *m_deviceData;
    double startTime;
    ContactSearchLogic *m_ContactSearchLogic;
    StrongNotificationScanLogic *m_strongNotificationScanLogic;
    unsigned int _m_reportSourceScene;
    unsigned int _searchContactEventID;
    unsigned int _getA8KeyEventID;
    unsigned int _getA8keySubScene;
    unsigned int _getA8KeyScene;
    JumpEmoticonDetailCgi *m_jumpEmoticonDetailCgi;
    NSString *_m_reportSourceUserName;
    NSString *_m_reportMsgUserName;
    NSString *_m_reportMsgId;
    NSNumber *_m_reportContentType;
    NSNumber *_m_reportMessageInnerType;
    NSString *_m_reportWxaPathWithQuery;
    MMTipsViewController *_tipsViewController;
    WCRedEnvelopesGetRedPacketPreviewCgi *_m_getRedPacketPreviewCgi;
    WCFinderQRCodeViewModel *_qrcodeViewModel;
    WCFinderCreateLiveViewModel *_createLiveVM;
    NewLifeDetailLinkJumper *_linkJumperForNewLife;
    NSString *_m_sessionKey;
    NSString *_fromBizUser;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fromBizUser; // @synthesize fromBizUser=_fromBizUser;
@property(nonatomic) unsigned int getA8KeyScene; // @synthesize getA8KeyScene=_getA8KeyScene;
@property(nonatomic) unsigned int getA8keySubScene; // @synthesize getA8keySubScene=_getA8keySubScene;
@property(copy, nonatomic) NSString *m_sessionKey; // @synthesize m_sessionKey=_m_sessionKey;
@property(nonatomic) unsigned int getA8KeyEventID; // @synthesize getA8KeyEventID=_getA8KeyEventID;
@property(nonatomic) unsigned int searchContactEventID; // @synthesize searchContactEventID=_searchContactEventID;
@property(retain, nonatomic) NewLifeDetailLinkJumper *linkJumperForNewLife; // @synthesize linkJumperForNewLife=_linkJumperForNewLife;
@property(retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVM; // @synthesize createLiveVM=_createLiveVM;
@property(retain, nonatomic) WCFinderQRCodeViewModel *qrcodeViewModel; // @synthesize qrcodeViewModel=_qrcodeViewModel;
@property(retain, nonatomic) WCRedEnvelopesGetRedPacketPreviewCgi *m_getRedPacketPreviewCgi; // @synthesize m_getRedPacketPreviewCgi=_m_getRedPacketPreviewCgi;
@property(retain, nonatomic) MMTipsViewController *tipsViewController; // @synthesize tipsViewController=_tipsViewController;
@property(retain, nonatomic) NSString *m_reportWxaPathWithQuery; // @synthesize m_reportWxaPathWithQuery=_m_reportWxaPathWithQuery;
@property(retain, nonatomic) NSNumber *m_reportMessageInnerType; // @synthesize m_reportMessageInnerType=_m_reportMessageInnerType;
@property(retain, nonatomic) NSNumber *m_reportContentType; // @synthesize m_reportContentType=_m_reportContentType;
@property(retain, nonatomic) NSString *m_reportMsgId; // @synthesize m_reportMsgId=_m_reportMsgId;
@property(retain, nonatomic) NSString *m_reportMsgUserName; // @synthesize m_reportMsgUserName=_m_reportMsgUserName;
@property(retain, nonatomic) NSString *m_reportSourceUserName; // @synthesize m_reportSourceUserName=_m_reportSourceUserName;
@property(nonatomic) unsigned int m_reportSourceScene; // @synthesize m_reportSourceScene=_m_reportSourceScene;
@property(nonatomic) __weak id <GetA8KeyLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) JumpEmoticonDetailCgi *m_jumpEmoticonDetailCgi; // @synthesize m_jumpEmoticonDetailCgi;
- (void)didClickBack:(id)arg1;
- (void)handleFinderFeedQRCodeUrlFailureWithErrorCode:(int)arg1 errorMsg:(id)arg2;
- (void)handleFinderFeedQRCodeUrlSuccess;
- (void)handleFinderUserQRCodeUrlFailure;
- (void)handleFinderUserQRCodeUrlSuccess;
- (unsigned long long)getFinderEntryScene;
- (id)getOuterUrl;
- (id)getLastUrlIfScanQRCodeFromWebView;
- (id)getFirstUrlIfScanQRCodeFromWebView;
- (void)fillInfoVCIfScanQRCodeFromWebView:(id)arg1;
- (id)getJumpFromWeAppAppidForLongPressCode:(unsigned long long)arg1 preScene:(unsigned long long)arg2 preSceneNote:(id)arg3;
- (id)getViewController;
- (void)OnGetRemoteProductItem:(id)arg1 QRCodeUrl:(id)arg2 Error:(int)arg3;
- (void)onNeedReStartScanQRCode;
- (void)onJumpEmoticonDetailCgiFailed:(id)arg1;
- (void)onJumpEmoticonDetailCgiOkWithPackageId:(id)arg1;
- (void)jumpToDeviceSearchGuideViewControllerWithUserData:(id)arg1;
- (void)jumpToMyDeviceInfoViewController:(id)arg1 userData:(id)arg2;
- (void)jumpToContactInfoViewController:(id)arg1 userData:(id)arg2;
- (void)onWCDeviceBrandSearch:(id)arg1 respData:(id)arg2 fliterStatus:(unsigned int)arg3;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)jumpToFinderDetailFromURL:(id)arg1 scene:(long long)arg2;
- (void)showNotSupportTips;
- (void)cancelGetA8Key;
- (void)cancelSearchContact;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSearchContactResp:(id)arg1;
- (void)onContactSearchLogicFail:(id)arg1;
- (void)onContactSearchLogicDone:(id)arg1 FromScene:(unsigned int)arg2;
- (void)onContactSearchCGIEnd;
- (void)onContactSearchLogicResearch:(id)arg1;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiResponseOK:(id)arg1;
- (void)call:(id)arg1;
- (void)OnGetA8Key:(id)arg1;
- (void)showContactInfoView:(id)arg1 QRCodeScene:(unsigned long long)arg2 alertWording:(id)arg3;
- (void)doSearchContact:(id)arg1 FromScene:(unsigned int)arg2 SearchScene:(unsigned int)arg3 resultString:(id)arg4 subScene:(unsigned int)arg5 picUrl:(id)arg6 picEncKey:(id)arg7 sourceType:(unsigned int)arg8;
- (void)doSearchContact:(id)arg1 FromScene:(unsigned int)arg2 SearchScene:(unsigned int)arg3 picUrl:(id)arg4;
- (void)doSearchContact:(id)arg1 SearchScene:(unsigned int)arg2 picUrl:(id)arg3;
- (void)onAlertAppConfirm;
- (void)onAlertWebConfirm;
- (void)onSearchContactHandleEnd;
- (void)doUnknow:(id)arg1;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 codeType:(unsigned int)arg3 codeVersion:(unsigned int)arg4 appId:(id)arg5 userName:(id)arg6 getA8KeyRequestId:(unsigned int)arg7;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 codeType:(unsigned int)arg3 codeVersion:(unsigned int)arg4 appId:(id)arg5 userName:(id)arg6;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 codeType:(unsigned int)arg3 codeVersion:(unsigned int)arg4 appId:(id)arg5;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 subScene:(unsigned int)arg3 codeType:(unsigned int)arg4 codeVersion:(unsigned int)arg5 fromUser:(id)arg6 reqSourceUsername:(id)arg7 appId:(id)arg8 getA8KeyRequestId:(unsigned int)arg9;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 subScene:(unsigned int)arg3 codeType:(unsigned int)arg4 codeVersion:(unsigned int)arg5 fromUser:(id)arg6;
- (void)setGetA8KeyBundleID:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

