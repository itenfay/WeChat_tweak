//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandActionReportLogicController, NSMutableArray, NSString, WCStatTimerHelper;

@interface MMWebViewPlugin_ReportPageEvent
{
    NSString *_nsSessionID;
    NSString *_referLoadUrl;
    NSString *_currentLoadUrl;
    unsigned long long _enterPageTime;
    unsigned long long _didStartLoadTime;
    unsigned long long _costLoadTime;
    long long _scene;
    unsigned long long _recentMenuType;
    WCStatTimerHelper *m_oStatTimerHelper;
    unsigned int m_stat_enterTime;
    double m_beginOffset;
    double m_endOffset;
    double m_maxOffset;
    double m_screenHeight;
    unsigned long long m_startInitTime;
    unsigned long long m_loadTime;
    unsigned long long m_startDisappearTime;
    unsigned long long m_disappearTime;
    _Bool m_beginDragging;
    _Bool m_hasAppear;
    _Bool m_hasEnter;
    _Bool m_hasMinimize;
    _Bool _m_isFinishLoaded;
    _Bool _m_isPageLoadFail;
    _Bool _hasCreateBrandActionReport;
    _Bool _navigateActionMatchUniversalLinkAndConfirmed;
    unsigned int _navigateActionMatchControlAction;
    NSString *_m_lastCheckCpKey;
    BrandActionReportLogicController *_m_brandActionReport;
    NSString *_navigateActionSourceUrl;
    NSString *_navigateActionTargetUrl;
    unsigned long long _navigateActionTimeStampInMs;
    NSMutableArray *_arrWebviewJumpInfo;
}

+ (void)reportCityServiceIdKeyAction:(unsigned long long)arg1;
+ (void)reportCityServiceInjectAction:(id)arg1 extString:(id)arg2 success:(_Bool)arg3 reason:(unsigned long long)arg4;
+ (void)reportPageInfoWhenForwardMsgOrFav:(id)arg1 actionType:(unsigned long long)arg2 fromScene:(unsigned long long)arg3 ret:(unsigned long long)arg4;
+ (unsigned long long)getCurrentTimeInMs;
+ (unsigned int)getCurrentTimeStamp;
+ (unsigned long long)getNetType;
+ (id)getUserAgent;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrWebviewJumpInfo; // @synthesize arrWebviewJumpInfo=_arrWebviewJumpInfo;
@property(nonatomic) _Bool navigateActionMatchUniversalLinkAndConfirmed; // @synthesize navigateActionMatchUniversalLinkAndConfirmed=_navigateActionMatchUniversalLinkAndConfirmed;
@property(nonatomic) unsigned int navigateActionMatchControlAction; // @synthesize navigateActionMatchControlAction=_navigateActionMatchControlAction;
@property(nonatomic) unsigned long long navigateActionTimeStampInMs; // @synthesize navigateActionTimeStampInMs=_navigateActionTimeStampInMs;
@property(copy, nonatomic) NSString *navigateActionTargetUrl; // @synthesize navigateActionTargetUrl=_navigateActionTargetUrl;
@property(copy, nonatomic) NSString *navigateActionSourceUrl; // @synthesize navigateActionSourceUrl=_navigateActionSourceUrl;
@property(retain, nonatomic) BrandActionReportLogicController *m_brandActionReport; // @synthesize m_brandActionReport=_m_brandActionReport;
@property(nonatomic) _Bool hasCreateBrandActionReport; // @synthesize hasCreateBrandActionReport=_hasCreateBrandActionReport;
@property(nonatomic) _Bool m_isPageLoadFail; // @synthesize m_isPageLoadFail=_m_isPageLoadFail;
@property(nonatomic) _Bool m_isFinishLoaded; // @synthesize m_isFinishLoaded=_m_isFinishLoaded;
@property(retain, nonatomic) NSString *m_lastCheckCpKey; // @synthesize m_lastCheckCpKey=_m_lastCheckCpKey;
- (id)genReportStringWithFeatureVectorArray:(id)arg1 startIndex:(unsigned long long)arg2;
- (void)extractAndreportPageFeatureWithInitUrl:(id)arg1 a8keyUrl:(id)arg2 currentUrl:(id)arg3 andRequstID:(unsigned int)arg4;
- (id)genUrlListForKv10643Report;
- (void)saveCurrentPageTiteInfoForKv10643Report;
- (void)savePageInfoForKv10643Report;
- (void)reportAdPageTakeScreenshot;
- (unsigned long long)reportFromScene;
- (void)createBrandActionReport;
- (void)reportCloseWebView;
- (void)reportTopStory:(id)arg1;
- (void)reportH5PageWrapWhenDealloc:(id)arg1;
- (void)reportH5PageWrapWhenDidFailLoad:(id)arg1;
- (void)reportH5PageWrapWhenDidFinishLoad:(id)arg1;
- (void)reportH5PageWrapWhenShouldStartLoad:(id)arg1;
- (void)markNeedCheckUrlAndRemoveLastCheckedUrl:(id)arg1;
- (void)__clearNavigateActionReportData;
- (void)__reportUniversalLinkNavigationKVStatWithPerfomUniversalLinkNavigationResult:(_Bool)arg1;
- (void)onCheckUniversalLinkActionWhenEnterBackground;
- (void)onCheckUniversalLinkActionWhenNavigationDidStart:(id)arg1;
- (void)reportUniversalLinkAlertUserAction:(_Bool)arg1 sourceUrl:(id)arg2 targetUrl:(id)arg3;
- (void)reportKeyShouldStartLoadEventWithSourceUrl:(id)arg1 targetUrl:(id)arg2 matchAction:(unsigned int)arg3;
- (void)onMenuActionRet:(unsigned long long)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)updateMaxScroll;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)realReportMenuActionWithType:(unsigned long long)arg1 result:(unsigned long long)arg2;
- (void)reportPageEventWhenPageLeft:(_Bool)arg1;
- (_Bool)isShareWithUpdatePluginInfo:(unsigned long long)arg1;
- (id)getPublisherName;
- (id)getCurrentUrl;
- (id)getAppID;
- (void)genSessionID;
- (id)getSessionID;
- (void)reportPageEventWhenClickMenuAction:(unsigned long long)arg1;
- (_Bool)reportPageEventFrom3rdProvideInfoWithKey:(id)arg1 andValue:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

