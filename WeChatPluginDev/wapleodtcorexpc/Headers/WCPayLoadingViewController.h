//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCBizLoadingView;
@protocol WCPayLoadingViewControllerDelegate;

@interface WCPayLoadingViewController
{
    WCBizLoadingView *m_loadView;
    id <WCPayLoadingViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayLoadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showErrorAlert;
- (void)didFail;
- (void)getWalletUrl;
- (void)showWebViewControllerWithURL:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidPush:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)onReturn;
- (void)viewDidLoad;

@end

