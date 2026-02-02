//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIViewController;
@protocol NewSettingModifyEmailViewControllerDelegate;

@interface NewSettingModifyEmailViewController
{
    int _displayType;
    id <NewSettingModifyEmailViewControllerDelegate> _delegate;
    NSString *_lastEmail;
    UIViewController *_currentVC;
}

+ (int)getDisplayType;
+ (_Bool)isVerify;
+ (void)showEmailVC:(id)arg1 fromVC:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) NSString *lastEmail; // @synthesize lastEmail=_lastEmail;
@property(nonatomic) __weak id <NewSettingModifyEmailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onProfileChange;
- (id)getViewController;
- (void)replaceController:(id)arg1 newController:(id)arg2;
- (void)changeToEditEmail;
- (void)changeToVerifyEmail;
- (id)getBindEmailViewController;
- (id)getVerifyEmailViewController;
- (id)getEditEmailViewController;
- (id)getDisplayVC:(int)arg1;
- (id)getDisplayVC;
- (void)onCloseButtonClicked;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDisplayType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

