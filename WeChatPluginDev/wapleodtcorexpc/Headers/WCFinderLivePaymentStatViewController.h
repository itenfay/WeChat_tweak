//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveOnlineUserProfileView, MMFinderLiveTask, MMLoadingView, MMTableView, MMUIButton, MMUILabel, NSData, NSMutableArray, NSString, UIView, WCTimeLineFooterView;

@interface WCFinderLivePaymentStatViewController
{
    unsigned int _totalNum;
    MMFinderLiveTask *_liveTask;
    UIView *_statisticsView;
    MMUILabel *_statAudienceTitleLabel;
    MMUILabel *_audienceHeaderTitleLabel;
    MMUILabel *_wecoinHeaderTitleLabel;
    MMUILabel *_totalAudienceCountLabel;
    MMUIButton *_introductionButton;
    MMLoadingView *_loadingView;
    MMUILabel *_emptyTitleLabel;
    WCTimeLineFooterView *_footerView;
    MMTableView *_paymentRecordsTableView;
    MMFinderLiveOnlineUserProfileView *_profileView;
    NSMutableArray *_paymentInfoList;
    NSData *_lastBuffer;
    unsigned long long _heatValue;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int totalNum; // @synthesize totalNum=_totalNum;
@property(nonatomic) unsigned long long heatValue; // @synthesize heatValue=_heatValue;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *paymentInfoList; // @synthesize paymentInfoList=_paymentInfoList;
@property(retain, nonatomic) MMFinderLiveOnlineUserProfileView *profileView; // @synthesize profileView=_profileView;
@property(retain, nonatomic) MMTableView *paymentRecordsTableView; // @synthesize paymentRecordsTableView=_paymentRecordsTableView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMUILabel *emptyTitleLabel; // @synthesize emptyTitleLabel=_emptyTitleLabel;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUIButton *introductionButton; // @synthesize introductionButton=_introductionButton;
@property(retain, nonatomic) MMUILabel *totalAudienceCountLabel; // @synthesize totalAudienceCountLabel=_totalAudienceCountLabel;
@property(retain, nonatomic) MMUILabel *wecoinHeaderTitleLabel; // @synthesize wecoinHeaderTitleLabel=_wecoinHeaderTitleLabel;
@property(retain, nonatomic) MMUILabel *audienceHeaderTitleLabel; // @synthesize audienceHeaderTitleLabel=_audienceHeaderTitleLabel;
@property(retain, nonatomic) MMUILabel *statAudienceTitleLabel; // @synthesize statAudienceTitleLabel=_statAudienceTitleLabel;
@property(retain, nonatomic) UIView *statisticsView; // @synthesize statisticsView=_statisticsView;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
- (void)onGetFinderContact:(id)arg1 contact:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)gotoChatViewVCWithContact:(id)arg1 contactExtInfo:(id)arg2;
- (void)showProfileView:(id)arg1 liveContact:(id)arg2;
- (void)fetchRewardGainsInfoList;
- (void)reloadData;
- (void)onLiveGiftGainRecordCellHeadImageClicked:(id)arg1;
- (void)onIntroductionButtonClick;
- (void)cashOut:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)layoutContentView;
- (void)setupData;
- (void)setupUI;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

