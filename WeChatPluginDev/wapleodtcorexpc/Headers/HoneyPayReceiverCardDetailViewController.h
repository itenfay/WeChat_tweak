//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QryHoneyPayCardDetailResp;
@protocol HoneyPayReceiverCardDetailViewControllerDelegate;

@interface HoneyPayReceiverCardDetailViewController
{
    id <HoneyPayReceiverCardDetailViewControllerDelegate> _delegate;
    QryHoneyPayCardDetailResp *_detail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QryHoneyPayCardDetailResp *detail; // @synthesize detail=_detail;
@property(nonatomic) __weak id <HoneyPayReceiverCardDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)overrideUserInterfaceStyle;
- (void)didClickUnbind;
- (void)onRightBarButtonClick;
- (id)headerView;
- (void)reloadTableView;
- (void)setupNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;

@end

