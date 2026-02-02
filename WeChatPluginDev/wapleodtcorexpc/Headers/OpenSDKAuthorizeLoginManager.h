//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetUserGrantInfoBuffer, MMUIViewController, NSData, NSMutableArray, NSString, OauthScopeInfo, OpenSDKOAuthRequest, SdkOauthAuthorizeResp, SetUserGrantInfoBuffer;
@protocol OpenSDKAuthorizeLoginManagerDelegate;

@interface OpenSDKAuthorizeLoginManager
{
    _Bool _isBanModifyAvatar;
    _Bool _isUseNewPage;
    _Bool _needNotifySvrWhenConfirm;
    _Bool _isHaveGamecenterPage;
    _Bool _isCurAuthReqFinished;
    unsigned int _avatarLimit;
    unsigned int _defaultAvatarId;
    unsigned int _selectedAvatarId;
    int _errCode;
    unsigned int _sessionID;
    unsigned int _stayStartTime;
    MMUIViewController *_baseVC;
    id <OpenSDKAuthorizeLoginManagerDelegate> _delegate;
    OpenSDKOAuthRequest *_curReq;
    NSString *_appName;
    NSString *_iconUrl;
    NSMutableArray *_avatarList;
    NSString *_defaultAvatarImgUrl;
    NSString *_defaultAvatarImgFileId;
    OauthScopeInfo *_userInfoScope;
    OauthScopeInfo *_friendsInfoScope;
    NSMutableArray *_arrOtherScopeInfo;
    NSMutableArray *_arrComfirmScopeInfo;
    unsigned long long _curStep;
    NSString *_redirectUrl;
    NSString *_userConfirmRedirectUrl;
    NSString *_userConfirmWording;
    NSData *_OAuthAuthorizeResp_iLinkAuthBuffer;
    NSString *_errMsg;
    SdkOauthAuthorizeResp *_curOauthResp;
    GetUserGrantInfoBuffer *_getUserGrantInfoBuffer;
    SetUserGrantInfoBuffer *_setUserGrantInfoBuffer;
    unsigned long long _stepStartTime;
}

