//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppleIDBindLogic, AppleStyleLoginRegisterButton, NSString, ThirdAppBindReportObject, UIButton, UILabel;
@protocol AppleIDBindViewControllerDelegate;

@interface AppleIDBindViewController
{
    _Bool _appleIDBound;
    id <AppleIDBindViewControllerDelegate> _delegate;
    AppleIDBindLogic *_appleIDBindLogic;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_unbindButton;
    AppleStyleLoginRegisterButton *_bindButton;
    ThirdAppBindReportObject *_reportObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ThirdAppBindReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(retain, nonatomic) AppleStyleLoginRegisterButton *bindButton; // @synthesize bindButton=_bindButton;
@property(retain, nonatomic) UIButton *unbindButton; // @synthesize unbindButton=_unbindButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AppleIDBindLogic *appleIDBindLogic; // @synthesize appleIDBindLogic=_appleIDBindLogic;
@property(nonatomic, getter=isAppleIDBound) _Bool appleIDBound; // @synthesize appleIDBound=_appleIDBound;
@property(nonatomic) __weak id <AppleIDBindViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUnbindAppleIDFailedWithError:(id)arg1;
- (void)onUnbindAppleIDSucceed;
- (void)onBindAppleIDFailedWithError:(id)arg1;
- (void)onBindAppleIDSucceed;
- (void)onRequestAuthorizeFromAppleFinished:(_Bool)arg1;
- (id)getViewController;
- (void)onTapUnbindButton;
- (void)onTapBindButton;
- (void)onTapCloseBarButton;
- (void)refreshContent;
- (void)updateLayout;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)initView;
- (void)initData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

