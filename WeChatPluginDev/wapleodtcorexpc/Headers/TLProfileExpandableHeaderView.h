//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMHeadImageView, MMUIViewController, NSString, TLProfileDragAnimateHelper, TLProfileModel, TLProfileNicknameContainerView, UIImageView, UITableView, UIView;

@interface TLProfileExpandableHeaderView
{
    shared_ptr_448daa3e _config;
    _Bool _isNicknameUnsafe;
    _Bool _isSignatureUnsafe;
    _Bool _showSignature;
    CDUnknownBlockType _showConcatBlock;
    CDUnknownBlockType _onTouchUpInsideBlock;
    CDUnknownBlockType _navigationBlock;
    NSString *_cpKeyForNickname;
    NSString *_cpKeyForSignature;
    UIImageView *_bkgMaskView;
    TLProfileNicknameContainerView *_nicknameContainerView;
    MMCPLabel *_infoLabel;
    MMHeadImageView *_headImageView;
    UITableView *_tableView;
    TLProfileDragAnimateHelper *_animateHelper;
    MMUIViewController *_viewController;
    TLProfileModel *_profileModel;
    MMCPLabel *_signatureLabel;
    UIView *_accessibilityView;
    struct CGRect _bkgRect;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *accessibilityView; // @synthesize accessibilityView=_accessibilityView;
@property(nonatomic) _Bool showSignature; // @synthesize showSignature=_showSignature;
@property(retain, nonatomic) MMCPLabel *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
@property(retain, nonatomic) TLProfileModel *profileModel; // @synthesize profileModel=_profileModel;
@property(nonatomic) struct CGRect bkgRect; // @synthesize bkgRect=_bkgRect;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak TLProfileDragAnimateHelper *animateHelper; // @synthesize animateHelper=_animateHelper;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMCPLabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) TLProfileNicknameContainerView *nicknameContainerView; // @synthesize nicknameContainerView=_nicknameContainerView;
@property(retain, nonatomic) UIImageView *bkgMaskView; // @synthesize bkgMaskView=_bkgMaskView;
@property(nonatomic) _Bool isSignatureUnsafe; // @synthesize isSignatureUnsafe=_isSignatureUnsafe;
@property(nonatomic) _Bool isNicknameUnsafe; // @synthesize isNicknameUnsafe=_isNicknameUnsafe;
@property(retain, nonatomic) NSString *cpKeyForSignature; // @synthesize cpKeyForSignature=_cpKeyForSignature;
@property(retain, nonatomic) NSString *cpKeyForNickname; // @synthesize cpKeyForNickname=_cpKeyForNickname;
@property(copy, nonatomic) CDUnknownBlockType navigationBlock; // @synthesize navigationBlock=_navigationBlock;
@property(copy, nonatomic) CDUnknownBlockType onTouchUpInsideBlock; // @synthesize onTouchUpInsideBlock=_onTouchUpInsideBlock;
@property(copy, nonatomic) CDUnknownBlockType showConcatBlock; // @synthesize showConcatBlock=_showConcatBlock;
- (void)updateExpandableHeaderView;
- (void)updateProfileModel:(id)arg1;
- (void)updateAccessibilityElements;
- (void)updateAccessibilityInfo;
- (void)loadAccessibilityView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTouchUpInside;
- (void)showContactInfo;
- (void)showChangeBkgOption;
- (void)setupUI;
- (double)mediaViewDrawDownBottomMargin;
- (double)mediaViewBottomMargin;
- (void)updateframe;
- (id)initWithTableView:(id)arg1 animator:(id)arg2 viewController:(id)arg3 config:(shared_ptr_448daa3e)arg4 bkgRect:(struct CGRect)arg5 profileModel:(id)arg6;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

