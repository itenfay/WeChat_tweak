//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UILabel, UIView;

@interface MMSMBaseViewController : UIViewController
{
    UIView *m_contentView;
    UILabel *m_titleLabel;
    UILabel *m_bodyLabel;
    unsigned long long m_scene;
    UIView *m_loadingBgView;
    UIView *m_loadingBgViewSmall;
    UIActivityIndicatorView *m_loadingView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long scene; // @synthesize scene=m_scene;
- (id)genBigButton;
- (id)genBigGrayButton;
- (id)genBigGreenButton;
- (void)stopLoading;
- (void)startLoadingBlocked;
- (_Bool)isEnglish;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

