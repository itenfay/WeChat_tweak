//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSApiScopeAuthorizeInfo, JSApiScopeAuthorizePageSheet, JSApiScopeConfirmWindow, MMUIViewController, NSMutableArray, NSString, WOAPPrivacyConfirmLogic;

@interface WebViewOAuthLogic
{
    CDUnknownBlockType _completeBlock;
    JSApiScopeConfirmWindow *_confirmWindow;
    NSString *_oauthUrl;
    _Bool _needNotifySvrWhenConfirm;
    NSString *_confirmRediretUrl;
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
    NSString *_appId;
    unsigned int _stayTimeStart;
    unsigned long long _stepStartTime;
    unsigned int _sessionID;
    _Bool _isAuthing;
    _Bool _cachedIsInteractivePopEnabled;
    MMUIViewController *_vc;
    JSApiScopeAuthorizeInfo *_authInfo;
    NSMutableArray *_pendingScopeInfoList;
    NSMutableArray *_handledScopeInfoList;
    JSApiScopeAuthorizePageSheet *_pageSheet;
    NSString *_refererUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *refererUrl; // @synthesize refererUrl=_refererUrl;
@property(nonatomic) _Bool cachedIsInteractivePopEnabled; // @synthesize cachedIsInteractivePopEnabled=_cachedIsInteractivePopEnabled;
@property(retain, nonatomic) JSApiScopeAuthorizePageSheet *pageSheet; // @synthesize pageSheet=_pageSheet;
@property(retain, nonatomic) NSMutableArray *handledScopeInfoList; // @synthesize handledScopeInfoList=_handledScopeInfoList;
@property(retain, nonatomic) NSMutableArray *pendingScopeInfoList; // @synthesize pendingScopeInfoList=_pendingScopeInfoList;
@property(retain, nonatomic) JSApiScopeAuthorizeInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) _Bool isAuthing; // @synthesize isAuthing=_isAuthing;
- (double)getViewHeight;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (void)sendAuthStatusToSvrWhenAllPageSheetDismissWithOAuthContext:(id)arg1;
- (void)authorizeReject:(id)arg1;
- (void)authorizeAccept:(id)arg1;
- (void)relayoutOauthPageSheet;
- (void)updateScopeInfoStatusAndMoveFromPendingQueue2HandledQueue:(_Bool)arg1;
- (void)handleFirstScopeInfoAndUpdateAuthInfo;
- (_Bool)hasPendingScopeInfo;
- (void)setupAuthInfoWithAuthResp:(id)arg1;
- (void)setAndSortScopeInfoList:(id)arg1;
- (void)dismissAuthPageSheet;
- (void)showAuthPageSheet:(id)arg1;
- (void)recoveryWebViewInteractivePopEnabled;
- (void)storageWebViewInteractivePopEnabled;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)onScopeWindowCancel:(id)arg1;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)showConfirmWindow:(id)arg1 appName:(id)arg2 iconUrl:(id)arg3;
- (void)doSendAuthStatusToSvrWithContext:(id)arg1;
- (void)sendConfirmOprationToSvrWithContext:(id)arg1;
- (void)sendCancelOprationToSvr;
- (void)handleConfirmResponse:(id)arg1;
- (void)handleOauthResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportAuthCostTime:(unsigned int)arg1 errCode:(int)arg2;
- (void)reportAuthOperate:(unsigned long long)arg1 isShowAuthView:(_Bool)arg2 errCode:(int)arg3;
- (void)onConfirmViewCancel;
- (void)onConfirmViewOKWithContext:(id)arg1;
- (void)closeConfirmWindow;
- (void)reset;
- (void)startOAuthWithUrl:(id)arg1 userName:(id)arg2 scene:(int)arg3 oAuthType:(unsigned int)arg4 referUrl:(id)arg5 viewController:(id)arg6 completeBlock:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

