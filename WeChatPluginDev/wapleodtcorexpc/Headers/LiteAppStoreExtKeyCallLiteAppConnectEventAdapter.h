//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WXCustomWebViewControllerProtocol;

@interface LiteAppStoreExtKeyCallLiteAppConnectEventAdapter
{
    id <WXCustomWebViewControllerProtocol> _webviewController;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) id <WXCustomWebViewControllerProtocol> webviewController; // @synthesize webviewController=_webviewController;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)unRegisterDelegate;
- (void)registerDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

