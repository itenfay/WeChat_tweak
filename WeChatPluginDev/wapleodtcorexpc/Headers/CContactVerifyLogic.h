//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, NSArray, NSData, NSString, NormalContactVerifyLogic, OpenIMContactVerifyLogic, UIView, WCUIAlertView;
@protocol ContactVerifyPreCheckLogicDelegate, contactVerifyLogicDelegate;

@interface CContactVerifyLogic
{
    NSArray *m_arrVerifyContactWrap;
    UIView *m_parentView;
    NSString *m_nsVerifyValue;
    MMLoadingView *m_loadingView;
    unsigned int m_uiOpCode;
    _Bool m_bFromChatRoom;
    _Bool m_bNotShowAlert;
    _Bool m_bNeedSaveToLocalDB;
    unsigned int m_uiFriendScene;
    id <contactVerifyLogicDelegate> m_delegate;
    NormalContactVerifyLogic *m_normalVerifyLogic;
    OpenIMContactVerifyLogic *m_openIMVerifyLogic;
    unsigned int m_contactVerifyUserSpamFailNumber;
    NSString *m_nsStartLoadingText;
    NSString *m_nsStartLoadingOKText;
    id <contactVerifyLogicDelegate> m_sendRequestDelegate;
    id <ContactVerifyPreCheckLogicDelegate> _m_preCheckDelegate;
    unsigned long long _m_qrAddScene;
    NSString *_m_reportInfo;
    NSData *_m_spamContext;
    WCUIAlertView *_alertView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCUIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSData *m_spamContext; // @synthesize m_spamContext=_m_spamContext;
@property(retain, nonatomic) NSString *m_reportInfo; // @synthesize m_reportInfo=_m_reportInfo;
@property(nonatomic) unsigned long long m_qrAddScene; // @synthesize m_qrAddScene=_m_qrAddScene;
@property(nonatomic) __weak id <ContactVerifyPreCheckLogicDelegate> m_preCheckDelegate; // @synthesize m_preCheckDelegate=_m_preCheckDelegate;
@property(nonatomic) __weak id <contactVerifyLogicDelegate> m_sendRequestDelegate; // @synthesize m_sendRequestDelegate;
@property(copy, nonatomic) NSString *m_nsStartLoadingOKText; // @synthesize m_nsStartLoadingOKText;
@property(copy, nonatomic) NSString *m_nsStartLoadingText; // @synthesize m_nsStartLoadingText;
@property(nonatomic) _Bool m_bNotShowAlert; // @synthesize m_bNotShowAlert;
@property(nonatomic) __weak id <contactVerifyLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)onOpenIMContactVerifyFail:(id)arg1;
- (void)onOpenIMContactVerifyDone:(id)arg1;
- (void)onNormalContactVerifyPreChecFail:(id)arg1 opcode:(unsigned int)arg2 baseResponse:(id)arg3 andVerifyUserResponse:(id)arg4;
- (void)onNormalContactVerifyPreCheckDone:(id)arg1 opcode:(unsigned int)arg2;
- (void)showVerifyUserSpamTipViewController:(id)arg1;
- (void)onNormalContactVerifyFail:(id)arg1 andVerifyUserResponse:(id)arg2;
- (void)onNormalContactVerifyDone:(id)arg1 encodeUserName:(id)arg2;
- (void)doSendRequestContactVerifyFillVerifyMsg;
- (void)doVerifyFillVerifyValue;
- (void)handleVerifyErrorNeedVerifyUser;
- (void)onContactVerifyFail:(id)arg1 isOpenIM:(_Bool)arg2 antispamTicket:(id)arg3;
- (_Bool)isNormalSayHelloContact;
- (_Bool)isBrandAccount;
- (_Bool)isEnterpriseBrand;
- (void)ProcessStrangerContactTag:(id)arg1;
- (void)clearClearStrangerPermission:(id)arg1;
- (void)handleVerifyOk:(id)arg1;
- (void)OnContinueSendRequest;
- (_Bool)sendVerifyUserPreCheck:(id)arg1 opcode:(unsigned int)arg2;
- (void)startForSendVerifyMsg:(id)arg1 parentView:(id)arg2 verifyMsg:(id)arg3;
- (void)startForVerifyOK:(id)arg1 parentView:(id)arg2;
- (void)startForAddVerifyMsg:(id)arg1 parentView:(id)arg2 verifyMsg:(id)arg3;
- (void)startForAddVerifyMsg:(id)arg1 parentView:(id)arg2;
- (void)startForSendVerifyRequest:(id)arg1 opCode:(unsigned int)arg2 parentView:(id)arg3 fromChatRoom:(_Bool)arg4;
- (void)onUserVerifyUseDoVerifyNeedConfirm:(_Bool)arg1;
- (void)onUserNotVerifyUseDoVerify:(_Bool)arg1 antispamTicket:(id)arg2;
- (void)showVerifyAlert;
- (id)getAlertMessage;
- (id)getAlertTitle;
- (void)doVerifyByAlertView;
- (unsigned int)getContactVerifyUserSpamFailNumber;
- (void)dealloc;
@property(readonly, nonatomic) NSString *verifyValue;
- (_Bool)doVerify:(id)arg1;
- (void)SaveToLocalDB;
- (_Bool)needSetSayHelloStatus;
- (_Bool)needSaveToLocalDB;
- (id)filterString:(id)arg1;
- (void)stopLoadingAndShowOK;
- (void)stopLoading;
- (void)startLoading;
- (id)getLoadingOkText;
- (id)getLoadingText;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

