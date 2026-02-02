//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetEUInfoResp, NSArray, NSString, NoticeItem, UICollectionView, UIImageView, UIView, WCPayComplianceHalfPage, WCPayMainViewLogicController, WCPayMainViewTipsPageSheet, WCPayWalletEntryHeaderView;

@interface WCPayMainViewControllerV2
{
    _Bool _bHasNewOrRedDotWhenOpen;
    _Bool _bHasShowUploadIdImageAlert;
    _Bool _bNeedScrollToHead;
    _Bool _hasReportedWalletEntryReddot;
    _Bool _hasShownComplianceHalfPage;
    _Bool _hasShowTipsPageSheet;
    WCPayMainViewLogicController *_logicController;
    NoticeItem *_bannerData;
    GetEUInfoResp *_getGDPRResponse;
    UICollectionView *_collectionView;
    WCPayWalletEntryHeaderView *_headerView;
    UIView *_footerView;
    UIImageView *_wechatLogoImgView;
    double _itemLeftRightMargin;
    double _itemTopBottomMargin;
    double _itemTargetHeight;
    NSArray *_payManageLabelList;
    NSString *_complianceHalfPageData;
    WCPayComplianceHalfPage *_complianceHalfPage;
    WCPayMainViewTipsPageSheet *_tipsPageSheet;
    struct CGSize _itemTargetSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasShowTipsPageSheet; // @synthesize hasShowTipsPageSheet=_hasShowTipsPageSheet;
@property(retain, nonatomic) WCPayMainViewTipsPageSheet *tipsPageSheet; // @synthesize tipsPageSheet=_tipsPageSheet;
@property(nonatomic) _Bool hasShownComplianceHalfPage; // @synthesize hasShownComplianceHalfPage=_hasShownComplianceHalfPage;
@property(retain, nonatomic) WCPayComplianceHalfPage *complianceHalfPage; // @synthesize complianceHalfPage=_complianceHalfPage;
@property(retain, nonatomic) NSString *complianceHalfPageData; // @synthesize complianceHalfPageData=_complianceHalfPageData;
@property(nonatomic) _Bool hasReportedWalletEntryReddot; // @synthesize hasReportedWalletEntryReddot=_hasReportedWalletEntryReddot;
@property(retain, nonatomic) NSArray *payManageLabelList; // @synthesize payManageLabelList=_payManageLabelList;
@property(nonatomic) _Bool bNeedScrollToHead; // @synthesize bNeedScrollToHead=_bNeedScrollToHead;
@property(nonatomic) double itemTargetHeight; // @synthesize itemTargetHeight=_itemTargetHeight;
@property(nonatomic) double itemTopBottomMargin; // @synthesize itemTopBottomMargin=_itemTopBottomMargin;
@property(nonatomic) double itemLeftRightMargin; // @synthesize itemLeftRightMargin=_itemLeftRightMargin;
@property(nonatomic) struct CGSize itemTargetSize; // @synthesize itemTargetSize=_itemTargetSize;
@property(nonatomic) _Bool bHasShowUploadIdImageAlert; // @synthesize bHasShowUploadIdImageAlert=_bHasShowUploadIdImageAlert;
@property(retain, nonatomic) UIImageView *wechatLogoImgView; // @synthesize wechatLogoImgView=_wechatLogoImgView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCPayWalletEntryHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) GetEUInfoResp *getGDPRResponse; // @synthesize getGDPRResponse=_getGDPRResponse;
@property(retain, nonatomic) NoticeItem *bannerData; // @synthesize bannerData=_bannerData;
@property(retain, nonatomic) WCPayMainViewLogicController *logicController; // @synthesize logicController=_logicController;
@property(nonatomic) _Bool bHasNewOrRedDotWhenOpen; // @synthesize bHasNewOrRedDotWhenOpen=_bHasNewOrRedDotWhenOpen;
- (void)registerYReportSdk;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (_Bool)isWCMallWalletMangeControllerNeedPresentShow;
- (_Bool)isWCMallWalletMangeControlLogicNeedShowLoading;
- (void)onBatchFunctionOperateDone;
- (void)OnWCPayPwdViewControllerBack;
- (void)realNameTipsVCDidConfirm:(id)arg1;
- (void)showComplianceHalfPageIfExist;
- (void)reportExposureData;
- (void)handleEventAfterSvrDataFinishReload;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)onWCPayWalletViewControllerDidCallUpdateBalance;
- (void)onWCPayWalletViewControllerDidCallUpdate;
- (void)calcItemTopBottomMargin;
- (void)calcItemLeftRightMargin;
- (void)calcItemSize;
- (double)calcItemTargetHeightWithWidth:(double)arg1;
- (_Bool)useSmallBottomMarginInDecorationView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)balanceEntryBtnClick;
- (void)offlinePayEntryBtnClick;
- (void)onClickBannerUrl:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)manageServiceBtnClick;
- (void)checkIfNeedShowRealnameGuideView:(id)arg1;
- (_Bool)checkShowChangeWalletTips:(id)arg1;
- (void)updateWalletBalanceViewData:(id)arg1;
- (void)refreshView;
- (void)onOperate;
- (void)onMainViewTipsPageSheetClickButton;
- (void)checkAndShowAlertInfo:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1;
- (void)openWeappWithItemData:(id)arg1;
- (void)openH5WithItemData:(id)arg1;
- (void)showBusinessDisclaimerWithItemData:(id)arg1;
- (void)refreshViewAfterGetGDPRResponse:(id)arg1;
- (void)refreshViewAfterGetFunctionData:(_Bool)arg1;
- (void)refreshViewAfterUpdatePaycardListData:(id)arg1 isFromCache:(_Bool)arg2;
- (void)popToRootWithoutAnimation;
- (void)timeoutNumberStartTimeout;
- (id)getViewController;
- (void)refreshViewControllerWithData:(id)arg1;
- (void)enterReceiveOrPayLogic;
- (void)setupFooterView;
- (void)setupHeaderView;
- (void)setupCollectionView;
- (void)setupView;
- (void)setupData;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)navigationBarBackgroundColor;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

