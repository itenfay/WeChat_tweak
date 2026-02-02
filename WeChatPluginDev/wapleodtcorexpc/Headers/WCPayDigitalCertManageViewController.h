//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TenpayCertificate, UIButton, UIImageView, UILabel, WCBizLoadingView, WCPayDeleteDigitalCertCgi, WCPayDigitalCertPayManageResp, WCPayUserInfo;
@protocol WCPayDigitalCertManageViewControllerDelegate;

@interface WCPayDigitalCertManageViewController
{
    unsigned int _entryScene;
    UIImageView *_m_iconView;
    UILabel *_m_iconDescLabel;
    UILabel *_m_contentLabel;
    UILabel *_m_contentLabelDesc1;
    UILabel *_m_contentLabelDesc2;
    UIButton *_m_manageButton;
    WCBizLoadingView *_m_bizLoadingView;
    WCPayDigitalCertPayManageResp *_m_manageInfo;
    WCPayUserInfo *_m_userInfo;
    WCPayDeleteDigitalCertCgi *_m_deleteCgi;
    TenpayCertificate *_m_certControl;
    NSString *_m_currentDeviceCertNo;
    id <WCPayDigitalCertManageViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayDigitalCertManageViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *m_currentDeviceCertNo; // @synthesize m_currentDeviceCertNo=_m_currentDeviceCertNo;
@property(retain, nonatomic) TenpayCertificate *m_certControl; // @synthesize m_certControl=_m_certControl;
@property(retain, nonatomic) WCPayDeleteDigitalCertCgi *m_deleteCgi; // @synthesize m_deleteCgi=_m_deleteCgi;
@property(retain, nonatomic) WCPayUserInfo *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property(retain, nonatomic) WCPayDigitalCertPayManageResp *m_manageInfo; // @synthesize m_manageInfo=_m_manageInfo;
@property(retain, nonatomic) WCBizLoadingView *m_bizLoadingView; // @synthesize m_bizLoadingView=_m_bizLoadingView;
@property(retain, nonatomic) UIButton *m_manageButton; // @synthesize m_manageButton=_m_manageButton;
@property(retain, nonatomic) UILabel *m_contentLabelDesc2; // @synthesize m_contentLabelDesc2=_m_contentLabelDesc2;
@property(retain, nonatomic) UILabel *m_contentLabelDesc1; // @synthesize m_contentLabelDesc1=_m_contentLabelDesc1;
@property(retain, nonatomic) UILabel *m_contentLabel; // @synthesize m_contentLabel=_m_contentLabel;
@property(retain, nonatomic) UILabel *m_iconDescLabel; // @synthesize m_iconDescLabel=_m_iconDescLabel;
@property(retain, nonatomic) UIImageView *m_iconView; // @synthesize m_iconView=_m_iconView;
@property(nonatomic) unsigned int entryScene; // @synthesize entryScene=_entryScene;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteOtherDeviceCertClick:(id)arg1;
- (void)onWCPayDigitalCertInstallViewControllerOk;
- (void)onWCPayDeleteDigitalCertCgiWithResp:(id)arg1;
- (_Bool)hasOtherDeviceCertCount;
- (void)updateWithData:(id)arg1;
- (void)callDelegate;
- (void)reloadData;
- (void)sendDeleteCgiWithCrtNo:(id)arg1;
- (void)updateManageButtonWithSuperView:(id)arg1;
- (void)onClickDeleteButton;
- (void)onClickInstallButton;
- (id)genSectionHeaderView;
- (void)updateContentLabelDesc2WithSuperView:(id)arg1;
- (void)updateContentLabelDesc1WithSuperView:(id)arg1;
- (void)updateContentLabelWithSuperView:(id)arg1;
- (void)updateIconDescLabelWithSuperView:(id)arg1;
- (void)updateIconViewWithSuperView:(id)arg1;
- (void)updateHeaderView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)updateCertCell;
- (void)reloadTableView;
- (void)didReceiveMemoryWarning;
- (void)stopBizLoading;
- (void)startBizLoadingBlocked;
- (void)updateBizLoadingView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)initWithManageInfo:(id)arg1 userInfo:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

