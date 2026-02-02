//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact, NSArray, NSString, QZoneLoginStatus, UIButton, UIView;

@interface ContactNoWeixinViewController
{
    UIView *m_TipsView;
    CBaseContact *m_contact;
    UIButton *m_btn;
    UIView *m_headerView;
    NSArray *m_arrMobiles;
    QZoneLoginStatus *m_qzone;
    NSString *m_googleImageUrl;
    unsigned long long m_searchScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_searchScene; // @synthesize m_searchScene;
@property(retain, nonatomic) NSString *m_googleImageUrl; // @synthesize m_googleImageUrl;
@property(retain, nonatomic) NSArray *m_arrMobiles; // @synthesize m_arrMobiles;
- (void)onQZoneUrl:(id)arg1;
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initTipsWordView:(id)arg1 withFrame:(struct CGRect)arg2;
- (_Bool)isShowInviteBtn;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)showAlert:(id)arg1;
- (void)initDetailInfoView;
- (id)getInfoUsrName;
- (id)getQQUsrName;
- (id)getInfoDetailText;
- (id)getInfoDisplayName;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnQQAction:(id)arg1;
- (void)Call;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

