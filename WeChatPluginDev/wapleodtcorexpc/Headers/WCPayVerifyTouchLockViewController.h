//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayVerifyTouchLockViewControllerDelegate;

@interface WCPayVerifyTouchLockViewController
{
    _Bool _bHasCheckShowTouchId;
    id <WCPayVerifyTouchLockViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHasCheckShowTouchId; // @synthesize bHasCheckShowTouchId=_bHasCheckShowTouchId;
@property(nonatomic) __weak id <WCPayVerifyTouchLockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onBackButtonClick;
- (void)clickPassword;
- (void)clickTouchID;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setupNavigationBar;
- (void)setupView;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;

@end

