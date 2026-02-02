//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayCreditPayFinishCreateViewControllerDelegate;

@interface WCPayCreditPayFinishCreateViewController
{
    id <WCPayCreditPayFinishCreateViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)onIncreaseLimit;
- (void)onBack;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)initFooterView;
- (void)initHeaderView;
- (void)viewWillLayoutSubviews;
- (void)initNavigationBar;
- (id)init;

@end

