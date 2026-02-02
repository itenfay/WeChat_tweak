//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSMutableDictionary, NSString, WCFinderAnimationLoadingView, WCFinderPOIRelatedStreamViewModel, WCFinderTabPageView;

@interface WCFinderPOIRelatedStreamViewController
{
    WCFinderPOIRelatedStreamViewModel *_viewModel;
    unsigned long long _entryScene;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderTabPageView *_tabPageView;
    NSMutableDictionary *_pageViewManagerDict;
    unsigned long long _appearTime;
    NSMutableDictionary *_exposeTimeDict;
    ForwardMessageLogicController *_forwardLogic;
    unsigned long long _enterTime;
    NSString *_traceId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) NSMutableDictionary *exposeTimeDict; // @synthesize exposeTimeDict=_exposeTimeDict;
@property(nonatomic) unsigned long long appearTime; // @synthesize appearTime=_appearTime;
@property(retain, nonatomic) NSMutableDictionary *pageViewManagerDict; // @synthesize pageViewManagerDict=_pageViewManagerDict;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(retain, nonatomic) WCFinderPOIRelatedStreamViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)registerYReportSdk;
- (id)getCurMediaListObject;
- (int)fromViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onHeaderViewClickPhoneCallAction:(id)arg1;
- (void)onHeaderViewClickGoProfileAction;
- (void)onHeaderViewClickNaviAction;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (struct UIEdgeInsets)marginForTabContainerInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabNameAtIndex:(unsigned long long)arg2;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (void)onFinderPoiTabListError;
- (void)onFinderPoiHeaderViewNeedRefresh;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)reportTab:(id)arg1 withEventType:(long long)arg2;
- (void)sharePOIToMoment;
- (void)sharePOIToFriend;
- (void)onAction:(id)arg1;
- (void)onReturn:(id)arg1;
- (id)fadeTintColor;
- (id)normalTintColor;
- (_Bool)isSetNormalToBlackStyle;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)setupNavigationItem;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (double)contentLeftMargin;
- (double)contentDisplayWidth;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPOIParamsModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

