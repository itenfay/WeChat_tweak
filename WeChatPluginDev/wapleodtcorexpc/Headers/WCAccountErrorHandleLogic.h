//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AccountErrorInfo, BaseResponseErrMsgHandler, VoicePrintVerifyLogic, WCPolicyListControlLogic;
@protocol WCAccountErrorHandleLogicDelegate;

@interface WCAccountErrorHandleLogic
{
    WCPolicyListControlLogic *m_policyListLogic;
    id <WCAccountErrorHandleLogicDelegate> _delegate;
    BaseResponseErrMsgHandler *_errHandler;
    AccountErrorInfo *_errorInfo;
    VoicePrintVerifyLogic *_voicePrintVerifyLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoicePrintVerifyLogic *voicePrintVerifyLogic; // @synthesize voicePrintVerifyLogic=_voicePrintVerifyLogic;
@property(retain, nonatomic) AccountErrorInfo *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(retain, nonatomic) BaseResponseErrMsgHandler *errHandler; // @synthesize errHandler=_errHandler;
@property(nonatomic) __weak id <WCAccountErrorHandleLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onHandleErrorDone;
- (void)openNetworkSettingPage;
- (void)openPolicyListUrl:(id)arg1;
- (void)onVoicePrintAction:(id)arg1;
- (_Bool)onHandleError:(id)arg1;
- (void)configErrHandler;
- (id)init;

@end

