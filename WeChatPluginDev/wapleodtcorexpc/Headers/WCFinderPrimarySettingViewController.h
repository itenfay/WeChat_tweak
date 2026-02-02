//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DataCenterConfig, FinderNewUserPrepareResponse, ForwardMessageLogicController, NSString, WCFinderContact, WCFinderPersonalSettingParams, WCFinderPrimarySettingViewModel, WCFinderProcessTimeRecorder, WCTableViewManager;

@interface WCFinderPrimarySettingViewController
{
    _Bool _hasExposeFinderToBrandSwitch;
    _Bool _hasExposeCreatorCenter;
    FinderNewUserPrepareResponse *_prepareResponse;
    WCFinderPersonalSettingParams *_params;
    WCFinderContact *_contact;
    WCFinderPrimarySettingViewModel *_viewModel;
    DataCenterConfig *_dataCenterConfig;
    WCTableViewManager *_tableViewManager;
    long long _fetchPrepareState;
    WCFinderProcessTimeRecorder *_creatorCenterProcessRecorder;
    ForwardMessageLogicController *_forwardController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMessageLogicController *forwardController; // @synthesize forwardController=_forwardController;
@property(retain, nonatomic) WCFinderProcessTimeRecorder *creatorCenterProcessRecorder; // @synthesize creatorCenterProcessRecorder=_creatorCenterProcessRecorder;
@property(nonatomic) long long fetchPrepareState; // @synthesize fetchPrepareState=_fetchPrepareState;
@property(nonatomic) _Bool hasExposeCreatorCenter; // @synthesize hasExposeCreatorCenter=_hasExposeCreatorCenter;
@property(nonatomic) _Bool hasExposeFinderToBrandSwitch; // @synthesize hasExposeFinderToBrandSwitch=_hasExposeFinderToBrandSwitch;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) DataCenterConfig *dataCenterConfig; // @synthesize dataCenterConfig=_dataCenterConfig;
@property(retain, nonatomic) WCFinderPrimarySettingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCFinderPersonalSettingParams *params; // @synthesize params=_params;
@property(retain, nonatomic) FinderNewUserPrepareResponse *prepareResponse; // @synthesize prepareResponse=_prepareResponse;
- (void)registerYReportSdk;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (id)getCurrentViewController;
- (void)updateOriginalPlainRedDotWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onFinderContactUpdate:(id)arg1;
- (id)appendReportArgumentToCreatorCenterUrl:(id)arg1 tailWording:(id)arg2;
- (id)creatorCenterURL:(id *)arg1;
- (id)currentFinderPrepare;
- (void)onCreatorPageExitTime:(unsigned long long)arg1 enterTime:(unsigned long long)arg2;
- (void)clickCreateMilestone;
- (void)clickCreatorCenter;
- (void)selectedShowInWXProfileAction;
- (void)changeFinderToBrandAccountSwitch;
- (void)changeFinderToShowLiveInfoSwitch:(id)arg1;
- (void)finderToBrandSwitchCell:(id)arg1 willDisplayAtIndexPath:(id)arg2;
- (void)openAccountSettingVC;
- (void)clickPOI;
- (void)clickPrivacy;
- (void)didTapShareAccountCell;
- (void)clickAuthorToolCell;
- (id)produceGuideUrl;
- (void)clickNameCard;
- (void)clickHeadCell;
- (void)makeHeadCell:(id)arg1 cellInfo:(id)arg2;
- (id)makeSectionSeparator;
- (void)addChangeContactStatusSection:(id)arg1;
- (void)addPrivacySession:(id)arg1;
- (void)addShareSession:(id)arg1;
- (void)addHeaderSection:(id)arg1;
- (void)onShowMuiscSwitchChanged:(id)arg1;
- (void)addShowMusicTabSection:(id)arg1;
- (void)reportCreatorCenterExpose;
- (void)reportCreatorCenter:(_Bool)arg1;
- (id)getCreateMilestoneCell;
- (id)getCreatorCenterCell;
- (void)addCreatorCenterGroupSection:(id)arg1;
- (void)reloadTableView;
- (_Bool)enableShowOriginalEntry;
- (void)configureTableView;
- (void)pushDefaultOrAuthorDataCenterMiniAppWithUserName:(id)arg1 pagePath:(id)arg2;
- (void)fetchUserPrepareForUpdateContact;
- (void)fetchUserPrepareForAuthorDataCenter;
- (void)reportSettingExpose;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

