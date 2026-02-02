//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSContactMgr, FTSDB, FTSFavMgr, FTSFinderLocalSearchMgr, FTSGlobalStat, FTSIndexEngine, FTSIntelligentMessageMgr, FTSKFContactLocalSearchMgr, FTSMemorySearchMgr, FTSMessageMgr, FTSReportMgr, FTSTopHitMgr, FTSWebSearchMgr, LocalSearchDynamicConfig, MCSBrandContactMgr, NSMutableSet, NSString, WALocalSearchMgr, WCSearchGroupTrainingMgr, WebSearchRedotMgr;

@interface FTSFacade
{
    FTSDB *_ftsDB;
    _Bool _isPositioning;
    _Bool _bHasActiveSearch;
    FTSContactMgr *_ftsContactMgr;
    FTSMessageMgr *_ftsMessageMgr;
    FTSIntelligentMessageMgr *_ftsIntelligentMessageMgr;
    FTSFavMgr *_ftsFavMgr;
    FTSMemorySearchMgr *_ftsMemorySearchMgr;
    FTSWebSearchMgr *_ftsWebSearchMgr;
    FTSReportMgr *_ftsReportMgr;
    WALocalSearchMgr *_weAppSearchMgr;
    WebSearchRedotMgr *_webSearchRedotMgr;
    FTSFinderLocalSearchMgr *_finderLocalSearchMgr;
    FTSKFContactLocalSearchMgr *_kfContactLocalSearchMgr;
    NSMutableSet *_imageCacheUrlSet;
    _Bool _isOpenWeAppSearch;
    _Bool _hasReportNoRedotExposeForSearch;
    _Bool _useAPITestLocalH5;
    FTSTopHitMgr *_ftsTopHitMgr;
    MCSBrandContactMgr *_mcsBrdContactMgr;
    FTSGlobalStat *_ftsStat;
    WCSearchGroupTrainingMgr *_groupTrainMgr;
    FTSIndexEngine *_ftsIndexEngine;
    NSString *_localSearchId;
    long long _i64LocalSessionId;
    long long _i64LocalSearchId;
    long long _i64LocalSubSearchId;
    LocalSearchDynamicConfig *_dynConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useAPITestLocalH5; // @synthesize useAPITestLocalH5=_useAPITestLocalH5;
@property(nonatomic) _Bool hasReportNoRedotExposeForSearch; // @synthesize hasReportNoRedotExposeForSearch=_hasReportNoRedotExposeForSearch;
@property(retain, nonatomic) LocalSearchDynamicConfig *dynConfig; // @synthesize dynConfig=_dynConfig;
@property(readonly, nonatomic) long long i64LocalSubSearchId; // @synthesize i64LocalSubSearchId=_i64LocalSubSearchId;
@property(readonly, nonatomic) long long i64LocalSearchId; // @synthesize i64LocalSearchId=_i64LocalSearchId;
@property(readonly, nonatomic) long long i64LocalSessionId; // @synthesize i64LocalSessionId=_i64LocalSessionId;
@property(readonly, nonatomic) NSString *localSearchId; // @synthesize localSearchId=_localSearchId;
@property(retain, nonatomic) FTSReportMgr *ftsReportMgr; // @synthesize ftsReportMgr=_ftsReportMgr;
@property(retain, nonatomic) FTSIndexEngine *ftsIndexEngine; // @synthesize ftsIndexEngine=_ftsIndexEngine;
@property(retain, nonatomic) FTSKFContactLocalSearchMgr *kfContactLocalSearchMgr; // @synthesize kfContactLocalSearchMgr=_kfContactLocalSearchMgr;
@property(retain, nonatomic) WCSearchGroupTrainingMgr *groupTrainMgr; // @synthesize groupTrainMgr=_groupTrainMgr;
@property(retain, nonatomic) FTSGlobalStat *ftsStat; // @synthesize ftsStat=_ftsStat;
@property(retain, nonatomic) WebSearchRedotMgr *webSearchRedotMgr; // @synthesize webSearchRedotMgr=_webSearchRedotMgr;
@property(retain, nonatomic) FTSFinderLocalSearchMgr *finderLocalSearchMgr; // @synthesize finderLocalSearchMgr=_finderLocalSearchMgr;
@property(retain, nonatomic) WALocalSearchMgr *weAppSearchMgr; // @synthesize weAppSearchMgr=_weAppSearchMgr;
@property(retain, nonatomic) MCSBrandContactMgr *mcsBrdContactMgr; // @synthesize mcsBrdContactMgr=_mcsBrdContactMgr;
@property(retain, nonatomic) FTSTopHitMgr *ftsTopHitMgr; // @synthesize ftsTopHitMgr=_ftsTopHitMgr;
@property(retain, nonatomic) FTSWebSearchMgr *ftsWebSearchMgr; // @synthesize ftsWebSearchMgr=_ftsWebSearchMgr;
@property(retain, nonatomic) FTSIntelligentMessageMgr *ftsIntelligentMessageMgr; // @synthesize ftsIntelligentMessageMgr=_ftsIntelligentMessageMgr;
@property(retain, nonatomic) FTSMemorySearchMgr *ftsMemorySearchMgr; // @synthesize ftsMemorySearchMgr=_ftsMemorySearchMgr;
@property(retain, nonatomic) FTSFavMgr *ftsFavMgr; // @synthesize ftsFavMgr=_ftsFavMgr;
@property(retain, nonatomic) FTSMessageMgr *ftsMessageMgr; // @synthesize ftsMessageMgr=_ftsMessageMgr;
@property(retain, nonatomic) FTSContactMgr *ftsContactMgr; // @synthesize ftsContactMgr=_ftsContactMgr;
- (id)getSharedFTSIntelligentMessageDB;
- (id)getSharedFTSMessageDB;
- (void)registerFTSIndexingEngine;
- (void)onServiceInitIndexEngine;
- (_Bool)recoverGroupTrainDB;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)updateFTSStat;
- (void)onEndFtsSearch;
- (void)onViewPop;
- (void)onRecoverContactDB;
- (void)onRecoverFavDB;
- (void)onRecoverMsgDB;
- (void)onRecoverFTSDB;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)doInitWeAppSearchMgrIfNeeded;
- (_Bool)isOpenWeAppSearch;
- (void)onServiceResumeBackgroundTask:(unsigned long long)arg1;
- (void)onServicePauseBackgroundTask:(unsigned long long)arg1;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onEnterBackground;
- (void)startIndexingTask;
- (void)onServiceInit;
- (void)logBeginSearch:(unsigned long long)arg1;
- (void)updateSubSearchId:(id)arg1;
- (void)updateNewLocalSearchId:(id)arg1;
- (void)cancelSearchForHomePage;
- (void)startSearchForHomePage:(id)arg1;
- (void)updateNewestHomePageSearchText:(id)arg1;
- (void)resetSearchStatus;
- (void)onBeginSearch;
- (void)doInitWorker;
- (void)preloadResource;
- (void)forbidForegroundTask;
- (void)enableForegroundTask;
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

