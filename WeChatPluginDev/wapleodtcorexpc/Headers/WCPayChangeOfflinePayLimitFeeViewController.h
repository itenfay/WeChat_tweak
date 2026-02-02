//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UILabel, WCBaseTextFieldItem;
@protocol WCPayChangeOfflinePayLimitFeeViewControllerDelegate;

@interface WCPayChangeOfflinePayLimitFeeViewController
{
    UIButton *m_footerButton;
    WCBaseTextFieldItem *m_textFieldLimitItem;
    UILabel *oLeftLimitLabel;
    id <WCPayChangeOfflinePayLimitFeeViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)OnSliderValueChanged:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onNext;
- (void)viewDidLoad;
- (void)reloadTableView;
- (void)initNavigationBar;
- (id)getChangeOfflinePayLimitView;
- (void)viewWillLayoutSubviews;
- (id)init;

@end

