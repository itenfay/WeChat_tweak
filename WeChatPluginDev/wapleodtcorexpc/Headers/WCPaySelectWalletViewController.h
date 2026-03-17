//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPaySelectWalletViewControllerDelegate;

@interface WCPaySelectWalletViewController : NSObject
{
    id <WCPaySelectWalletViewControllerDelegate> m_delegate;
}

- (void)selectWalletInfo:(id)arg1;
- (void)makeWalletInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)OnBack;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

@end

