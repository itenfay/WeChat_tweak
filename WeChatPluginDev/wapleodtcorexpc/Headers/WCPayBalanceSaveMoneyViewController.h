//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton;
@protocol WCPayBalanceSaveMoneyViewControllerDelegate;

@interface WCPayBalanceSaveMoneyViewController
{
    id <WCPayBalanceSaveMoneyViewControllerDelegate> m_delegate;
    UIButton *_selectBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)internalPushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)OnHistoryOrderDetailBack;
- (void)setDelegate:(id)arg1;
- (id)init;

@end

