//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, ShareCardMessageViewModel, UIImageView, UILabel;

@interface ShareCardMessageCellView
{
    UILabel *m_nicknameLabel;
    UILabel *m_usernameLabel;
    MMWebImageView *m_iconNamePrefix;
    UIImageView *_certificationImageView;
    MMUILabel *_personalVerifyIdentityLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *personalVerifyIdentityLabel; // @synthesize personalVerifyIdentityLabel=_personalVerifyIdentityLabel;
@property(retain, nonatomic) UIImageView *certificationImageView; // @synthesize certificationImageView=_certificationImageView;
- (void)onTouchUpInside;
- (void)onForward:(id)arg1;
- (_Bool)isOpenIMKefuChat;
- (_Bool)isOpenIMChat;
- (id)operationMenuItems;
- (void)updatePersonalVerifyIdentityLabel;
- (void)initPersonalVerifyIdentityLabel;
- (void)setCertificationImageViewFrame;
- (void)initCertificationImageView;
- (void)initIconNamePostfix;
- (void)initUsernameLabel;
- (void)initNicknameLabel;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) ShareCardMessageViewModel *viewModel; // @dynamic viewModel;

@end

