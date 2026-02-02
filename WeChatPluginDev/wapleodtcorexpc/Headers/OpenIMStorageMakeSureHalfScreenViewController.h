//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMOpenIMStorageMakeSureMaskViewView, MMUIButton, MMUIImageView, MMUILabel, MMUIScrollView, MMUIView, NSString, OpenIMArchivePopUpInfo, UIButton;

@interface OpenIMStorageMakeSureHalfScreenViewController
{
    UIButton *m_makeSureButton;
    UIButton *m_makeRejectButton;
    MMUIButton *m_backgroundButton;
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMUILabel *m_headView;
    MMUILabel *m_descContentView;
    MMUIScrollView *m_contentScrollView;
    MMUIImageView *m_iconImageView;
    MMUIButton *m_protectButton;
    double m_contentViewTop;
    MMOpenIMStorageMakeSureMaskViewView *m_maskView;
    OpenIMArchivePopUpInfo *m_archivePopUpInfo;
    double m_descContentViewHeight;
    CContact *m_contact;
    NSString *m_privacyAgreementUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_privacyAgreementUrl; // @synthesize m_privacyAgreementUrl;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (id)navigationBarBackgroundColor;
- (void)onUpdateOpenIMStorageArchivePopUp:(id)arg1 privacyAgreementUrl:(id)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)onGetOpenIMArchivePopUpInfo:(id)arg1 archivePopUpInfo:(id)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)OnProtectButtionClick;
- (void)OnMakeSureButtionClick;
- (void)OnMakeRejectButtionClick;
- (void)layoutProtectButton;
- (void)layoutMakeSureButton;
- (void)layoutMakeRejectButton;
- (void)layoutMakeMaskView;
- (void)layoutDescContentView;
- (void)layoutheadView;
- (void)layoutTitleView;
- (void)layoutContentScrollView;
- (void)layoutContentView;
- (void)updateMaskViewGradientLayer;
- (void)layoutView;
- (void)layoutHalfScreenView;
- (void)initData;
- (void)viewDidLoad;

@end

