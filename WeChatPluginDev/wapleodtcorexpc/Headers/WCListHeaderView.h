//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMCPLabel, MMHeadImageView, MMUIViewController, NSString, TLProfileNicknameContainerView, UIImageView, UILabel, UITableView;
@protocol WCListHeaderViewDelegate;

@interface WCListHeaderView
{
    CContact *m_contact;
    _Bool m_isMyWC;
    _Bool m_showSignature;
    struct CGRect m_bkgRect;
    MMCPLabel *m_signatureLabel;
    MMHeadImageView *m_headImageView;
    UILabel *m_totalCountLabel;
    MMUIViewController *viewController;
    UIImageView *m_bkgMaskView;
    UIImageView *m_backgroundImageView;
    struct CGRect oBackgroundImageRect;
    double m_fLastY;
    id <WCListHeaderViewDelegate> m_delegate;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForSignature;
    _Bool m_isNicknameUnsafe;
    _Bool m_isSignatureUnsafe;
    _Bool _shouldAddShadowView;
    MMCPLabel *m_infoLabel;
    UITableView *_tableView;
    UILabel *_m_nickLabel;
    long long _homepageType;
    TLProfileNicknameContainerView *_nicknameContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TLProfileNicknameContainerView *nicknameContainerView; // @synthesize nicknameContainerView=_nicknameContainerView;
@property(nonatomic) long long homepageType; // @synthesize homepageType=_homepageType;
@property(retain, nonatomic) UILabel *m_nickLabel; // @synthesize m_nickLabel=_m_nickLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool shouldAddShadowView; // @synthesize shouldAddShadowView=_shouldAddShadowView;
@property(retain, nonatomic) UIImageView *m_backgroundImageView; // @synthesize m_backgroundImageView;
@property(nonatomic) __weak id <WCListHeaderViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIImageView *m_bkgMaskView; // @synthesize m_bkgMaskView;
@property(retain, nonatomic) MMCPLabel *m_infoLabel; // @synthesize m_infoLabel;
@property(retain, nonatomic) MMHeadImageView *m_headImageView; // @synthesize m_headImageView;
@property(nonatomic) _Bool m_showSignature; // @synthesize m_showSignature;
@property(nonatomic) struct CGRect m_bkgRect; // @synthesize m_bkgRect;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController;
- (void)updateCPState;
- (void)scrollViewDidEndScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)behaviourInfoSession;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWCBackgroundChanged;
- (void)onModifyContact:(id)arg1;
- (void)updateListHeaderViewWithContact:(id)arg1;
- (void)updateListHeaderView;
- (void)showChangeBkgOption;
- (void)reloadBackGround;
- (void)showContactInfo;
- (void)reloadContactLabels;
- (id)initWithContact:(id)arg1 bkgRect:(struct CGRect)arg2;
- (void)initNicknameContainerView;
- (void)initView;
- (void)updateframe;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

