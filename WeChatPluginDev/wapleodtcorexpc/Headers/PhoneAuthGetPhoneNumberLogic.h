//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSData, NSMutableArray, NSString, PhoneAuthGetPhoneNumberLogicPhoneInfo, WAPhoneNumberAuthorizeSheetInfo, WAPhoneVerifyWindow, WAReportPhoneAuthActionItem, WCAccountBindPhoneControlLogic;
@protocol IWAPhoneNumberAuthorizePageSheet;

@interface PhoneAuthGetPhoneNumberLogic
{
    _Bool _isAcceptProtocol;
    _Bool _bindPhoneReturn;
    unsigned int _versionType;
    NSData *_requestData;
    NSString *_fromUrlString;
    unsigned long long _uiStyle;
    WCAccountBindPhoneControlLogic *_bindLogic;
    NSString *_appid;
    MMUIViewController *_vc;
    CDUnknownBlockType _completion;
    WAPhoneNumberAuthorizeSheetInfo *_authInfo;
    WAReportPhoneAuthActionItem *_reportAction;
    id <IWAPhoneNumberAuthorizePageSheet> _pageSheet;
    WAPhoneVerifyWindow *_verifyWindow;
    PhoneAuthGetPhoneNumberLogicPhoneInfo *_chosenPhoneInfo;
    NSString *_recordPhone;
    unsigned long long _originInterativePopFlag;
    NSMutableArray *_customPhoneInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *customPhoneInfos; // @synthesize customPhoneInfos=_customPhoneInfos;
@property(nonatomic) unsigned long long originInterativePopFlag; // @synthesize originInterativePopFlag=_originInterativePopFlag;
@property(copy, nonatomic) NSString *recordPhone; // @synthesize recordPhone=_recordPhone;
@property(retain, nonatomic) PhoneAuthGetPhoneNumberLogicPhoneInfo *chosenPhoneInfo; // @synthesize chosenPhoneInfo=_chosenPhoneInfo;
@property(retain, nonatomic) WAPhoneVerifyWindow *verifyWindow; // @synthesize verifyWindow=_verifyWindow;
@property(nonatomic) __weak id <IWAPhoneNumberAuthorizePageSheet> pageSheet; // @synthesize pageSheet=_pageSheet;
@property(retain, nonatomic) WAReportPhoneAuthActionItem *reportAction; // @synthesize reportAction=_reportAction;
@property(retain, nonatomic) WAPhoneNumberAuthorizeSheetInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) _Bool bindPhoneReturn; // @synthesize bindPhoneReturn=_bindPhoneReturn;
@property(retain, nonatomic) WCAccountBindPhoneControlLogic *bindLogic; // @synthesize bindLogic=_bindLogic;
@property(nonatomic) _Bool isAcceptProtocol; // @synthesize isAcceptProtocol=_isAcceptProtocol;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(copy, nonatomic) NSString *fromUrlString; // @synthesize fromUrlString=_fromUrlString;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(nonatomic) unsigned int versionType; // @synthesize versionType=_versionType;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)didAddNewPhoneInfo:(id)arg1;
- (void)didDeletePhoneInfo:(id)arg1;
- (id)fromAppid;
- (id)phoneInfos;
- (id)getViewController;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onClose;
- (void)onRetry;
- (void)onComplete:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)phoneNumberAuthorizeAddNewButtonClick:(id)arg1;
- (void)phoneNumberAuthorizeManagerButtonClick:(id)arg1;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (void)authorizeAccept:(id)arg1;
- (void)authorizeReject:(id)arg1;
- (void)authorizeCancel:(id)arg1;
- (void)saveLastAuthPhone:(id)arg1;
- (id)getLastAuthPhone;
- (id)getRecordInfoFromLocal;
- (void)saveRecordPhoneToLocal:(id)arg1;
- (void)regenerateDisplayPhoneInfos;
- (id)getDisplayPhoneInfoArray;
- (void)_pushNewPageViewController:(id)arg1;
- (void)cancel;
- (void)showConfirmWindowOnContainer;
- (id)getPhoneInfoFromDic:(id)arg1;
- (void)onPhoneStatusResponse:(id)arg1;
- (void)onSuccessWithResultDic:(id)arg1;
- (void)onErrorWithErrCode:(int)arg1 msg:(id)arg2;
- (void)handleUpdateUserPhoneResponse:(id)arg1;
- (void)handleCheckVerifyCodeResponse:(id)arg1;
- (void)handleSendVerifyCodeResponse:(id)arg1;
- (void)handleGetAllUserPhone:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)removeInteractivePop;
- (void)recoverInteractivePop;
- (void)beginBindPhone;
- (void)startUpdatePhoneRequestWithPhoneNumber:(id)arg1 type:(unsigned int)arg2;
- (void)startDeletePhoneRequest:(id)arg1;
- (void)startCheckPhoneVerifySmsRequest:(id)arg1;
- (void)closeVerifyWindow;
- (void)showPhoneVerifyWindow;
- (void)startSendPhoneVerifySmsRequest;
- (void)startGetPhoneRequest;
- (void)getPhoneNumberWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAppId:(id)arg1 vc:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

