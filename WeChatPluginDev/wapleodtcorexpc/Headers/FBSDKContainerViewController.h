//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@protocol FBSDKContainerViewControllerDelegate;

@interface FBSDKContainerViewController : UIViewController
{
    id <FBSDKContainerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBSDKContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)displayChildController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;

@end

