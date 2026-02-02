//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class Announcement, FinderEncashPrepareInfo, FinderGetLiveIncomePageResponse, MMFinderLiveFetchMoneyAnnouncementView, MMUILabel, NSMutableArray, NSString, PrepareIncomeEncashResponse, SecurityInfoAuthrizeLogic, SettleToAgencyRelateInfo, UIView, WCCoinFetchMoneyInputViewController, WCCoinFetchMoneySuccessViewController, WCCoinInterceptLogic, WCPayJSApiVerifyPayPasswordControlLogic, WCTableViewManager;
@protocol WCCoinFetchMoneyViewControllerDelegate;

@interface WCCoinFetchMoneyViewController
{
    _Bool _needGetSettleInfo;
    _Bool _isCocertActivate;
    id <WCCoinFetchMoneyViewControllerDelegate> _delegate;
    UIView *_contentView;
    UIView *_linksContainerView;
    MMUILabel *_bottomLabel;
    Announcement *_announcement;
    FinderGetLiveIncomePageResponse *_pageInfo;
    NSMutableArray *_cellPageItems;
    NSMutableArray *_bottomItemsArray;
    SettleToAgencyRelateInfo *_settleInfo;
    SecurityInfoAuthrizeLogic *_authLogic;
    WCCoinInterceptLogic *_interceptLogic;
    WCTableViewManager *_tableViewManager;
    MMFinderLiveFetchMoneyAnnouncementView *_announcementView;
    NSString *_tips;
    FinderEncashPrepareInfo *_lastEncashPrepareInfo;
    unsigned long long _amount;
    NSString *_billNo;
    PrepareIncomeEncashResponse *_prepareEncashResponse;
    WCCoinFetchMoneyInputViewController *_inputMoneyVC;
    WCCoinFetchMoneySuccessViewController *_fetchMoneySuccessVC;
    WCPayJSApiVerifyPayPasswordControlLogic *_currentLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayJSApiVerifyPayPasswordControlLogic *currentLogic; // @synthesize currentLogic=_currentLogic;
@property(retain, nonatomic) WCCoinFetchMoneySuccessViewController *fetchMoneySuccessVC; // @synthesize fetchMoneySuccessVC=_fetchMoneySuccessVC;
@property(retain, nonatomic) WCCoinFetchMoneyInputViewController *inputMoneyVC; // @synthesize inputMoneyVC=_inputMoneyVC;
@property(retain, nonatomic) PrepareIncomeEncashResponse *prepareEncashResponse; // @synthesize prepareEncashResponse=_prepareEncashResponse;
@property(retain, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
@property(nonatomic) unsigned long long amount; // @synthesize amount=_amount;
@property(nonatomic) FinderEncashPrepareInfo *lastEncashPrepareInfo; // @synthesize lastEncashPrepareInfo=_lastEncashPrepareInfo;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) _Bool isCocertActivate; // @synthesize isCocertActivate=_isCocertActivate;
@property(nonatomic) _Bool needGetSettleInfo; // @synthesize needGetSettleInfo=_needGetSettleInfo;
@property(retain, nonatomic) MMFinderLiveFetchMoneyAnnouncementView *announcementView; // @synthesize announcementView=_announcementView;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) WCCoinInterceptLogic *interceptLogic; // @synthesize interceptLogic=_interceptLogic;
@property(retain, nonatomic) SecurityInfoAuthrizeLogic *authLogic; // @synthesize authLogic=_authLogic;
@property(retain, nonatomic) SettleToAgencyRelateInfo *settleInfo; // @synthesize settleInfo=_settleInfo;
@property(retain, nonatomic) NSMutableArray *bottomItemsArray; // @synthesize bottomItemsArray=_bottomItemsArray;
@property(retain, nonatomic) NSMutableArray *cellPageItems; // @synthesize cellPageItems=_cellPageItems;
@property(retain, nonatomic) FinderGetLiveIncomePageResponse *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(retain, nonatomic) Announcement *announcement; // @synthesize announcement=_announcement;
@property(retain, nonatomic) MMUILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIView *linksContainerView; // @synthesize linksContainerView=_linksContainerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCCoinFetchMoneyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)announcementViewWidth;
- (double)announcementViewHeight:(id)arg1;
- (void)registerYReportSdk;
- (void)statusViewControlleDidClickDone:(id)arg1;
- (void)encashIncomeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)internalFetchMoneySuccessWtih:(id)arg1 incomBizInfo:(id)arg2;
- (void)encashIncomeCgi:(id)arg1 didGetResponse:(id)arg2;
- (id)getCurrentURL;
- (id)getParam;
- (void)onVerifyResult:(id)arg1;
- (void)didClickTaxCutEntrance:(id)arg1;
- (void)vcDidBePopedOrDismissed:(id)arg1;
- (void)shouldFetchMoney:(id)arg1 amount:(unsigned long long)arg2;
- (void)setCacheAnnouncementClicked;
- (void)cacheAnnouncement:(id)arg1;
- (void)addAnnouncementIfNeed:(id)arg1;
- (void)addPageItemIfNeed:(id)arg1;
- (void)clearPageItems;
- (void)onClickCurrnetAnnouncement;
- (void)clickMMFinderLiveFetchMoneyAnnouncementView:(id)arg1;
- (void)clickMMFinderLiveFetchMoneyAnnouncementCell:(id)arg1;
- (void)clickMMFinderLiveFetchMoneyTableCellDetailButton:(id)arg1;
- (void)clickMMFinderLiveFetchMoneyTableCellEncashButton:(id)arg1;
- (id)getTopVC;
- (void)showError:(id)arg1;
- (void)handleIntercept:(id)arg1;
- (_Bool)handleFinderEncashIntercept:(id)arg1 incomeBizInfo:(id)arg2;
- (void)tapBottom:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickIncomeDetailWithUrl:(id)arg1;
- (void)onClickIncomeDetail;
- (void)onClickLeftItem;
- (void)clickBalance;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getRewardTypeWithType:(unsigned int)arg1;
- (void)showSelectEncashWaySheetWith:(id)arg1;
- (void)internalEnterInputPageWith:(id)arg1;
- (void)continueClickFetchMoneyCheckWith:(id)arg1;
- (void)clickFetchMoney:(id)arg1;
- (void)clickFetchMoney;
@property(readonly, nonatomic) _Bool noMoneyForSinglePage;
@property(readonly, nonatomic) FinderEncashPrepareInfo *singleEncashPrepareInfo;
- (id)singleIncomePageItem;
- (void)startEncash:(id)arg1 incomeBizInfo:(id)arg2;
- (void)startGetWCPayTokenWith:(id)arg1;
- (void)getSettleInfoIfNeed;
- (void)uploadFinderRealNameToken:(id)arg1;
- (void)getSecurityInfoAuthTokenWith:(id)arg1 authParams:(id)arg2;
- (void)startFinderRealNameVerifyWith:(id)arg1;
- (void)fetchMoney:(id)arg1 encashAmount:(unsigned long long)arg2 incomeBizInfo:(id)arg3;
- (void)getPagetInfo;
- (_Bool)containsMultiPages;
- (void)realEnterInputMoneyVC:(id)arg1 incomeBizInfo:(id)arg2;
- (void)enterInputMoneyVC:(id)arg1;
- (_Bool)containBottomTips;
- (id)bottomTextViewWithContent:(id)arg1 url:(id)arg2 maxWidth:(double)arg3;
- (id)makeNewSeperatorLine:(struct CGRect)arg1;
- (id)genBottomActivitiesWith:(id)arg1 maxWidth:(double)arg2 margin:(double)arg3;
- (void)layoutBottomActivities;
- (void)addCell;
- (void)addAnnouncementCell;
- (void)configureOptionTableView;
- (void)layoutMultiPages;
- (id)createEnterpriseAgencyTipsWithContent:(id)arg1;
- (id)createAgencyTipsWithContent:(id)arg1;
- (void)clickBottomIKnow;
- (void)genBottomViewItemsWith:(id)arg1 container:(id)arg2 layoutIndex:(long long)arg3;
- (id)createEncashButton;
- (void)layoutEncashContentsFor:(id)arg1;
- (void)layoutBottomView;
- (void)layoutTitleView:(id)arg1;
- (void)layoutAnnouncementViewIfNeed:(id)arg1;
- (void)layoutTopView;
- (void)layoutNoMoneyEnterpriseTopView;
- (void)layoutContentView;
- (void)layoutNavigationBar;
- (void)layoutTopViewWithIncomeTips;
- (void)layoutNoMoneyTopViewWithIncomeTips;
- (void)layoutSinglePage;
- (void)refresh;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSettleInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

