//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSMutableArray, NSMutableDictionary, NSString, UINavigationController, UIScreenEdgePanGestureRecognizer, UserIdAuthorizePageInfo, WAAuthorizeUserIdPageSheet, WAMenuPopInteractiveTransition, WXAPhoneInfo;

@interface SecurityInfoAuthrizeLogic
{
    CDUnknownBlockType _completion;
    _Bool _forbidShowPrivacyInfo;
    unsigned int _authType;
    NSMutableArray *_categoryId;
    unsigned long long _step;
    NSString *_customAuthTitle;
    NSString *_customRealnameWording;
    NSString *_customPrivacyUrl;
    NSString *_appid;
    MMUIViewController *_vc;
    NSMutableDictionary *_payParams;
    NSString *_ticket;
    NSString *_payToken;
    WAAuthorizeUserIdPageSheet *_pageSheet;
    UINavigationController *_nextNav;
    WAMenuPopInteractiveTransition *_interactiveTransition;
    UIScreenEdgePanGestureRecognizer *_popBackGesture;
    UserIdAuthorizePageInfo *_pageInfo;
    WXAPhoneInfo *_selectedPhoneInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXAPhoneInfo *selectedPhoneInfo; // @synthesize selectedPhoneInfo=_selectedPhoneInfo;
@property(retain, nonatomic) UserIdAuthorizePageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackGesture; // @synthesize popBackGesture=_popBackGesture;
@property(retain, nonatomic) WAMenuPopInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(retain, nonatomic) UINavigationController *nextNav; // @synthesize nextNav=_nextNav;
@property(retain, nonatomic) WAAuthorizeUserIdPageSheet *pageSheet; // @synthesize pageSheet=_pageSheet;
@property(copy, nonatomic) NSString *payToken; // @synthesize payToken=_payToken;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSMutableDictionary *payParams; // @synthesize payParams=_payParams;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) _Bool forbidShowPrivacyInfo; // @synthesize forbidShowPrivacyInfo=_forbidShowPrivacyInfo;
@property(copy, nonatomic) NSString *customPrivacyUrl; // @synthesize customPrivacyUrl=_customPrivacyUrl;
@property(copy, nonatomic) NSString *customRealnameWording; // @synthesize customRealnameWording=_customRealnameWording;
@property(copy, nonatomic) NSString *customAuthTitle; // @synthesize customAuthTitle=_customAuthTitle;
@property(nonatomic) unsigned long long step; // @synthesize step=_step;
@property(nonatomic) unsigned int authType; // @synthesize authType=_authType;
@property(retain, nonatomic) NSMutableArray *categoryId; // @synthesize categoryId=_categoryId;
- (void)didDeletePhoneInfo:(id)arg1;
- (id)fromUrlString;
- (id)fromAppid;
- (id)phoneInfos;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startDeletePhoneRequest:(id)arg1;
- (void)didDeletePhone:(id)arg1;
- (void)didAddNewPhoneInfo:(id)arg1;
- (void)showAuthorizeInfo:(id)arg1 withHeight:(double)arg2;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_presentNewPageViewController:(id)arg1;
- (void)_pushNewPageViewController:(id)arg1;
- (void)constructPayParams:(id)arg1;
- (id)getCurrentURL;
- (id)getParam;
- (void)onVerifyResult:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)onCancel;
- (void)onConfirmPageBePoped;
- (void)onCancelVerifySMS;
- (void)onConfirmWithAuthToken:(id)arg1;
- (void)onConfirmWithPayToken:(id)arg1;
- (void)onConfirmAuthorizeInfo;
- (void)showToast:(id)arg1;
- (void)showAlarmBoxWithTitle:(id)arg1 desc:(id)arg2;
- (id)parseSMSPageInfoFromResponse:(id)arg1;
- (id)parseUserIdPageInfoFromResponse:(id)arg1;
- (void)processErrCode:(int)arg1 errMsg:(id)arg2;
- (void)enablePopGesture:(_Bool)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)getUserIdTokenWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAppId:(id)arg1 vc:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

