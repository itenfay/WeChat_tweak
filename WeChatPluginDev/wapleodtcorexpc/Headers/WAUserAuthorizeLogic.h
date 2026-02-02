//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AlertPrivacyInfo, NSMutableArray, NSString, UINavigationController, UIScreenEdgePanGestureRecognizer, UserAvatarInfo, UserPrivacyProtectInfo, WAMenuPopInteractiveTransition;
@protocol IWAAuthorizePage, WAAuthorizeDelegate;

@interface WAUserAuthorizeLogic
{
    NSMutableArray *_scopeInfoList;
    NSString *_appID;
    NSString *_appName;
    NSString *_appIconUrl;
    NSString *_applyWording;
    NSString *_cancelWording;
    NSString *_allowWording;
    UserAvatarInfo *_avatarInfo;
    AlertPrivacyInfo *_privacyInfo;
    NSMutableArray *_riskInfo;
    id <WAAuthorizeDelegate> _delegate;
    UserPrivacyProtectInfo *_privacyProtectInfo;
    id <IWAAuthorizePage> _pageSheet;
    UINavigationController *_nextNav;
    WAMenuPopInteractiveTransition *_interactiveTransition;
    UIScreenEdgePanGestureRecognizer *_popBackGesture;
    unsigned long long _currentScopeIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentScopeIndex; // @synthesize currentScopeIndex=_currentScopeIndex;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackGesture; // @synthesize popBackGesture=_popBackGesture;
@property(retain, nonatomic) WAMenuPopInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(retain, nonatomic) UINavigationController *nextNav; // @synthesize nextNav=_nextNav;
@property(nonatomic) __weak id <IWAAuthorizePage> pageSheet; // @synthesize pageSheet=_pageSheet;
@property(retain, nonatomic) UserPrivacyProtectInfo *privacyProtectInfo; // @synthesize privacyProtectInfo=_privacyProtectInfo;
@property(nonatomic) __weak id <WAAuthorizeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *riskInfo; // @synthesize riskInfo=_riskInfo;
@property(retain, nonatomic) AlertPrivacyInfo *privacyInfo; // @synthesize privacyInfo=_privacyInfo;
@property(retain, nonatomic) UserAvatarInfo *avatarInfo; // @synthesize avatarInfo=_avatarInfo;
@property(retain, nonatomic) NSString *allowWording; // @synthesize allowWording=_allowWording;
@property(retain, nonatomic) NSString *cancelWording; // @synthesize cancelWording=_cancelWording;
@property(retain, nonatomic) NSString *applyWording; // @synthesize applyWording=_applyWording;
@property(retain, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl=_appIconUrl;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSMutableArray *scopeInfoList; // @synthesize scopeInfoList=_scopeInfoList;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_pushNewPageViewController:(id)arg1;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (void)onConfirmResponse:(id)arg1;
- (void)onAuthorizeResponse:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (_Bool)confirmRequestWithAppID:(id)arg1 Scope:(id)arg2 AllowAuth:(_Bool)arg3 VersionType:(unsigned int)arg4 AcceptProtocol:(_Bool)arg5 ExternalInfo:(id)arg6;
- (_Bool)authorizeRequestWithAppID:(id)arg1 permissionAppID:(id)arg2 JsApiName:(id)arg3 Scope:(id)arg4 VersionType:(unsigned int)arg5 ExternalInfo:(id)arg6 PluginInfo:(id)arg7;
- (void)dismissAndRecoverPopGesture;
- (void)authorizeReject:(id)arg1;
- (void)showVoipAuthSuccessTipsWithCompleteAction:(CDUnknownBlockType)arg1;
- (void)authorizeAccept:(id)arg1;
- (_Bool)fillBasicAuthorizeSheetInfo:(id)arg1;
- (void)showPageSheet:(id)arg1;
- (_Bool)tryShowNormalConfirmView;
- (_Bool)tryShowCameraConfirmView;
- (_Bool)tryShowNicknameAndHeadConfirmView;
- (void)showBluetoothConfirmView:(id)arg1;
- (_Bool)canShowBackgroundBluetoothConfimView;
- (_Bool)tryShowBluetoothConfirmView:(id)arg1 Error:(id *)arg2;
- (void)showFuzzyLocationConfirmView:(id)arg1;
- (_Bool)tryShowFuzzyLocationConfirmView:(id)arg1 Error:(id *)arg2;
- (void)showLocationConfirmView:(id)arg1;
- (_Bool)canShowBackgroundLocationConfimView;
- (_Bool)tryShowLocationConfirmView:(id)arg1 Error:(id *)arg2;
- (void)showFullScreenNicknameAndAvatarVC;
- (void)showFullScreenNormalVC;
- (_Bool)handleShowFullScreenConfirmViewWithAppID:(id)arg1 Error:(id *)arg2;
- (_Bool)handleShowHalfScreenConfirmViewWithAppID:(id)arg1 Error:(id *)arg2;
- (_Bool)tryShowConfirmView:(id)arg1 Error:(id *)arg2 UIStyle:(unsigned long long)arg3;
- (id)currentScopeInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

