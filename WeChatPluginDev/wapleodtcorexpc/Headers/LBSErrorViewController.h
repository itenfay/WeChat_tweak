//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class UIImageView, UILabel;

@interface LBSErrorViewController : UIViewController
{
    UILabel *errorMessageLabel;
    UIImageView *m_errorImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setErrorMessage:(id)arg1;

@end

