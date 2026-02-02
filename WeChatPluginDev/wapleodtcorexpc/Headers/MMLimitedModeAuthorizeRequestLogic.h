//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, ForwardMessageLogicController, MMLimitedModeVerifyPasswordLogic, MMUIViewController, NSString, UINavigationController;
@protocol MMLimitedModeAuthorizeRequestLogicDelegate;

@interface MMLimitedModeAuthorizeRequestLogic : NSObject
{
    ForwardMessageLogicController *m_forwardMsgLogic;
    MMLimitedModeVerifyPasswordLogic *m_limitedModeVerifyPasswordLogic;
    CMessageWrap *m_authorizeRequestMessageWrap;
    UINavigationController *m_navigationController;
    id <MMLimitedModeAuthorizeRequestLogicDelegate> _m_delegate;
    NSString *_m_accessTitle;
    NSString *_m_accessDesc;
    CMessageWrap *_m_accessMessage;
    NSString *_m_bizKey;
    long long _m_bizType;
    MMUIViewController *_vc;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) long long m_bizType; // @synthesize m_bizType=_m_bizType;
@property(retain, nonatomic) NSString *m_bizKey; // @synthesize m_bizKey=_m_bizKey;
@property(retain, nonatomic) CMessageWrap *m_accessMessage; // @synthesize m_accessMessage=_m_accessMessage;
@property(retain, nonatomic) NSString *m_accessDesc; // @synthesize m_accessDesc=_m_accessDesc;
@property(retain, nonatomic) NSString *m_accessTitle; // @synthesize m_accessTitle=_m_accessTitle;
@property(nonatomic) __weak id <MMLimitedModeAuthorizeRequestLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) __weak UINavigationController *m_navigationController; // @synthesize m_navigationController;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onCheckPasswordExist:(_Bool)arg1 isNeverUse:(_Bool)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)forMessage:(id)arg1 useNewMsgType:(_Bool)arg2;
- (void)forMessage:(id)arg1;
- (void)checkIndependentPassWord;
- (void)checkLoginPassWord;
- (void)checkLimitedModeVerifyPassword;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

