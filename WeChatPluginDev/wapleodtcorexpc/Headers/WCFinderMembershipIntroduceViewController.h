//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, MMFinderLiveBuyTicketHandle, NSString, UIButton, UIScrollView, UIView, WCFinderAnimationLoadingView, WCFinderCollectionHalfScreenViewController, WCFinderInvalidTipsView, WCFinderLiveAudienceNoticeReporter, WCFinderMaskButton, WCFinderMemberShipBlockView, WCFinderMemberShipConsumeViewModel, WCFinderMemberShipIntroduceReporter, WCFinderMemberShipZoneIntroduceHeader, WCFinderMembershipIntroduceViewModel, WCFinderMembershipPaymentBottomView;

@interface WCFinderMembershipIntroduceViewController
{
    UIScrollView *_containerView;
    WCFinderMembershipPaymentBottomView *_payBottomView;
    WCFinderMemberShipZoneIntroduceHeader *_headerView;
    WCFinderMembershipIntroduceViewModel *_viewModel;
    UIButton *_retryButton;
    WCFinderMemberShipBlockView *_blockView;
    WCFinderMaskButton *_confirmButton;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderInvalidTipsView *_invalidTipsView;
    UIView *_originView;
    WCFinderCollectionHalfScreenViewController *_curCollectionHalfScreenVC;
    WCFinderLiveAudienceNoticeReporter *_liveReporter;
    WCFinderMemberShipIntroduceReporter *_memberShipIntroduceReporter;
    WCFinderMemberShipConsumeViewModel *_consumeViewModel;
    MMFinderLiveBuyTicketHandle *_ticketHandle;
    FinderLiveNoticeInfo *_noticeToReserve;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeToReserve; // @synthesize noticeToReserve=_noticeToReserve;
@property(retain, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle; // @synthesize ticketHandle=_ticketHandle;
@property(retain, nonatomic) WCFinderMemberShipConsumeViewModel *consumeViewModel; // @synthesize consumeViewModel=_consumeViewModel;
@property(retain, nonatomic) WCFinderMemberShipIntroduceReporter *memberShipIntroduceReporter; // @synthesize memberShipIntroduceReporter=_memberShipIntroduceReporter;
@property(retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveReporter; // @synthesize liveReporter=_liveReporter;
@property(nonatomic) __weak WCFinderCollectionHalfScreenViewController *curCollectionHalfScreenVC; // @synthesize curCollectionHalfScreenVC=_curCollectionHalfScreenVC;
@property(retain, nonatomic) UIView *originView; // @synthesize originView=_originView;
@property(retain, nonatomic) WCFinderInvalidTipsView *invalidTipsView; // @synthesize invalidTipsView=_invalidTipsView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderMaskButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) WCFinderMemberShipBlockView *blockView; // @synthesize blockView=_blockView;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) WCFinderMembershipIntroduceViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderMemberShipZoneIntroduceHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCFinderMembershipPaymentBottomView *payBottomView; // @synthesize payBottomView=_payBottomView;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showHalfScreenViewController:(id)arg1;
- (void)onFinderMemberShipZoneIntroduceHeaderSectionHeaderClickAll:(id)arg1;
- (void)onFinderMemberShipZoneIntroduceHeaderHeightChanged;
- (void)onCloseFullScreenPlayComplete:(id)arg1;
- (void)onActivityFeed:(id)arg1 clickVideo:(id)arg2 originRect:(struct CGRect)arg3 originView:(id)arg4;
- (void)onActivityFeed:(id)arg1 clickPhoto:(id)arg2 photoIndex:(long long)arg3 originViewArr:(id)arg4;
- (_Bool)needShowLiveMinizeWindowRunTime;
- (void)onFinderMembershipIntroduceBecomeMember:(unsigned long long)arg1;
- (void)finderInvalidTipsViewDidClickComplainButton:(id)arg1;
- (void)finderInvalidTipsView:(id)arg1 didClickLink:(id)arg2;
- (void)finderInvalidTipsViewDidClickConfirmButton:(id)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onPreviewListClickBecomeMemberButton;
- (void)onPayButtonClicked;
- (void)onClickConfirm;
- (id)collectionHalfListCustomRightView:(int)arg1;
- (_Bool)collectionHalfListNeedShowBackgroupMask;
- (void)collectionHalfListWillAppear:(id)arg1;
- (_Bool)collectionHalfListForbidAutoClose;
- (_Bool)collectionHalfList:(id)arg1 handleClickContentVM:(id)arg2;
- (id)fetchCollectionHalfListSheetWithContentVM:(id)arg1 collectionInfo:(id)arg2;
- (void)showFinderMemberShipPreviewListViewControllerWithCollectionViewTag:(unsigned long long)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)showFinderMemberShipIntroducePlayViewControllerWithContentVMs:(id)arg1 indexPath:(id)arg2 feedType:(int)arg3;
- (void)onFinderMemberShipZoneIntroducePayNoticeOnLinkClicked:(id)arg1;
- (void)onFinderMemberShipZoneIntroduceCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onMemberShipConsumeViewModelPurchaseMemberShipFail;
- (void)onMemberShipConsumeViewModelPurchaseMemberShipCancel;
- (id)getCurrentViewController;
- (void)onFinderMemberShipVisitorStatusHasChanged:(unsigned long long)arg1;
- (void)unsubscribe;
- (void)onClickRetry;
- (void)showInvalidView;
- (void)showMemberBlockView;
- (void)showValidContent;
- (void)onMembershipIntroduceViewModelDetailFetched:(id)arg1 remote:(_Bool)arg2;
- (void)onMembershipIntroduceViewModelRequestDetailFailed:(id)arg1;
- (void)bindPageReport;
- (void)reportProfile;
- (void)onClickMore;
- (id)navigationBarBackgroundColor;
- (void)addLoadingView;
- (void)addConfirmView;
- (void)addHeaderView;
- (void)addContainerView;
- (void)setupViews;
- (void)setupBarButtonItems;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)configDefaultSettings;
- (void)dealloc;
- (id)initWithParams:(id)arg1;
- (id)genAudienceNoticeReportParams;
- (void)subscribeMemberAndAutoReserveNotice:(id)arg1;
- (void)onLiveNoticeViewMoreNoticesButtonClicked:(id)arg1;
- (void)onLiveNoticeViewActionButtonClicked:(id)arg1;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(id)arg1;
- (void)onLiveLivingViewMoreNoticeItemClick:(id)arg1;
- (void)onLiveLivingViewMainItemClick:(id)arg1;
- (void)openMoreNoticeListViewControllerWithNoticeList:(id)arg1 targetNoticeId:(id)arg2;
- (void)checkAndOpenNoticesAutomatically;
- (void)onMembershipIntroduceViewModelFetchedForHeader:(_Bool)arg1;
- (void)onViewWillDisappearForHeader;
- (void)onViewDidLoadForHeader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

