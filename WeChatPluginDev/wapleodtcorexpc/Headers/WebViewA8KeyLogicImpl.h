//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JumpEmoticonDetailCgi, NSMutableDictionary, NSMutableSet, NSString, NSURL, SKBuiltinBuffer_t, UIView, WebviewAskAuthorizationLogic;
@protocol WebViewA8KeyLogicDelegate, YYWebViewInterface;

@interface WebViewA8KeyLogicImpl
{
    unsigned int _firstGetA8KeyOpCode;
    NSString *_firstGetA8KeyAppId;
    NSString *_firstGetA8KeyScope;
    NSString *_firstGetA8KeyState;
    unsigned int _getA8KeyScene;
    struct timeval _getA8KeyStartTime;
    NSString *_bundleId;
    NSString *_getA8KeyUsrname;
    unsigned int _getA8KeyEventId;
    unsigned int _getA8KeyReason;
    NSMutableDictionary *_dicUrlPermission;
    NSMutableDictionary *_dicShareUrlForMainUrl;
    NSMutableDictionary *_dicMenuInfoTitle;
    WebviewAskAuthorizationLogic *_authorizationLogic;
    _Bool _alwaysAllowJumpUrl;
    NSMutableSet *_disableGetA8KeyUrlList;
    id <WebViewA8KeyLogicDelegate> _delegate;
    NSURL *_currentUrl;
    _Bool m_hasSetFontPermission;
    unsigned int m_fontScale;
    UIView<YYWebViewInterface> *_webView;
    NSString *_payWalletFunctionID;
    NSMutableDictionary *_dictUrlWebComInfo;
    vector_0827168c _pIDKeyList;
    NSString *_currentShareUrl;
    NSMutableDictionary *_dictUrl2PushStateShareUrl;
    _Bool _banIframeGetA8key;
    unsigned int _firstGetA8KeyOpcode;
    unsigned int m_RequestID;
    unsigned int _uiPayWalletRegion;
    unsigned int _contentType;
    unsigned int _appMsgInnerType;
    JumpEmoticonDetailCgi *m_jumpEmoticonDetailCgi;
    NSString *_refererUrl;
    NSMutableDictionary *_originalUrl2OfflineA8KeyData;
    SKBuiltinBuffer_t *_a8keyCookie;
    NSString *_firstGetA8KeyRespUrl;
    NSString *_msgUserName;
    NSString *_msgId;
    NSString *_getA8keySceneNoteTmplUsername;
    NSString *_getA8keySceneNoteTmplId;
    NSString *_firstGetA8KeyReqUrl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *firstGetA8KeyReqUrl; // @synthesize firstGetA8KeyReqUrl=_firstGetA8KeyReqUrl;
@property(copy, nonatomic) NSString *getA8keySceneNoteTmplId; // @synthesize getA8keySceneNoteTmplId=_getA8keySceneNoteTmplId;
@property(copy, nonatomic) NSString *getA8keySceneNoteTmplUsername; // @synthesize getA8keySceneNoteTmplUsername=_getA8keySceneNoteTmplUsername;
@property(nonatomic) unsigned int appMsgInnerType; // @synthesize appMsgInnerType=_appMsgInnerType;
@property(nonatomic) unsigned int contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *msgUserName; // @synthesize msgUserName=_msgUserName;
@property(retain, nonatomic) NSString *firstGetA8KeyRespUrl; // @synthesize firstGetA8KeyRespUrl=_firstGetA8KeyRespUrl;
@property(nonatomic) _Bool banIframeGetA8key; // @synthesize banIframeGetA8key=_banIframeGetA8key;
@property(retain, nonatomic) SKBuiltinBuffer_t *a8keyCookie; // @synthesize a8keyCookie=_a8keyCookie;
@property(retain, nonatomic) NSMutableDictionary *originalUrl2OfflineA8KeyData; // @synthesize originalUrl2OfflineA8KeyData=_originalUrl2OfflineA8KeyData;
@property(copy, nonatomic) NSString *refererUrl; // @synthesize refererUrl=_refererUrl;
@property(nonatomic) unsigned int m_uiPayWalletRegion; // @synthesize m_uiPayWalletRegion=_uiPayWalletRegion;
@property(retain, nonatomic) NSString *m_payWalletFunctionID; // @synthesize m_payWalletFunctionID=_payWalletFunctionID;
@property(nonatomic) unsigned int m_RequestID; // @synthesize m_RequestID;
@property(retain, nonatomic) JumpEmoticonDetailCgi *m_jumpEmoticonDetailCgi; // @synthesize m_jumpEmoticonDetailCgi;
@property(readonly, nonatomic) unsigned int m_fontScale; // @synthesize m_fontScale;
@property(readonly, nonatomic) _Bool m_hasSetFontPermission; // @synthesize m_hasSetFontPermission;
@property(readonly, nonatomic) _Bool alwaysAllowJumpUrl; // @synthesize alwaysAllowJumpUrl=_alwaysAllowJumpUrl;
@property(retain, nonatomic) UIView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURL *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(nonatomic) __weak id <WebViewA8KeyLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *getA8KeyUsrname; // @synthesize getA8KeyUsrname=_getA8KeyUsrname;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) unsigned int getA8KeyReason; // @synthesize getA8KeyReason=_getA8KeyReason;
@property(nonatomic) unsigned int getA8KeyScene; // @synthesize getA8KeyScene=_getA8KeyScene;
@property(retain, nonatomic) NSString *firstGetA8KeyState; // @synthesize firstGetA8KeyState=_firstGetA8KeyState;
@property(retain, nonatomic) NSString *firstGetA8KeyScope; // @synthesize firstGetA8KeyScope=_firstGetA8KeyScope;
@property(retain, nonatomic) NSString *firstGetA8KeyAppId; // @synthesize firstGetA8KeyAppId=_firstGetA8KeyAppId;
@property(nonatomic) unsigned int firstGetA8KeyOpcode; // @synthesize firstGetA8KeyOpcode=_firstGetA8KeyOpcode;
- (void)setWebComInfoData:(id)arg1 forUrl:(id)arg2;
- (id)getUrlWithoutFragment:(id)arg1;
- (void)onJumpEmoticonDetailCgiFailed:(id)arg1;
- (void)onJumpEmoticonDetailCgiOkWithPackageId:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportGetA8KeyFailForReason:(int)arg1;
- (void)reportGetA8KeyForceRedirect;
- (void)reportGetA8KeyRequest:(id)arg1;
- (void)handleGetA8KeyResp:(id)arg1 EventID:(unsigned int)arg2;
- (void)keepA8KeyResult:(id)arg1 reqUrl:(id)arg2 context:(id)arg3;
- (_Bool)handleVerifyPrefetchAction:(id)arg1 req:(id)arg2;
- (void)handleOnGetA8KeyOK:(id)arg1 reason:(int)arg2 req:(id)arg3 context:(id)arg4;
- (void)goToURL:(id)arg1 withCustomerCookies:(id)arg2;
- (id)a8keyWebComArrForUrl:(id)arg1;
- (id)getMenuInfoTitle;
- (void)setUrlPermission:(id)arg1 GeneralCtrl:(id)arg2 DeepLink:(id)arg3 forURL:(id)arg4;
- (_Bool)isDisableGetA8KeyForUrl:(id)arg1;
- (id)getUrlPermission:(id)arg1;
- (_Bool)hasUrlPermission:(id)arg1;
- (unsigned int)getGeneralBitSetForUrl:(id)arg1;
- (unsigned int)getGeneralBitSet;
- (unsigned int)getPermissionBitSet3;
- (unsigned int)getPermissionBitSet2;
- (unsigned int)getPermissionBitSet;
- (unsigned long long)getDeepLinkBitSet;
- (id)GetDefaultPermisson;
- (id)getShareUrl;
- (void)changeCurrentShareUrlForMainUrl:(id)arg1;
- (id)getShareUrlForMain:(id)arg1;
- (void)setShareUrl:(id)arg1 forMain:(id)arg2;
- (void)setPermission:(id)arg1 ForUrl:(id)arg2;
- (id)__tryGetPermissionForUrl:(id)arg1;
- (id)getPermissionForUrl:(id)arg1;
- (id)GetMainDocumentURL;
- (id)getRequestingOrCurrentUrl;
- (void)checkApiAuthorization:(id)arg1;
- (void)updateGetA8KeySceneBySourceType:(long long)arg1;
- (_Bool)isAsynGetA8KeyAndNeedInjectWxjs;
- (_Bool)isGettingA8Key;
- (void)getA8Key:(id)arg1 Reason:(int)arg2 context:(id)arg3;
- (void)getA8Key:(id)arg1 Reason:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