+ (void)fillAuthConfirmReq:(id)arg1 WithLoginReq:(id)arg2;
+ (void)fillAuthAuthorizeReq:(id)arg1 WithLoginReq:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCurAuthReqFinished; // @synthesize isCurAuthReqFinished=_isCurAuthReqFinished;
@property(nonatomic) unsigned long long stepStartTime; // @synthesize stepStartTime=_stepStartTime;
@property(nonatomic) unsigned int stayStartTime; // @synthesize stayStartTime=_stayStartTime;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) SetUserGrantInfoBuffer *setUserGrantInfoBuffer; // @synthesize setUserGrantInfoBuffer=_setUserGrantInfoBuffer;
@property(nonatomic) _Bool isHaveGamecenterPage; // @synthesize isHaveGamecenterPage=_isHaveGamecenterPage;
@property(retain, nonatomic) GetUserGrantInfoBuffer *getUserGrantInfoBuffer; // @synthesize getUserGrantInfoBuffer=_getUserGrantInfoBuffer;
@property(retain, nonatomic) SdkOauthAuthorizeResp *curOauthResp; // @synthesize curOauthResp=_curOauthResp;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
@property(retain, nonatomic) NSData *OAuthAuthorizeResp_iLinkAuthBuffer; // @synthesize OAuthAuthorizeResp_iLinkAuthBuffer=_OAuthAuthorizeResp_iLinkAuthBuffer;
@property(retain, nonatomic) NSString *userConfirmWording; // @synthesize userConfirmWording=_userConfirmWording;
@property(retain, nonatomic) NSString *userConfirmRedirectUrl; // @synthesize userConfirmRedirectUrl=_userConfirmRedirectUrl;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(nonatomic) _Bool needNotifySvrWhenConfirm; // @synthesize needNotifySvrWhenConfirm=_needNotifySvrWhenConfirm;
@property(nonatomic) _Bool isUseNewPage; // @synthesize isUseNewPage=_isUseNewPage;
@property(nonatomic) unsigned int selectedAvatarId; // @synthesize selectedAvatarId=_selectedAvatarId;
@property(nonatomic) unsigned long long curStep; // @synthesize curStep=_curStep;
@property(retain, nonatomic) NSMutableArray *arrComfirmScopeInfo; // @synthesize arrComfirmScopeInfo=_arrComfirmScopeInfo;
@property(retain, nonatomic) NSMutableArray *arrOtherScopeInfo; // @synthesize arrOtherScopeInfo=_arrOtherScopeInfo;
@property(retain, nonatomic) OauthScopeInfo *friendsInfoScope; // @synthesize friendsInfoScope=_friendsInfoScope;
@property(retain, nonatomic) OauthScopeInfo *userInfoScope; // @synthesize userInfoScope=_userInfoScope;
@property(retain, nonatomic) NSString *defaultAvatarImgFileId; // @synthesize defaultAvatarImgFileId=_defaultAvatarImgFileId;
@property(retain, nonatomic) NSString *defaultAvatarImgUrl; // @synthesize defaultAvatarImgUrl=_defaultAvatarImgUrl;
@property(nonatomic) _Bool isBanModifyAvatar; // @synthesize isBanModifyAvatar=_isBanModifyAvatar;
@property(nonatomic) unsigned int defaultAvatarId; // @synthesize defaultAvatarId=_defaultAvatarId;
@property(nonatomic) unsigned int avatarLimit; // @synthesize avatarLimit=_avatarLimit;
@property(retain, nonatomic) NSMutableArray *avatarList; // @synthesize avatarList=_avatarList;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) OpenSDKOAuthRequest *curReq; // @synthesize curReq=_curReq;
@property(nonatomic) __weak id <OpenSDKAuthorizeLoginManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIViewController *baseVC; // @synthesize baseVC=_baseVC;
- (void)onFaceRecogFinish:(unsigned int)arg1;
- (void)onCancelFaceDetect;
- (void)startGameInfoAuthorizeWithAnimated:(_Bool)arg1;
- (_Bool)shouldShowGameInfoAuthorizePage;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)reportAuthCostTime:(unsigned int)arg1 errCode:(int)arg2;
- (void)reportAuthOperate:(unsigned long long)arg1 step:(unsigned long long)arg2 isShowAuthView:(_Bool)arg3 errCode:(int)arg4;
- (void)showErrCode:(int)arg1 errMsg:(id)arg2;
- (void)onScopeViewControllerClose:(id)arg1;
- (void)onScopeViewControllerDeny:(id)arg1;
- (void)onScopeViewControllerConfirm:(id)arg1;
- (void)handleConfirmResp:(id)arg1;
- (void)handleOauthResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendAuthorizeComfirmCGI:(id)arg1;
- (void)checkSendConfirmOprationToSvrWithScopes:(id)arg1;
- (void)doOAuthComfirm:(id)arg1 fromVC:(id)arg2;
- (void)sendConfirmOprationToSvrWithScopes:(id)arg1;
- (void)sendDenyOperationToSvr;
- (void)sendCancelOprationToSvr;
- (void)loadDataFromSvr;
- (void)startOverseasAuthorizeWithAnimated:(_Bool)arg1;
- (void)startOtherScopeAuthorizeWithAnimated:(_Bool)arg1;
- (void)startFriendsAuthorizeWithAnimated:(_Bool)arg1;
- (void)startUserInfoAuthorizeWithAnimated:(_Bool)arg1;
- (_Bool)stepToNextStepByComfirm:(_Bool)arg1 interrupt:(_Bool *)arg2 animated:(_Bool)arg3;
- (void)startWorkFlow;
- (void)initScopeInfo:(id)arg1;
- (void)initDataWithResp:(id)arg1;
- (void)startLogic;
- (id)initWithAuthReq:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

