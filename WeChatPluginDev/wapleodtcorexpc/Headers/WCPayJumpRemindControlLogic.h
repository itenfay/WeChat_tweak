//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, NSString, WCPayJumpRemindInfo;
@protocol MMUIViewControllerDelegate;

@interface WCPayJumpRemindControlLogic
{
    unsigned int _clientScene;
    unsigned int _payScene;
    CDUnknownBlockType _interceptBlk;
    CDUnknownBlockType _continueBlk;
    WCPayJumpRemindInfo *_jumpRemindInfo;
    id <MMUIViewControllerDelegate> _vcRootDelegate;
    MMWebViewController *_m_gdprUserKeyInfoWebviewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *m_gdprUserKeyInfoWebviewController; // @synthesize m_gdprUserKeyInfoWebviewController=_m_gdprUserKeyInfoWebviewController;
@property(nonatomic) unsigned int payScene; // @synthesize payScene=_payScene;
@property(nonatomic) unsigned int clientScene; // @synthesize clientScene=_clientScene;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> vcRootDelegate; // @synthesize vcRootDelegate=_vcRootDelegate;
@property(retain, nonatomic) WCPayJumpRemindInfo *jumpRemindInfo; // @synthesize jumpRemindInfo=_jumpRemindInfo;
@property(copy, nonatomic) CDUnknownBlockType continueBlk; // @synthesize continueBlk=_continueBlk;
@property(copy, nonatomic) CDUnknownBlockType interceptBlk; // @synthesize interceptBlk=_interceptBlk;
- (void)excuteBlk:(_Bool)arg1 nativepath:(id)arg2;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)handleJumpUrl;
- (id)getAppendClientVersionInUrl:(id)arg1 clientScene:(unsigned int)arg2 payScene:(unsigned int)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)handleJumpRemindInfo:(id)arg1 clientScene:(unsigned int)arg2 payScene:(unsigned int)arg3 vcRootDelegate:(id)arg4 onIntercept:(CDUnknownBlockType)arg5 onContinue:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

