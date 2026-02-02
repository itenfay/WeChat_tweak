//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayResetSelectVerifyWayViewControllerDelegate;

@interface WCPayResetSelectVerifyWayViewController
{
    id <WCPayResetSelectVerifyWayViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayResetSelectVerifyWayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickVerifyCard;
- (void)clickVerifyFace;
- (id)genVerifyWayViewWithTitle:(id)arg1 desc:(id)arg2 iconImage:(id)arg3 action:(SEL)arg4;
- (id)setupTableHeaderView;
- (void)setupContentView;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)leftBarButtonItemClick;
- (void)setupNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;

@end

