//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions, FinderThemeLiveStreamAppearance, FinderThemeLiveStreamResponse, FinderThemeLiveStreamShareInfo, ForwardMessageLogicController, MMFinderLiveFeedExtraInfoFetcher, MMLiveColorfulLabel, MMScrollActionSheet, MMTimer, MMWebImageView, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PAGFile, UIView, WCFinderEmptyTipsView, WCFinderLivePageStayReporter, WCFinderLiveStreamContainerModel, WCFinderLiveTopicTemplateHeaderView, WCFinderLiveTopicTemplateTabContainerView, WCFinderLiveTopicTemplateTabPageView;

@interface WCFinderLiveTopicTemplateViewController
{
    _Bool _navWasHidden;
    _Bool _isVisible;
    _Bool _hasReportAppear;
    _Bool _tilingSwitch;
    NSData *_entryBuffer;
    unsigned long long _enterScene;
    WCFinderLiveTopicTemplateTabPageView *_tabPageView;
    UIView *_navBarView;
    MMLiveColorfulLabel *_navLabel;
    WCFinderLiveTopicTemplateHeaderView *_headerView;
    WCFinderLiveTopicTemplateTabContainerView *_tabContainer;
    MMWebImageView *_bgImgView;
    WCFinderLiveStreamContainerModel *_tagContainerModel;
    NSMutableArray *_containerModels;
    NSMutableSet *_exposedDataItemTids;
    NSMutableDictionary *_pageMgrMap;
    NSString *_themeId;
    unsigned long long _lastVisibleIndex;
    WCFinderEmptyTipsView *_firstScreenLoadingView;
    unsigned long long _reqContainerId;
    FinderThemeLiveStreamResponse *_latestResp;
    MMFinderLiveFeedExtraInfoFetcher *_extraInfoFetcher;
    MMTimer *_extraInfoFetchTimer;
    PAGFile *_hotSalePAGFile;
    FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *_hotSellingOptions;
    FinderThemeLiveStreamAppearance *_currentAppearance;
    FinderThemeLiveStreamShareInfo *_shareInfo;
    CAGradientLayer *_bgGradientLayer;
    WCFinderLivePageStayReporter *_stayReporter;
    MMScrollActionSheet *_shareActionSheet;
    ForwardMessageLogicController *_forwardLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) MMScrollActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
