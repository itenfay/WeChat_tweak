//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCPayFaceHBGetView, WCPayFaceHBPayView;
@protocol WCPayFaceHBViewControllerDelegate;

@interface WCPayFaceHBViewController
{
    id <WCPayFaceHBViewControllerDelegate> m_delegate;
    UIView *_contentView;
    WCPayFaceHBGetView *_getView;
    WCPayFaceHBPayView *_payView;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (id)showPayViewWithDelegate:(id)arg1;
- (void)hidePayView;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didChangeScreenCapture:(id)arg1;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)onBack;
- (void)initNavigationBar;

@end

