//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AAQueryDetailRes, MMTableView, MMTipsViewController, NSMutableArray, NSString, WCActionSheet, WCPayGPOrderStatusHeaderView, WCPayGPPhotoViewController, WCPayNoticeItemView, WCPayRemarkPageSheet, WCPayWebImageView;
@protocol WCPayGPOrderStatusViewControllerDelegate;

@interface WCPayGPOrderStatusViewController
{
    _Bool _bIsAllPayerHasPay;
    _Bool _bIsLoadingImage;
    _Bool _bIsHeaderViewThemeExpand;
    id <WCPayGPOrderStatusViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    AAQueryDetailRes *_orderDetailData;
    NSMutableArray *_sectionOneData;
    NSMutableArray *_sectionTwoData;
    NSString *_payerSolitaireContent;
    MMTipsViewController *_payNotifyConfirmTipsView;
    WCPayWebImageView *_remarkImageView;
    WCPayGPPhotoViewController *_photoViewController;
    WCPayRemarkPageSheet *_remarkPageSheet;
    WCPayGPOrderStatusHeaderView *_tableHeaderView;
    WCActionSheet *_m_actionSheet;
    WCPayNoticeItemView *_noticeItemView;
    struct CGRect _picImgFromRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNoticeItemView *noticeItemView; // @synthesize noticeItemView=_noticeItemView;
@property(retain) WCActionSheet *m_actionSheet; // @synthesize m_actionSheet=_m_actionSheet;
@property(nonatomic) _Bool bIsHeaderViewThemeExpand; // @synthesize bIsHeaderViewThemeExpand=_bIsHeaderViewThemeExpand;
@property(retain, nonatomic) WCPayGPOrderStatusHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) WCPayRemarkPageSheet *remarkPageSheet; // @synthesize remarkPageSheet=_remarkPageSheet;
@property(nonatomic) struct CGRect picImgFromRect; // @synthesize picImgFromRect=_picImgFromRect;
@property(nonatomic) _Bool bIsLoadingImage; // @synthesize bIsLoadingImage=_bIsLoadingImage;
@property(retain, nonatomic) WCPayGPPhotoViewController *photoViewController; // @synthesize photoViewController=_photoViewController;
@property(retain, nonatomic) WCPayWebImageView *remarkImageView; // @synthesize remarkImageView=_remarkImageView;
@property(retain, nonatomic) MMTipsViewController *payNotifyConfirmTipsView; // @synthesize payNotifyConfirmTipsView=_payNotifyConfirmTipsView;
@property(retain, nonatomic) NSString *payerSolitaireContent; // @synthesize payerSolitaireContent=_payerSolitaireContent;
@property(nonatomic) _Bool bIsAllPayerHasPay; // @synthesize bIsAllPayerHasPay=_bIsAllPayerHasPay;
@property(retain, nonatomic) NSMutableArray *sectionTwoData; // @synthesize sectionTwoData=_sectionTwoData;
@property(retain, nonatomic) NSMutableArray *sectionOneData; // @synthesize sectionOneData=_sectionOneData;
@property(retain, nonatomic) AAQueryDetailRes *orderDetailData; // @synthesize orderDetailData=_orderDetailData;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayGPOrderStatusViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickJumpInfo:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)pageSheetConfirmWithRemark:(id)arg1;
- (void)handleSetPayerRemark;
- (void)onPhtotViewControllerClickSaveImage:(id)arg1;
- (_Bool)shouldShowDeleteMenu;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)showPhotoViewController;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)handleViewRemarkImage;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)pressSendPayNotify;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)genOrderStatusSubLabel;
- (_Bool)isActivityAAType;
- (_Bool)isCommonAAType;
- (void)pressLaunchNewGroupPay;
- (void)handleViewBalanceLinkClick;
- (void)handlePayBtnPress;
- (void)confirmToCloseOrder;
- (void)pressCloseOrder;
- (_Bool)bHasCloseOrderItem;
- (void)rightBarButtonPress;
- (id)getContactFromUsername:(id)arg1;
- (void)orderDetailVCCancel;
- (void)makeSectionContactContentView:(id)arg1 withIndexPath:(id)arg2;
- (id)getAAPayerWithIndexPath:(id)arg1;
- (void)makeSectionTitleContentView:(id)arg1 indexPath:(id)arg2;
- (id)getSectionTtileContent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)genTableFooterView;
- (void)genTableFooterViewAfterReloadData;
- (void)refreshHeaderView;
- (id)genTableHeaderView;
- (void)setupContentView;
- (void)setupReportData;
- (void)setupData;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)refreshViewCotnrollerWithControlData:(id)arg1;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

