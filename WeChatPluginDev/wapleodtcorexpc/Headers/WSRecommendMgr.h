//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, UIImage, WSRecommendColikeStorage, WSRecommendColikeTempModel, WSRecommendSetting, WSTabInfoList, WSTabRedDotInfoCollector, _TtC6WeChat26WeSeePageRecoverController;

@interface WSRecommendMgr
{
    _Bool _isAuthOK;
    _Bool _isRequestingOpenIdForOpenProfile;
    _Bool _hasRetryGetColikeBlockList;
    _Bool _hasRetryGetColikeHideList;
    _Bool _isRequestingGetColikeBlockList;
    _Bool _isRequestingGetColikeHideList;
    WSRecommendSetting *_setting;
    NSDictionary *_tabsInfo;
    _TtC6WeChat26WeSeePageRecoverController *_pageRecoverController;
    WSTabInfoList *_tabsInfoModel;
    NSMutableDictionary *_dicWrdCache;
    NSMutableArray *_colikeHideList;
    NSMutableArray *_colikeBlockList;
    NSMutableArray *_colikeRequestList;
    NSMutableArray *_colikeSucList;
    NSMutableArray *_colikeFailList;
    NSMutableDictionary *_tempSaveDic;
    NSMutableDictionary *_tempVideoCacheTimeDic;
    WSRecommendColikeStorage *_colikeLocalStorage;
    WSRecommendColikeTempModel *_colikeHideTempModel;
    WSRecommendColikeTempModel *_colikeBlockTempModel;
    NSRecursiveLock *_lock;
    UIImage *_mVideoFlowIcon;
    NSDictionary *_from3rdAppShareParams;
    WSTabRedDotInfoCollector *_tabRedDotInfoCollector;
}

