//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <StoreKit/SKStoreProductViewController.h>

@class UIView;

@interface ZTCustomSKViewController : SKStoreProductViewController
{
    UIView *_mBgView;
    struct CGRect _mRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect mRect; // @synthesize mRect=_mRect;
@property(retain, nonatomic) UIView *mBgView; // @synthesize mBgView=_mBgView;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithBackgroundView:(id)arg1 viewFrameRect:(struct CGRect)arg2;
- (_Bool)prefersStatusBarHidden;

@end

