//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, MMFinderLiveBuyTicketHandle, MMLiveIconButton, MMPaddingView, MMUIButton, MMUILabel, MMWebImageView, NSString, WCFinderBaseCgi, WCFinderLiveNoticePayActionView, WCLiveActionSheet;

@interface MMFinderLiveNoticePromotePubbleContentView
{
    _Bool _isLastReserved;
    _Bool _isLastHasPay;
    MMWebImageView *_titleImgView;
    MMUIButton *_detailButton;
    MMUILabel *_titleLabel;
    MMUILabel *_introLabel;
    MMUILabel *_couponsRecommendLabel;
    MMPaddingView *_couponsTitleLabel;
    MMLiveIconButton *_actionButton;
    WCFinderLiveNoticePayActionView *_payActionView;
    FinderLiveNoticeInfo *_noticeInfo;
    WCFinderBaseCgi *_reserveNoticeCGI;
    WCLiveActionSheet *_actionSheet;
    MMFinderLiveBuyTicketHandle *_ticketHandle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle; // @synthesize ticketHandle=_ticketHandle;
@property(nonatomic) _Bool isLastHasPay; // @synthesize isLastHasPay=_isLastHasPay;
@property(nonatomic) _Bool isLastReserved; // @synthesize isLastReserved=_isLastReserved;
@property(nonatomic) __weak WCLiveActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) WCFinderBaseCgi *reserveNoticeCGI; // @synthesize reserveNoticeCGI=_reserveNoticeCGI;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(retain, nonatomic) WCFinderLiveNoticePayActionView *payActionView; // @synthesize payActionView=_payActionView;
@property(retain, nonatomic) MMLiveIconButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMPaddingView *couponsTitleLabel; // @synthesize couponsTitleLabel=_couponsTitleLabel;
@property(retain, nonatomic) MMUILabel *couponsRecommendLabel; // @synthesize couponsRecommendLabel=_couponsRecommendLabel;
@property(retain, nonatomic) MMUILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (void)reportForSubscribeNotice:(unsigned long long)arg1 isFromDetailNotice:(_Bool)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onDismissed;
- (void)disMissSelf;
- (void)changeNoticeStatus:(unsigned long long)arg1;
- (void)showCouponPageSheet;
- (void)subscribeNotice:(_Bool)arg1 isFromDetailView:(_Bool)arg2;
- (id)getLiveCGIExtentParamsWithOptype:(unsigned long long)arg1 isFromDetailView:(_Bool)arg2;
- (unsigned long long)getChangeState;
- (void)showActionSheetForUnReserveFromDetailView:(_Bool)arg1;
- (void)handleSubscribeAction:(_Bool)arg1 isFromDetailView:(_Bool)arg2;
- (void)pushToMembershipIntroVC;
- (void)showConcertTicketConfirmed:(id)arg1;
- (void)getTicketClick:(id)arg1;
- (void)hadndleBuySuccess:(id)arg1 isFromDetailView:(_Bool)arg2;
- (void)onClickNeedPayLiveNotice:(id)arg1 isFromDetailView:(_Bool)arg2;
- (void)onClickFreeLiveNotice:(id)arg1 isFromDetailView:(_Bool)arg2;
- (void)onActionButtonClick:(_Bool)arg1;
- (void)onSubscribeAction;
- (void)preLoadConcertPageSheet:(id)arg1;
- (void)showdLiveNoticeDetailView;
- (void)detailButtonClick;
- (double)rightWidgetLeft;
- (void)updateActionButtonWhenFree;
- (void)updateActionButtonWhenNeedPay;
- (void)updateActionButtonStyle;
- (void)updateLabelsOriginY;
- (void)layoutCouponsViews;
- (void)layoutIntroLabel;
- (void)layoutTitleLabel;
- (void)layoutTitleImgView;
- (_Bool)isShowingPaidView;
- (void)layoutDetailButton;
- (void)layoutPayActionView;
- (void)layoutActionButton;
- (id)standardReportDict;
- (void)updateLastReserveState;
- (void)checkShouldDismissForNoticeNotNeedPayment;
- (void)onCouponDidUpdate:(id)arg1;
- (long long)actionTypeForPromoteReport;
- (void)onClosed;
- (void)onShowed;
- (id)onPromoteBubbleActionExtraInfo;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)dealloc;
- (id)accessibilityValueString;
- (id)accessibilityLabelString;
- (_Bool)shouldBeAccessibilityElement;
- (void)refreshData;
- (void)layoutUI;
- (void)convertPromoteMsgInfo:(id)arg1;
- (id)initWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