+ (_Bool)IsSupportTopStoryPlugin;
- (void).cxx_destruct;
@property(retain, nonatomic) WSTabRedDotInfoCollector *tabRedDotInfoCollector; // @synthesize tabRedDotInfoCollector=_tabRedDotInfoCollector;
@property(retain, nonatomic) NSDictionary *from3rdAppShareParams; // @synthesize from3rdAppShareParams=_from3rdAppShareParams;
@property(retain, nonatomic) UIImage *mVideoFlowIcon; // @synthesize mVideoFlowIcon=_mVideoFlowIcon;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool isRequestingGetColikeHideList; // @synthesize isRequestingGetColikeHideList=_isRequestingGetColikeHideList;
@property(nonatomic) _Bool isRequestingGetColikeBlockList; // @synthesize isRequestingGetColikeBlockList=_isRequestingGetColikeBlockList;
@property(nonatomic) _Bool hasRetryGetColikeHideList; // @synthesize hasRetryGetColikeHideList=_hasRetryGetColikeHideList;
@property(nonatomic) _Bool hasRetryGetColikeBlockList; // @synthesize hasRetryGetColikeBlockList=_hasRetryGetColikeBlockList;
@property(retain, nonatomic) WSRecommendColikeTempModel *colikeBlockTempModel; // @synthesize colikeBlockTempModel=_colikeBlockTempModel;
@property(retain, nonatomic) WSRecommendColikeTempModel *colikeHideTempModel; // @synthesize colikeHideTempModel=_colikeHideTempModel;
@property(retain, nonatomic) WSRecommendColikeStorage *colikeLocalStorage; // @synthesize colikeLocalStorage=_colikeLocalStorage;
@property(retain, nonatomic) NSMutableDictionary *tempVideoCacheTimeDic; // @synthesize tempVideoCacheTimeDic=_tempVideoCacheTimeDic;
@property(retain, nonatomic) NSMutableDictionary *tempSaveDic; // @synthesize tempSaveDic=_tempSaveDic;
@property(retain, nonatomic) NSMutableArray *colikeFailList; // @synthesize colikeFailList=_colikeFailList;
@property(retain, nonatomic) NSMutableArray *colikeSucList; // @synthesize colikeSucList=_colikeSucList;
@property(retain, nonatomic) NSMutableArray *colikeRequestList; // @synthesize colikeRequestList=_colikeRequestList;
@property(retain, nonatomic) NSMutableArray *colikeBlockList; // @synthesize colikeBlockList=_colikeBlockList;
@property(retain, nonatomic) NSMutableArray *colikeHideList; // @synthesize colikeHideList=_colikeHideList;
@property(nonatomic) _Bool isRequestingOpenIdForOpenProfile; // @synthesize isRequestingOpenIdForOpenProfile=_isRequestingOpenIdForOpenProfile;
@property(nonatomic) _Bool isAuthOK; // @synthesize isAuthOK=_isAuthOK;
@property(retain, nonatomic) NSMutableDictionary *dicWrdCache; // @synthesize dicWrdCache=_dicWrdCache;
@property(retain, nonatomic) WSTabInfoList *tabsInfoModel; // @synthesize tabsInfoModel=_tabsInfoModel;
@property(retain, nonatomic) _TtC6WeChat26WeSeePageRecoverController *pageRecoverController; // @synthesize pageRecoverController=_pageRecoverController;
@property(retain, nonatomic) NSDictionary *tabsInfo; // @synthesize tabsInfo=_tabsInfo;
@property(readonly, nonatomic) WSRecommendSetting *setting; // @synthesize setting=_setting;
- (_Bool)hasThreeRecommendTab;
- (_Bool)hasTwoRecommendTab;
- (long long)topStoriesCategoryIdForTab:(unsigned long long)arg1;
- (long long)categoryIdForTab:(unsigned long long)arg1;
- (void)onSearchConfigDataUpdated;
- (void)onNewLifeMainSwtichValueChanged;
- (void)handleColikePostCGI:(id)arg1;
- (void)handleSetCommentCGI:(id)arg1;
- (void)handlePostCommentCGI:(id)arg1;
- (void)outsideModLocalColikeDataWithType:(unsigned int)arg1 list:(id)arg2;
- (void)preloadContactAuthorityData;
- (_Bool)isInK1kFlow;
- (_Bool)isFirstTimeGetColikeListWithType:(unsigned int)arg1;
- (id)outsideGetWowBlockList;
- (id)outsideGetWowHideList;
- (void)handleColikeBlockCGI:(id)arg1;
- (void)mergeHideList;
- (void)mergeBlockList;
- (void)handleGetColikeHideListResp:(id)arg1 oriRequest:(id)arg2;
- (void)handleGetColikeBlockListResp:(id)arg1 oriRequest:(id)arg2;
- (void)handleGetColikeListCGI:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)asyncRequestPostColikeToWow:(id)arg1 objectBuffer:(id)arg2 appInfo:(id)arg3;
- (id)devideAsyncColikeWithActionItems:(id)arg1;
- (void)asyncColikeWithActionItems:(id)arg1;
- (void)asyncStepGetWowBlackFriendListWith:(int)arg1 offset:(unsigned int)arg2 version:(unsigned long long)arg3;
- (void)onGetColikeListDataReturn:(_Bool)arg1 type:(unsigned int)arg2 list:(id)arg3;
- (void)asyncGetWowBlackFriendListWith:(int)arg1;
- (void)asyncGetWowBlockList;
- (void)asyncGetWowHideList;
- (void)asyncSetCommentWithDocId:(id)arg1 commentId:(id)arg2 opType:(unsigned int)arg3 requestId:(id)arg4 content:(id)arg5 scene:(unsigned int)arg6 subScene:(unsigned int)arg7 searchId:(id)arg8 vid:(id)arg9 byPass:(id)arg10 source:(unsigned int)arg11;
- (void)asyncPostCommentWithContent:(id)arg1 toDoc:(id)arg2 withReplyId:(id)arg3 subReplyId:(id)arg4 docUrl:(id)arg5 requestId:(id)arg6 title:(id)arg7 searchId:(id)arg8 scene:(unsigned int)arg9 subScene:(unsigned int)arg10 byPass:(id)arg11 source:(unsigned int)arg12;
- (_Bool)updateContainWowContent:(_Bool)arg1 timestamp:(unsigned int)arg2;
- (_Bool)resetVideoGoodLookTipEducateToastFlag;
- (_Bool)confirmVideoGoodLookTipEducateToastFlag;
- (_Bool)resetVideoGoodLookEducateAlertFlag;
- (_Bool)confirmVideoGoodLookEducateAlertFlag;
- (_Bool)confirmFullDragTips;
- (_Bool)isFFWebRecommendOpenForGlobalSearch;
- (_Bool)isFFWebRecommendOpen;
- (void)logCacheInfo;
- (void)onFunctionMsgRequest:(id)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(id)arg3;
- (id)generatePluginMsgRequestBuffer:(id)arg1;
- (void)preloadSharedPageWebViewIfNeeded:(id)arg1;
- (id)generatePushingSharedPage:(unsigned long long)arg1 reddotId:(id)arg2 useLocalCache:(_Bool *)arg3 useParallel:(_Bool *)arg4;
- (id)generateBaseSharedPage:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *tabListInfo;
@property(readonly, nonatomic) NSString *tabParamsText;
- (void)updateTabsInfo;
- (id)outsideGetFrom3rdAppShareParams;
- (void)outsideSetFrom3rdAppShareParams:(id)arg1;
- (unsigned int)outsideGetVideoCacheTimeFor:(id)arg1;
- (void)outsideSetVideoCacheTime:(unsigned int)arg1 forKey:(id)arg2;
- (id)outsideGetStringforKey:(id)arg1;
- (void)outsideSetString:(id)arg1 forKey:(id)arg2;
- (_Bool)saveSetting;
- (void)loadColikeCache;
- (_Bool)saveCache;
- (void)loadCache;
- (id)filePath;
- (id)settingPath;
- (id)fileDir;
- (void)reloadPackageConfig:(unsigned long long)arg1;
- (unsigned long long)localJSBizType;
- (unsigned int)packageResouceType;
- (id)templateResouceRootPath;
- (unsigned int)defaultTemplateZipVersion;
- (id)defaultTemplateZipPath;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

