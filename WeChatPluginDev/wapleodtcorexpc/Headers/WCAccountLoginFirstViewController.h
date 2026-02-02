//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UIView;
@protocol WCAccountLoginFirstViewControllerDelegate;

@interface WCAccountLoginFirstViewController
{
    id <WCAccountLoginFirstViewControllerDelegate> m_delegate;
    UIView *m_view;
    UIView *m_bottomView;
    UIButton *m_regBtn;
    UIButton *m_loginBtn;
    UIButton *m_btnChangeLanguage;
    UIImageView *m_backgroundImageView;
}

- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)onChangeLanguage;
- (void)initView;
- (_Bool)useTableView;
- (_Bool)useSheetView;
- (id)getBackgroundImgWithOrientation:(long long)arg1;
- (void)adjustTableViewRect;
- (void)adjustViewAndNavBarRect;
- (double)getVisibleHeight;
- (void)updateChangeLanguageBtn;
- (void)setDelegate:(id)arg1;
- (void)onLanguageChange;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