@property(nonatomic) _Bool tilingSwitch; // @synthesize tilingSwitch=_tilingSwitch;
@property(nonatomic) _Bool hasReportAppear; // @synthesize hasReportAppear=_hasReportAppear;
@property(retain, nonatomic) WCFinderLivePageStayReporter *stayReporter; // @synthesize stayReporter=_stayReporter;
@property(retain, nonatomic) CAGradientLayer *bgGradientLayer; // @synthesize bgGradientLayer=_bgGradientLayer;
@property(retain, nonatomic) FinderThemeLiveStreamShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) FinderThemeLiveStreamAppearance *currentAppearance; // @synthesize currentAppearance=_currentAppearance;
@property(retain, nonatomic) FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *hotSellingOptions; // @synthesize hotSellingOptions=_hotSellingOptions;
@property(retain, nonatomic) PAGFile *hotSalePAGFile; // @synthesize hotSalePAGFile=_hotSalePAGFile;
@property(retain, nonatomic) MMTimer *extraInfoFetchTimer; // @synthesize extraInfoFetchTimer=_extraInfoFetchTimer;
@property(retain, nonatomic) MMFinderLiveFeedExtraInfoFetcher *extraInfoFetcher; // @synthesize extraInfoFetcher=_extraInfoFetcher;
@property(retain, nonatomic) FinderThemeLiveStreamResponse *latestResp; // @synthesize latestResp=_latestResp;
@property(nonatomic) unsigned long long reqContainerId; // @synthesize reqContainerId=_reqContainerId;
@property(retain, nonatomic) WCFinderEmptyTipsView *firstScreenLoadingView; // @synthesize firstScreenLoadingView=_firstScreenLoadingView;
@property(nonatomic) unsigned long long lastVisibleIndex; // @synthesize lastVisibleIndex=_lastVisibleIndex;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;
@property(retain, nonatomic) NSMutableDictionary *pageMgrMap; // @synthesize pageMgrMap=_pageMgrMap;
@property(retain, nonatomic) NSMutableSet *exposedDataItemTids; // @synthesize exposedDataItemTids=_exposedDataItemTids;
@property(retain, nonatomic) NSMutableArray *containerModels; // @synthesize containerModels=_containerModels;
@property(retain, nonatomic) WCFinderLiveStreamContainerModel *tagContainerModel; // @synthesize tagContainerModel=_tagContainerModel;
@property(retain, nonatomic) MMWebImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) WCFinderLiveTopicTemplateTabContainerView *tabContainer; // @synthesize tabContainer=_tabContainer;
@property(retain, nonatomic) WCFinderLiveTopicTemplateHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool navWasHidden; // @synthesize navWasHidden=_navWasHidden;
@property(retain, nonatomic) MMLiveColorfulLabel *navLabel; // @synthesize navLabel=_navLabel;
@property(retain, nonatomic) UIView *navBarView; // @synthesize navBarView=_navBarView;
@property(retain, nonatomic) WCFinderLiveTopicTemplateTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSData *entryBuffer; // @synthesize entryBuffer=_entryBuffer;
- (void)reportPageDisappearWithIndex:(unsigned long long)arg1;
- (void)reportPageAppearWithIndex:(unsigned long long)arg1;
- (id)getReportPageUdfKVWithPageIndex:(unsigned long long)arg1;
- (id)getCommentSceneStrWithPageIndex:(unsigned long long)arg1;
- (id)genSessionModelWithDataItem:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (void)saveDataItemAndExtraInfosWithContainerModels:(id)arg1 commentScene:(int)arg2 extraKey:(id)arg3;
- (id)getDefaultSessionExtraKey;
- (void)syncHotSellingOptionsToPageManagers;
- (id)getContainerContextForContainer:(id)arg1;
- (id)getUnreadDataItemList;
- (void)fetchDataWithIndex:(unsigned long long)arg1 fromTop:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadData;
- (void)requestECConfig;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)genShareItem;
- (void)shareToMoment;
- (void)shareToChat:(id)arg1;
- (void)initializeShareActionSheet;
- (void)onFeedProductCardUpdate:(unsigned long long)arg1 card:(id)arg2;
- (void)onFeedAggregationCardUpdate:(id)arg1 card:(id)arg2;
- (void)onFeedHighlightTagUpdate:(unsigned long long)arg1 tag:(id)arg2;
- (void)fetchExtraInfoForVisibleLiveIfNeeded;
- (void)onTimedFetchExtraInfo;
- (void)scheduleExtraInfoCheckTimer;
- (void)initFetcherIfNeeded;
- (_Bool)enabledTimedRefresh;
- (void)startExtraInfoFetchingTimer;
- (void)setupBackgroundColor;
- (void)handleWillSwitchToPage:(unsigned long long)arg1 switchType:(unsigned long long)arg2;
- (void)onAppearanceUpdated;
- (void)layoutNavLabel;
- (void)setupNavWithAppearance:(id)arg1;
- (void)stopPlayingCurrentLive;
- (void)autoPlayCurrentLive;
- (int)getCommentSceneWithContainerType:(unsigned int)arg1;
- (_Bool)hasTabContainer;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (double)heightForHeaderViewChangeAlphaInFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 didSelectIndex:(unsigned long long)arg2 isTriggerByUser:(_Bool)arg3;
- (double)heightForTabViewContainerInFinderTabPageView:(id)arg1;
- (id)customTabContainerBackgroundColorForFinderTabPageView:(id)arg1;
- (id)tabViewContainerInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (double)finderTabPageView:(id)arg1 heightForTabViewAtIndex:(unsigned long long)arg2;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 targetAlphaOfTabContainerChanged:(double)arg2;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (id)getNavLastBufferForPageManager:(id)arg1;
- (void)feedFlowViewDidScrollInPageManager:(id)arg1;
- (id)styleInfoForPageManager:(id)arg1;
- (id)getHotSalePAGFileForPageManager:(id)arg1;
- (void)pageManager:(id)arg1 onDataItemExposed:(id)arg2;
- (void)fetchDataForPageManager:(id)arg1 fromTop:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getViewControllerForPageManager:(id)arg1;
- (_Bool)pageManagerCanAutoPlayLive:(id)arg1;
- (void)onMoreButtonClicked;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)navigationBarBackgroundColor;
- (_Bool)shouldInteractivePop;
- (void)initMoreButton;
- (void)initNavBarView;
- (void)initBgImageView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithThemeId:(id)arg1 defaultAppearance:(id)arg2 fromSceneIsTilingSwitch:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

