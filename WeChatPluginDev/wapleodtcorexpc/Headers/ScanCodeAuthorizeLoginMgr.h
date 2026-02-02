//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, NSMutableArray, NSMutableDictionary, NSString, OauthScopeInfo, QRConnectAuthorizeResp, ScanCodeAuthorizeBaseViewController;

@interface ScanCodeAuthorizeLoginMgr
{
    _Bool _isBanModifyAvatar;
    unsigned int _avatarLimit;
    unsigned int _defaultAvatarId;
    unsigned int _selectedAvatarId;
    int _errCode;
    unsigned int _sessionID;
    unsigned int _stayStartTime;
    NSString *_scanUrl;
    NSString *_fullUrl;
    NSString *_appId;
    NSString *_scope;
    NSString *_state;
    NSString *_appName;
    NSString *_iconUrl;
    NSMutableArray *_avatarList;
    NSString *_defaultAvatarImgUrl;
    NSString *_defaultAvatarImgFileId;
    QRConnectAuthorizeResp *_resp;
    ScanCodeAuthorizeBaseViewController *_baseVC;
    OauthScopeInfo *_userInfoScope;
    OauthScopeInfo *_friendsInfoScope;
    NSMutableArray *_arrOtherScopeInfo;
    NSMutableArray *_arrComfirmScopeInfo;
    unsigned long long _curStep;
    NSMutableDictionary *_extraInfo;
    MMWebViewController *_webVC;
    NSString *_errMsg;
    unsigned long long _stepStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long stepStartTime; // @synthesize stepStartTime=_stepStartTime;
@property(nonatomic) unsigned int stayStartTime; // @synthesize stayStartTime=_stayStartTime;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
@property(nonatomic) unsigned int selectedAvatarId; // @synthesize selectedAvatarId=_selectedAvatarId;
@property(retain, nonatomic) MMWebViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) unsigned long long curStep; // @synthesize curStep=_curStep;
@property(retain, nonatomic) NSMutableArray *arrComfirmScopeInfo; // @synthesize arrComfirmScopeInfo=_arrComfirmScopeInfo;
@property(retain, nonatomic) NSMutableArray *arrOtherScopeInfo; // @synthesize arrOtherScopeInfo=_arrOtherScopeInfo;
@property(retain, nonatomic) OauthScopeInfo *friendsInfoScope; // @synthesize friendsInfoScope=_friendsInfoScope;
@property(retain, nonatomic) OauthScopeInfo *userInfoScope; // @synthesize userInfoScope=_userInfoScope;
@property(retain, nonatomic) ScanCodeAuthorizeBaseViewController *baseVC; // @synthesize baseVC=_baseVC;
@property(retain, nonatomic) QRConnectAuthorizeResp *resp; // @synthesize resp=_resp;
@property(copy, nonatomic) NSString *defaultAvatarImgFileId; // @synthesize defaultAvatarImgFileId=_defaultAvatarImgFileId;
@property(copy, nonatomic) NSString *defaultAvatarImgUrl; // @synthesize defaultAvatarImgUrl=_defaultAvatarImgUrl;
@property(nonatomic) _Bool isBanModifyAvatar; // @synthesize isBanModifyAvatar=_isBanModifyAvatar;
@property(nonatomic) unsigned int defaultAvatarId; // @synthesize defaultAvatarId=_defaultAvatarId;
@property(nonatomic) unsigned int avatarLimit; // @synthesize avatarLimit=_avatarLimit;
@property(retain, nonatomic) NSMutableArray *avatarList; // @synthesize avatarList=_avatarList;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *fullUrl; // @synthesize fullUrl=_fullUrl;
@property(copy, nonatomic) NSString *scanUrl; // @synthesize scanUrl=_scanUrl;
- (void)onFaceRecogFinish:(unsigned int)arg1;
- (void)onCancelFaceDetect;
- (void)dismissAuthView:(int)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)reportAuthCostTime:(unsigned int)arg1 errCode:(int)arg2;
- (void)reportAuthOperate:(unsigned long long)arg1 step:(unsigned long long)arg2 isShowAuthView:(_Bool)arg3 errCode:(int)arg4;
- (void)showErrCode:(int)arg1 errMsg:(id)arg2 isInitErr:(_Bool)arg3;
- (void)onScopeViewControllerClose:(id)arg1;
- (void)onScopeViewControllerDeny:(id)arg1;
- (void)onScopeViewControllerConfirm:(id)arg1;
- (void)handleConfirmResp:(id)arg1;
- (void)handleOauthResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendAuthorizeComfirmCGI:(id)arg1;
- (void)doOAuthComfirm:(id)arg1 fromVC:(id)arg2;
- (void)sendConfirmOprationToSvrWithScopes:(id)arg1;
- (void)sendDenyOperationToSvr;
- (void)sendCancelOprationToSvr;
- (void)requestAuthorizeDataWithRequest:(id)arg1;
- (void)startOverseasAuthorizeWithAnimated:(_Bool)arg1;
- (void)startOtherScopeAuthorizeWithAnimated:(_Bool)arg1;
- (void)startFriendsAuthorizeWithAnimated:(_Bool)arg1;
- (void)startUserInfoAuthorizeWithAnimated:(_Bool)arg1;
- (_Bool)jumpToNextStepByComfirm:(_Bool)arg1 interrupt:(_Bool *)arg2 animated:(_Bool)arg3;
- (void)startWorkFlow;
- (void)initScopeInfo:(id)arg1;
- (void)initDataWithResp:(id)arg1;
- (void)openWebviewAuthorize;
- (void)handleScanUrl:(id)arg1 fullUrl:(id)arg2 extraInfo:(id)arg3;
- (void)resetData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

