//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayHtml5WalletLogic
{
}

- (void)loadingViewControllerDidBack:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)showErrorAlert;
- (void)didFail;
- (void)getWalletUrl;
- (void)showWebViewControllerWithURL:(id)arg1 animated:(_Bool)arg2;
- (void)showLoadingViewController;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

