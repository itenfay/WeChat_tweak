//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, NSString;
@protocol WCPayRealnameSuccessViewControllerDelegate;

@interface WCPayRealnameSuccessViewController
{
    id <WCPayRealnameSuccessViewControllerDelegate> _m_delegate;
    MMWebViewController *_uploadIdWebVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *uploadIdWebVC; // @synthesize uploadIdWebVC=_uploadIdWebVC;
@property __weak id <WCPayRealnameSuccessViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)webViewReturn:(id)arg1;
- (void)onWCPayRealnameSuccessViewOpenTinyapp:(id)arg1 path:(id)arg2;
- (void)onWCPayRealnameSuccessViewOpenUrl:(id)arg1;
- (void)onWCPayRealnameSuccessViewNeedCloseAndOpenUrl:(id)arg1;
- (void)onWCPayRealnameSuccessViewRetry;
- (void)onWCPayRealnameSuccessViewDone;
- (void)viewDidLayoutSubviews;
- (void)reloadTableView;
- (id)navigationBarBackgroundColor;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)shouldInteractivePop;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

