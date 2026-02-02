//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIView, WCFinderCreateCoordinator, WCFinderLiveStarterReporter;

@interface WCFinderGameLiveAccountCreationRedirectViewController
{
    UIView *_errorIconView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMUIButton *_createAccountButton;
    WCFinderCreateCoordinator *_createCoordinator;
    WCFinderLiveStarterReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveStarterReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) MMUIButton *createAccountButton; // @synthesize createAccountButton=_createAccountButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *errorIconView; // @synthesize errorIconView=_errorIconView;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)onClose;
- (void)onClickCreateAccountButton:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)layoutUI;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

