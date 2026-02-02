//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsImportLogic, NSString, UIButton, UIImageView, UILabel;

@interface ContactsImportGuideViewController
{
    ContactsImportLogic *_contactsImportLogic;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) ContactsImportLogic *contactsImportLogic; // @synthesize contactsImportLogic=_contactsImportLogic;
- (void)onBindOldWechatAccountFailed:(id)arg1 errorMessage:(id)arg2 canRecover:(_Bool)arg3;
- (void)onBindOldWechatAccountSucceeded:(id)arg1;
- (void)onTapButton;
- (void)onTapCloseNavigationItem;
- (void)layoutControllerView;
- (id)navigationBarBackgroundColor;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithQRCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

