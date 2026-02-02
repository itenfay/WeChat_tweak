//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, MMLimitedModeAuthorizeRequestLogic, MMUIViewController, NSString;
@protocol MMLimitedModeAuthorizationUtilLogicDelegate;

@interface MMLimitedModeAuthorizationUtilLogic : NSObject
{
    NSString *m_bizKey;
    long long m_bizType;
    CMessageWrap *m_accessMessage;
    NSString *m_accessTitle;
    NSString *m_accessDesc;
    _Bool m_isLoading;
    long long m_verifyType;
    MMLimitedModeAuthorizeRequestLogic *m_authorizeRequestLogic;
    id <MMLimitedModeAuthorizationUtilLogicDelegate> _m_delegate;
    MMUIViewController *_vc;
}

+ (id)getAccessAuthorizationVerifyInfo;
- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) __weak id <MMLimitedModeAuthorizationUtilLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)openWeApp:(id)arg1;
- (void)openWebView:(id)arg1 businessMessage:(id)arg2;
- (void)tapAuthorizeRequestDisplayCellForBusinessWithAuthorizeRequestMessage:(id)arg1;
- (void)makeAuthorizeRequestDisplayCellForBusiness:(id)arg1 authorizeRequestMessage:(id)arg2;
- (_Bool)isShowAuthorizeRequestDisplayCell:(long long)arg1;
- (void)makeNotSupportCell:(id)arg1;
- (void)makeLiveAuthorizeRequestDisplayCellForBusiness:(id)arg1 cellLeftImageUrl:(id)arg2 bareCellLeftImageUrl:(id)arg3 cellLeftImage:(id)arg4 cellTitle:(id)arg5 canAccessory:(_Bool)arg6;
- (void)makePlayAuthorizeRequestDisplayCellForBusiness:(id)arg1 cellLeftImageUrl:(id)arg2 cellLeftImage:(id)arg3 cellTitle:(id)arg4 canAccessory:(_Bool)arg5;
- (void)makeDefaultAuthorizeRequestDisplayCellForBusiness:(id)arg1 cellLeftImageUrl:(id)arg2 cellLeftImage:(id)arg3 cellTitle:(id)arg4 needRoundIcon:(_Bool)arg5;
- (void)onAuthorizeRequestVerifyCancel;
- (void)onAuthorizeRequestForwardMessageSendSuccess;
- (void)onAuthorizeRequestVerifyPasswordSuccessAndAnimationEndedWithTicket:(id)arg1;
- (void)onAuthorizeRequestVerifyPasswordSuccessTicket:(id)arg1;
- (void)OnForwardMessageSendSuccess;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)verifyPasswordSuccessSaveAgreenAuthorizationInfo;
- (id)getAuthorizeRequestLogic;
- (void)onTapAccessAuthorizationVerifyWithVerifyType:(long long)arg1 bizKey:(id)arg2 bizType:(long long)arg3 accessTitle:(id)arg4 accessDesc:(id)arg5 accessMessage:(id)arg6 inView:(id)arg7;
- (void)startQuestAccessAuthorizationWithBizKey:(id)arg1 bizType:(long long)arg2 accessTitle:(id)arg3 accessDesc:(id)arg4 accessMessage:(id)arg5 inView:(id)arg6;
- (void)startQuestAccessAuthorizationWithBizKey:(id)arg1 bizType:(long long)arg2 inView:(id)arg3;
- (_Bool)checkAccessAuthorizationHadApproveWithBizKey:(id)arg1 bizType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

