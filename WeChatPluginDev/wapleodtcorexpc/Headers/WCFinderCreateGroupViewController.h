//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, FinderNicknameVerifyInfo, MMGrowTextView, MMUIButton, NSString, RichTextView, UIButton, UIImage, UILabel, UIScrollView, UIView, WCFinderBannerView, WCFinderContact, WCFinderCreateUserVerifyPhoneLogic, WCFinderCreateUserViewModel, WCFinderGetWechatHDHeadFetcher;
@protocol WCFinderCreateGroupViewControllerDelegate;

@interface WCFinderCreateGroupViewController
{
    _Bool _loading;
    id <WCFinderCreateGroupViewControllerDelegate> _delegate;
    unsigned long long _createScene;
    NSString *_customTitleText;
    NSString *_customConfirmButtonText;
    NSString *_sourceID;
    CContact *_chatRoomContact;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    MMGrowTextView *_nameInputTextView;
    MMGrowTextView *_signatureTextView;
    UIView *_containerView;
    UIButton *_headerImageView;
    UIButton *_changeHeadImageButton;
    UIImage *_avatarImage;
    UIButton *_confirmButton;
    UILabel *_nameWordCountTips;
    MMUIButton *_cleanNameWordBtn;
    WCFinderBannerView *_bannerView;
    WCFinderCreateUserViewModel *_viewModel;
    MMUIButton *_aggreCheckBox;
    RichTextView *_aggrementView;
    unsigned long long _createUserState;
    WCFinderContact *_fadeContact;
    FinderNicknameVerifyInfo *_verifyInfo;
    unsigned long long _errorScene;
    WCFinderGetWechatHDHeadFetcher *_wechatHDHeadFetcher;
    NSString *_recommentNickName;
    WCFinderCreateUserVerifyPhoneLogic *_verifyPhoneLogic;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) WCFinderCreateUserVerifyPhoneLogic *verifyPhoneLogic; // @synthesize verifyPhoneLogic=_verifyPhoneLogic;
@property(copy, nonatomic) NSString *recommentNickName; // @synthesize recommentNickName=_recommentNickName;
@property(retain, nonatomic) WCFinderGetWechatHDHeadFetcher *wechatHDHeadFetcher; // @synthesize wechatHDHeadFetcher=_wechatHDHeadFetcher;
@property(nonatomic) unsigned long long errorScene; // @synthesize errorScene=_errorScene;
@property(retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(retain, nonatomic) WCFinderContact *fadeContact; // @synthesize fadeContact=_fadeContact;
@property(nonatomic) unsigned long long createUserState; // @synthesize createUserState=_createUserState;
@property(retain, nonatomic) RichTextView *aggrementView; // @synthesize aggrementView=_aggrementView;
@property(retain, nonatomic) MMUIButton *aggreCheckBox; // @synthesize aggreCheckBox=_aggreCheckBox;
@property(retain, nonatomic) WCFinderCreateUserViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) MMUIButton *cleanNameWordBtn; // @synthesize cleanNameWordBtn=_cleanNameWordBtn;
@property(retain, nonatomic) UILabel *nameWordCountTips; // @synthesize nameWordCountTips=_nameWordCountTips;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) UIButton *changeHeadImageButton; // @synthesize changeHeadImageButton=_changeHeadImageButton;
@property(retain, nonatomic) UIButton *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMGrowTextView *signatureTextView; // @synthesize signatureTextView=_signatureTextView;
@property(retain, nonatomic) MMGrowTextView *nameInputTextView; // @synthesize nameInputTextView=_nameInputTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
@property(retain, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(retain, nonatomic) NSString *customConfirmButtonText; // @synthesize customConfirmButtonText=_customConfirmButtonText;
@property(retain, nonatomic) NSString *customTitleText; // @synthesize customTitleText=_customTitleText;
@property(nonatomic) unsigned long long createScene; // @synthesize createScene=_createScene;
@property(nonatomic) __weak id <WCFinderCreateGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportCreatePage:(long long)arg1;
- (int)feedViewControllerScene;
- (void)registerYReportSdk;
- (_Bool)clearErrorScene:(unsigned long long)arg1;
- (void)loadingRecommentNickName;
- (void)updateNameWordCountTipsLabel:(int)arg1;
- (id)createGrowTextView;
- (id)createIntroLabel;
- (id)createSeparateLine;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)loadImageToEditor:(id)arg1;
- (void)onSelectAvatarFromWechat;
- (void)showImagePicker:(long long)arg1;
- (void)onPhotoLibrary;
- (void)onCamera;
- (void)TextViewDidEnter:(id)arg1;
- (void)updateAllWordCountTipsLabel;
- (void)handleNameTextView;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)onClickBannerLink:(id)arg1;
- (void)NSStringSelectViewControllerOnModifySex:(id)arg1;
- (void)onClickCleanNameBtn:(id)arg1;
- (void)onAgreementCheckBoxClick:(id)arg1;
- (void)handleImage:(id)arg1;
- (void)showActionSheet;
- (void)doCreateUser;
- (void)verityPhoneFailed;
- (void)verityPhoneSucces;
- (void)clickConfirmAction:(id)arg1;
- (_Bool)checkCanCreateUser;
- (void)leftBarButtonClick;
- (void)showError:(id)arg1;
- (void)hideBanner;
- (void)showBannerWithTips:(id)arg1 textColor:(id)arg2 backGroundColor:(id)arg3;
- (void)showGrayBanner:(id)arg1;
- (void)showRedBanner:(id)arg1;
- (void)showRedBanner:(id)arg1 needVerify:(id)arg2;
- (void)setupCacheData;
- (void)fetchWeiXinHeadImage;
- (id)configureInfoView:(id)arg1;
- (void)setUpUI;
- (id)createSignatureView;
- (id)createNickNameView;
- (void)setUpHeaderView;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)initNavigationBar;
- (id)getContactCache;
- (_Bool)hasMasterSvrUsername;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

