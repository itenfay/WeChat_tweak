//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMAuthorizeViewControllerDelegate;

@interface ScanCodeAuthorizeBaseViewController
{
    id <MMAuthorizeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MMAuthorizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onOAuthCancel;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (id)init;

@end

