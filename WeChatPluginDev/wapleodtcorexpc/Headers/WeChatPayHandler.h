//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL, WCPayOpenApiParamter, WCPayTransferMoneyControlLogic;

@interface WeChatPayHandler : NSObject
{
    NSString *m_nsAppID;
    NSURL *m_nsAppUrl;
    NSString *m_bundleId;
    NSString *m_universalLink;
    NSString *m_nsWapUrl;
    WCPayOpenApiParamter *_openApiParam;
    WCPayTransferMoneyControlLogic *_transferMoneyControlLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTransferMoneyControlLogic *transferMoneyControlLogic; // @synthesize transferMoneyControlLogic=_transferMoneyControlLogic;
@property(retain, nonatomic) WCPayOpenApiParamter *openApiParam; // @synthesize openApiParam=_openApiParam;
- (void)createWapWechatPay;
- (void)createWeChatJointPay;
- (void)createWeChatePay;
- (id)parseURLParams:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)cancelWeChatPay;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)startWeChatQRCodePay:(id)arg1;
- (void)startWapWechatPayWithPayInfo:(id)arg1 bundleID:(id)arg2;
- (void)startWeChatJointPay:(id)arg1;
- (void)startWeChatPay:(id)arg1;
- (void)reportStartWeChatQrCodePayFromAppAfterLogin;
- (void)reportStartWeChatJointPayFromAppAfterLogin;
- (void)reportStartWeChatJointPayFromAppHasLogin;
- (void)reportStartWeChatJointPayFromAppNotLogin;
- (void)reportStartWeChatJointPayFromApp;
- (void)reportStartWeChatPayFromAppAfterLogin;
- (void)reportStartWeChatPayFromAppHasLogin;
- (void)reportStartWeChatPayFromAppNotLogin;
- (void)reportStartWeChatPayFromApp;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

