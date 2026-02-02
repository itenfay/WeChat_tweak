//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNicknameVerifyInfo, MMGrowTextView, MMUIButton, NSMutableArray, NSString, RichTextView, UIButton, UIImage, UIImageView, UILabel, UIScrollView, UISwitch, UIView, WCFinderBannerView, WCFinderContact, WCFinderCreateUserVerifyPhoneLogic, WCFinderCreateUserViewModel, WCFinderGetWechatHDHeadFetcher;
@protocol WCFinderCreateUserViewControllerDelegate;

@interface WCFinderCreateUserViewController
{
    _Bool _loading;
    unsigned int _createSceneUserType;
    id <WCFinderCreateUserViewControllerDelegate> _delegate;
    unsigned long long _createScene;
    unsigned long long _enterScene;
    NSString *_customTitleText;
    NSString *_customConfirmButtonText;
    NSString *_sourceID;
    NSString *_fromWxUsername;
    unsigned long long _createSceneFeedId;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    MMGrowTextView *_nameInputTextView;
    UIView *_secondLine;
    UIView *_containerView;
    MMGrowTextView *_sexSelectTextView;
    MMGrowTextView *_locationSelectTextView;
    double _topForLocation;
    UIButton *_headerImageView;
    UIImage *_avatarImage;
    UIButton *_confirmButton;
    UILabel *_nameWordCountTips;
    MMUIButton *_cleanNameWordBtn;
    WCFinderBannerView *_bannerView;
    WCFinderCreateUserViewModel *_viewModel;
    NSMutableArray *_locationViews;
    UIImageView *_locationIconView;
    MMUIButton *_aggreCheckBox;
    RichTextView *_aggrementView;
    UILabel *_showInWXProfileLabel;
    UISwitch *_showInWXProfileSwitch;
    UIView *_showInWXProfileLine;
    UIView *_lineForShowInWXProfile;
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
@property(retain, nonatomic) UIView *lineForShowInWXProfile; // @synthesize lineForShowInWXProfile=_lineForShowInWXProfile;
@property(retain, nonatomic) UIView *showInWXProfileLine; // @synthesize showInWXProfileLine=_showInWXProfileLine;
@property(retain, nonatomic) UISwitch *showInWXProfileSwitch; // @synthesize showInWXProfileSwitch=_showInWXProfileSwitch;
@property(retain, nonatomic) UILabel *showInWXProfileLabel; // @synthesize showInWXProfileLabel=_showInWXProfileLabel;
@property(retain, nonatomic) RichTextView *aggrementView; // @synthesize aggrementView=_aggrementView;
@property(retain, nonatomic) MMUIButton *aggreCheckBox; // @synthesize aggreCheckBox=_aggreCheckBox;
@property(retain, nonatomic) UIImageView *locationIconView; // @synthesize locationIconView=_locationIconView;
@property(retain, nonatomic) NSMutableArray *locationViews; // @synthesize locationViews=_locationViews;
@property(retain, nonatomic) WCFinderCreateUserViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) MMUIButton *cleanNameWordBtn; // @synthesize cleanNameWordBtn=_cleanNameWordBtn;
@property(retain, nonatomic) UILabel *nameWordCountTips; // @synthesize nameWordCountTips=_nameWordCountTips;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) UIButton *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) double topForLocation; // @synthesize topForLocation=_topForLocation;
@property(retain, nonatomic) MMGrowTextView *locationSelectTextView; // @synthesize locationSelectTextView=_locationSelectTextView;
@property(retain, nonatomic) MMGrowTextView *sexSelectTextView; // @synthesize sexSelectTextView=_sexSelectTextView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *secondLine; // @synthesize secondLine=_secondLine;
@property(retain, nonatomic) MMGrowTextView *nameInputTextView; // @synthesize nameInputTextView=_nameInputTextView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long createSceneFeedId; // @synthesize createSceneFeedId=_createSceneFeedId;
@property(nonatomic) unsigned int createSceneUserType; // @synthesize createSceneUserType=_createSceneUserType;
@property(retain, nonatomic) NSString *fromWxUsername; // @synthesize fromWxUsername=_fromWxUsername;
@property(retain, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(retain, nonatomic) NSString *customConfirmButtonText; // @synthesize customConfirmButtonText=_customConfirmButtonText;
@property(retain, nonatomic) NSString *customTitleText; // @synthesize customTitleText=_customTitleText;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned long long createScene; // @synthesize createScene=_createScene;
@property(nonatomic) __weak id <WCFinderCreateUserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)reportCreatePage:(long long)arg1;
- (int)feedViewControllerScene;
- (void)configureSessionPageInOutReport;
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
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
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
- (void)updateLocationSubViewsWithSelectCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void)reportClickCreateStateIsSuccessful:(_Bool)arg1;
- (_Bool)checkCanCreateUser;
- (void)leftBarButtonClick;
- (void)clickSexSelectBtn;
- (void)clickLocationSelectBtn;
- (void)hideLocationCell;
- (void)showError:(id)arg1;
- (void)hideBanner;
- (void)showBannerWithTips:(id)arg1 textColor:(id)arg2 backGroundColor:(id)arg3;
- (void)showGrayBanner:(id)arg1;
- (void)showRedBanner:(id)arg1;
- (void)showRedBanner:(id)arg1 needVerify:(id)arg2;
- (void)setupCacheData;
- (void)fetchLocation;
- (void)fetchWeiXinHeadImage;
- (void)setUpUI;
- (void)didMoveToParentViewController:(id)arg1;
- (void)initNavigationBar;
- (void)dealloc;
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

