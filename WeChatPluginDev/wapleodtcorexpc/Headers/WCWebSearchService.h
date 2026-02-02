//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSArray, NSMutableDictionary, NSString, WCFingertipSearchReportModel, WCImageSearchEntity, WCTextSearchEntity, WCWebSearchSyncLogic, _TtC6WeChat19ReusablePageManager;

@interface WCWebSearchService
{
    CMessageWrap *_sessionMsgWrap;
    WCFingertipSearchReportModel *_fingertipSearchReportModel;
    WCTextSearchEntity *_sessionTextSearchEntity;
    WCImageSearchEntity *_sessionImageSearchEntity;
    WCImageSearchEntity *_originImageSearchEntity;
    _TtC6WeChat19ReusablePageManager *_reusableWebPageManager;
    NSArray *_blackListHostForSearch;
    NSMutableDictionary *_liteAppSessionIdDict;
    WCWebSearchSyncLogic *_searchSyncLogic;
}

+ (_Bool)IsImageSearchScene:(unsigned long long)arg1;
+ (_Bool)IsFingertipSearchScene:(unsigned long long)arg1;
+ (id)FingertipSearchExpressHintWord;
- (void).cxx_destruct;
@property(retain, nonatomic) WCWebSearchSyncLogic *searchSyncLogic; // @synthesize searchSyncLogic=_searchSyncLogic;
@property(retain, nonatomic) NSMutableDictionary *liteAppSessionIdDict; // @synthesize liteAppSessionIdDict=_liteAppSessionIdDict;
@property(retain, nonatomic) NSArray *blackListHostForSearch; // @synthesize blackListHostForSearch=_blackListHostForSearch;
@property(retain, nonatomic) _TtC6WeChat19ReusablePageManager *reusableWebPageManager; // @synthesize reusableWebPageManager=_reusableWebPageManager;
@property(retain, nonatomic) WCImageSearchEntity *originImageSearchEntity; // @synthesize originImageSearchEntity=_originImageSearchEntity;
@property(retain, nonatomic) WCImageSearchEntity *sessionImageSearchEntity; // @synthesize sessionImageSearchEntity=_sessionImageSearchEntity;
@property(retain, nonatomic) WCTextSearchEntity *sessionTextSearchEntity; // @synthesize sessionTextSearchEntity=_sessionTextSearchEntity;
@property(retain, nonatomic) WCFingertipSearchReportModel *fingertipSearchReportModel; // @synthesize fingertipSearchReportModel=_fingertipSearchReportModel;
@property(retain, nonatomic) CMessageWrap *sessionMsgWrap; // @synthesize sessionMsgWrap=_sessionMsgWrap;
- (void)appDidTerminateWKWebviewNetworkProcess;
- (void)onCloseSearchPreloadWebview;
- (void)onMenuControllerDidShow;
- (void)reloadPackageConfig:(unsigned long long)arg1;
- (unsigned long long)localJSBizType;
- (unsigned int)packageResouceSubType;
- (unsigned int)packageResouceType;
- (id)templateResouceRootPath;
- (id)defaultTemplateZipPath;
- (void)syncForEnterDiscovery;
- (void)syncWithActionNotifyData:(id)arg1;
- (void)syncForExposeReplace;
- (void)syncForEnterWebSearch;
- (_Bool)shouldEnableSearchSync;
- (_Bool)shouldShowSearchEntryInDiscover;
- (id)defaultBlackListHostForSearch;
- (id)exptBlackListHostForSearch;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

