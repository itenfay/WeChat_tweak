//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizNameCardProtectedInfo, CCardContact, NSString;

@interface ShareCardMessageViewModel
{
    CCardContact *m_sharedContact;
    NSString *m_sharedUsername;
    NSString *m_sharedNickname;
    BizNameCardProtectedInfo *_protectedInfo;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BizNameCardProtectedInfo *protectedInfo; // @synthesize protectedInfo=_protectedInfo;
- (id)getReferImage;
- (id)getReferImageViewWithSize:(struct CGSize)arg1;
- (_Bool)hasReferImage;
- (void)onMessageForceUpdateLayout;
- (id)personalVerifyIdentity;
- (id)certificationImage;
- (_Bool)shouldShowPersonalVerifyIdentity;
- (_Bool)shouldShowCertificationFlag;
@property(readonly, nonatomic) _Bool isShowUsername;
@property(readonly, nonatomic) NSString *sharedNickname;
@property(readonly, nonatomic) NSString *sharedUsername;
@property(readonly, nonatomic) CCardContact *sharedContact;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (void)reloadData;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

