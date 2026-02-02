//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderLivePageStayReporter, WCFinderLiveTabInfo, WCFinderNearbyMoreLivePageViewManager;

@interface WCFinderLiveMoreLiveCityViewController
{
    _Bool _hasRefreshLiveTabInfo;
    int _reportScene;
    WCFinderNearbyMoreLivePageViewManager *_pageViewManger;
    WCFinderLiveTabInfo *_cityTabInfo;
    WCFinderLivePageStayReporter *_exposeReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLivePageStayReporter *exposeReporter; // @synthesize exposeReporter=_exposeReporter;
@property(nonatomic) _Bool hasRefreshLiveTabInfo; // @synthesize hasRefreshLiveTabInfo=_hasRefreshLiveTabInfo;
@property(retain, nonatomic) WCFinderLiveTabInfo *cityTabInfo; // @synthesize cityTabInfo=_cityTabInfo;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) WCFinderNearbyMoreLivePageViewManager *pageViewManger; // @synthesize pageViewManger=_pageViewManger;
- (void)registerYReportSdk;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (id)finderMoreLivePageViewMangerChannelExtra:(id)arg1 tid:(id)arg2 isFold:(_Bool)arg3 index:(unsigned long long)arg4;
- (void)finderMoreLivePageViewMangerEnterLive:(id)arg1 dataItem:(id)arg2 isFold:(_Bool)arg3 index:(unsigned long long)arg4 isAutoPlaying:(_Bool)arg5;
- (id)finderMoreLiveFeedViewBgColor;
- (void)setLiveTabInfo:(id)arg1;
- (void)reportExpose:(_Bool)arg1;
- (void)reloadFeedFlowView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)dealloc;
- (id)initWithLiveTabInfo:(id)arg1 fromScene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

