//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterNewLifeNavigator, FlutterNewLifeViewController, MMFlutterInstance, MMLRUCache, NSArray, NSData, NSMutableDictionary, NSObject, NSString, NewLifeCallbackProcessor, NewLifeMMKVKeyModel, NewLifePagePerformanceReporter, NewLifePostVerifyAssist, NewLifePrefetchManager, NewLifeProfilePrefetchLogic, NewLifeRegisterCmdIdHandler, NewLifeReporter, NewLifeSnapShotViewController, NewLifeSwitchLogic, NewLifeSyncLogic, NewLifeThumbUpLogic, NewLifeUploadCdnMgr, PrefetchStreamCallbackCmdIdReq;

@interface NewLifeManager
{
    MMFlutterInstance *_maasEditorInstance;
    NewLifeUploadCdnMgr *_uploadMgr;
    FlutterNewLifeNavigator *_flutterNavigator;
    NSArray *_prefetchedColdStartItems;
    NSData *_prefetchedProfileBuffer;
    NSObject *_prefetchedColdStartItemsLock;
    MMLRUCache *_contactCache;
    NewLifeSyncLogic *_syncLogic;
    NewLifeSwitchLogic *_switchLogic;
    NewLifeThumbUpLogic *_thumbUpLogic;
    FlutterNewLifeViewController *_flutterNewLifeController;
    NewLifeMMKVKeyModel *_mmkvKeyModel;
    NewLifePrefetchManager *_prefetchManager;
    PrefetchStreamCallbackCmdIdReq *_attachedPrefetchData;
    NewLifeProfilePrefetchLogic *_profilePrefetchLogic;
    NewLifeCallbackProcessor *_callbackProcessor;
    NewLifeReporter *_reporter;
    NSMutableDictionary *_userNameToFinderMentionContactMap;
    NewLifePostVerifyAssist *_postVerifyAssist;
    NewLifeRegisterCmdIdHandler *_registerCmdIdHandler;
    NewLifeSnapShotViewController *_snapShotViewController;
    NewLifePagePerformanceReporter *_pageReporter;
}

+ (unsigned long long)finderMentionType:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NewLifePagePerformanceReporter *pageReporter; // @synthesize pageReporter=_pageReporter;
@property(retain, nonatomic) NewLifeSnapShotViewController *snapShotViewController; // @synthesize snapShotViewController=_snapShotViewController;
@property(retain, nonatomic) NewLifeRegisterCmdIdHandler *registerCmdIdHandler; // @synthesize registerCmdIdHandler=_registerCmdIdHandler;
@property(retain, nonatomic) NewLifePostVerifyAssist *postVerifyAssist; // @synthesize postVerifyAssist=_postVerifyAssist;
@property(retain, nonatomic) NSMutableDictionary *userNameToFinderMentionContactMap; // @synthesize userNameToFinderMentionContactMap=_userNameToFinderMentionContactMap;
@property(retain, nonatomic) NewLifeReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NewLifeCallbackProcessor *callbackProcessor; // @synthesize callbackProcessor=_callbackProcessor;
@property(retain, nonatomic) NewLifeProfilePrefetchLogic *profilePrefetchLogic; // @synthesize profilePrefetchLogic=_profilePrefetchLogic;
@property(retain, nonatomic) PrefetchStreamCallbackCmdIdReq *attachedPrefetchData; // @synthesize attachedPrefetchData=_attachedPrefetchData;
@property(retain, nonatomic) NewLifePrefetchManager *prefetchManager; // @synthesize prefetchManager=_prefetchManager;
@property(retain, nonatomic) NewLifeMMKVKeyModel *mmkvKeyModel; // @synthesize mmkvKeyModel=_mmkvKeyModel;
@property(retain, nonatomic) FlutterNewLifeViewController *flutterNewLifeController; // @synthesize flutterNewLifeController=_flutterNewLifeController;
@property(retain, nonatomic) NewLifeThumbUpLogic *thumbUpLogic; // @synthesize thumbUpLogic=_thumbUpLogic;
@property(retain, nonatomic) NewLifeSwitchLogic *switchLogic; // @synthesize switchLogic=_switchLogic;
@property(retain, nonatomic) NewLifeSyncLogic *syncLogic; // @synthesize syncLogic=_syncLogic;
@property(retain, nonatomic) MMLRUCache *contactCache; // @synthesize contactCache=_contactCache;
@property(retain, nonatomic) NSObject *prefetchedColdStartItemsLock; // @synthesize prefetchedColdStartItemsLock=_prefetchedColdStartItemsLock;
@property(retain, nonatomic) NSData *prefetchedProfileBuffer; // @synthesize prefetchedProfileBuffer=_prefetchedProfileBuffer;
@property(retain, nonatomic) NSArray *prefetchedColdStartItems; // @synthesize prefetchedColdStartItems=_prefetchedColdStartItems;
@property(retain, nonatomic) FlutterNewLifeNavigator *flutterNavigator; // @synthesize flutterNavigator=_flutterNavigator;
@property(retain, nonatomic) NewLifeUploadCdnMgr *uploadMgr; // @synthesize uploadMgr=_uploadMgr;
@property(nonatomic) __weak MMFlutterInstance *maasEditorInstance; // @synthesize maasEditorInstance=_maasEditorInstance;
- (void)finderRetryPostWithDataItem:(id)arg1 commentScene:(int)arg2;
- (void)finderPostWithPostSession:(id)arg1;
- (void)showSnapShotView:(_Bool)arg1;
- (void)submitBizPhotosMsgWithJsonStr:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)enableFindFriendEntryPrefetch;
- (_Bool)enablePostToNewLifeFromSns;
- (_Bool)enableNewlifeContentReddotInFind;
- (_Bool)enableTopRecommendContentReddotInFind;
- (void)increaseForwardCountForDataItem:(id)arg1;
- (void)updateStickyTimeForDataItem:(id)arg1;
- (void)batchUpdateTempStateForFinderObjectList:(id)arg1;
- (id)isTempThumbUpForFeedId:(id)arg1;
- (void)setFlutterReportSDKInfo:(id)arg1;
- (void)removeNewLifeSdkReportParamsforKey:(id)arg1;
- (void)setNewLifeSdkReportParams:(id)arg1 forKey:(id)arg2;
- (id)getFirstExpFeedIdByScene:(unsigned int)arg1;
- (void)setExpFeedIdWhenScrollEnd:(id)arg1 andScene:(unsigned int)arg2;
- (id)checkToReturnCollectMapItem:(id)arg1 andEventId:(id)arg2;
- (void)reportNewLifeCgiEvent:(id)arg1 target:(id)arg2 params:(id)arg3 isBatchReport:(_Bool)arg4;
- (void)changeHobbyList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getColdStartHobbyList:(CDUnknownBlockType)arg1;
- (void)prefetchColdStartHobbyList;
- (void)unregisterCommonApiForAllCommands:(id)arg1;
- (void)unregisterCommonApi:(id)arg1 forCommandList:(id)arg2;
- (void)registerCommonApi:(id)arg1 forCommandList:(id)arg2;
- (void)deleteFeedWithTid:(id)arg1 nonceID:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)changePrivateStatus:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)changeStickyTopStatus:(id)arg1 isStickTop:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)userPrepareWithScene:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)onQuitBrowseEntry;
- (void)onEnterNewLifeSquareTab;
- (void)onChangeSelectedFinderUsername:(id)arg1;
- (void)onNewLifePostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onNewLifePostSessionUpLoadSuccessful:(id)arg1;
- (_Bool)isFinderContactValid;
- (_Bool)isFinderContactCreatable;
- (void)checkIsContactValid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)getSelfWxContact;
- (id)getSelfContact;
- (void)updateMentionFinderContact:(id)arg1;
- (id)getMentionFinderContactByUserName:(id)arg1;
- (void)showPost:(id)arg1 fromViewController:(id)arg2;
- (void)showFlutterPageWithRoute:(id)arg1 arguments:(id)arg2 fromViewController:(id)arg3;
- (void)showFlutterNewLifeImageSelect:(id)arg1 postInfo:(id)arg2 enterScene:(int)arg3 selectDefaultEnvelope:(_Bool)arg4 postEndDelegate:(id)arg5;
- (_Bool)enableNewEditor;
- (void)showFlutterNewLifePost:(id)arg1 skipImageProcess:(_Bool)arg2 postInfo:(id)arg3 selectDefaultEnvelope:(_Bool)arg4 realEnterScene:(int)arg5 completion:(CDUnknownBlockType)arg6 postEndDelegate:(id)arg7;
- (void)showFlutterNewLifeSearchPage:(id)arg1 searchResult:(id)arg2 searchContextId:(id)arg3;
- (void)showFlutterNewLifePersonalCenter:(id)arg1 sessionId:(id)arg2;
- (id)getNewLifeFlutterViewController;
- (id)getNewLifeFlutterViewControllerWithParams:(id)arg1;
- (void)clearAllMentionUnreadCount;
- (void)handleGetMentionCountBuffer:(id)arg1;
- (id)generatePostSessionId;
- (void)fillPostDataItem:(id)arg1 dataItem:(id)arg2;
- (id)genOriginImgDataItem:(id)arg1 imagePath:(id)arg2;
- (id)genOriginMediaArray:(id)arg1;
- (struct CGSize)parseImageSize:(id)arg1;
- (void)makeSureDataItemSize:(id)arg1;
- (id)postNewLifeFeed:(id)arg1;
- (id)generatePostBgmInfoWith:(id)arg1;
- (id)getLocalFeedList;
- (void)batchAddOrUpdateFeeds:(id)arg1;
- (id)sharedFlutterNavigator;
- (void)getNotificationListForType:(unsigned int)arg1 username:(id)arg2 buffer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)privateGetFeedForFeedId:(unsigned long long)arg1 encryptId:(id)arg2 nonceId:(id)arg3 scene:(int)arg4 clientUdfKv:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)getFeedForEncryptId:(id)arg1 nonceId:(id)arg2 scene:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getFeedForFeedId:(unsigned long long)arg1 nonceId:(id)arg2 scene:(int)arg3 enterScene:(int)arg4 clientUdfKv:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updateTempThumbUpForDataItem:(id)arg1;
- (void)updateGlobalFavoriteForDataItem:(id)arg1;
- (void)passthroughSessionBufferForDataItem:(id)arg1 scene:(int)arg2 enterScene:(int)arg3;
- (void)updateContact:(id)arg1;
- (id)getCachedContactWith:(id)arg1;
- (id)getContactWith:(id)arg1;
- (id)getFinderDataitemListWith:(id)arg1;
- (id)getFinderDataItemWithTid:(id)arg1;
- (id)getFinderDataItemWith:(id)arg1;
- (id)handleFinderUserPageResponse:(id)arg1 username:(id)arg2 firstPage:(_Bool)arg3 scene:(int)arg4 entryScene:(unsigned long long)arg5;
- (id)consumeProfilePrefetchedResponse:(id)arg1 scene:(int)arg2;
- (void)fetchUserpageWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchStream:(id)arg1 requestId:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)fetchExtraInfoForFeeds:(id)arg1 scene:(int)arg2;
- (id)getLocalJumpInfoForFeedId:(id)arg1 scene:(int)arg2;
- (void)unlikeFeedForFeedId:(unsigned long long)arg1 scene:(int)arg2 enterScene:(int)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)thumbUp:(_Bool)arg1 feedId:(unsigned long long)arg2 encryptId:(id)arg3 nonceId:(id)arg4 sessionBuffer:(id)arg5 scene:(int)arg6 enterScene:(int)arg7 newlifeType:(id)arg8 newlifeReportInfo:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)thumbUp:(_Bool)arg1 feedId:(unsigned long long)arg2 encryptId:(id)arg3 nonceId:(id)arg4 sessionBuffer:(id)arg5 scene:(int)arg6 enterScene:(int)arg7 newlifeType:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)thumbUpFeed:(id)arg1 isThumbUp:(_Bool)arg2 scene:(int)arg3 enterScene:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)attachPrefetchCallbackDataToVc:(id)arg1;
- (void)setIsCurrentTab:(_Bool)arg1;
- (_Bool)isCurrentTab;
- (void)setupForOpenWSLocalWebViewWithPrefetchParams:(id)arg1;
- (id)prefetchMgr;
- (void)clearPermissions;
- (void)continueConfigWhenSwitchIsOpen;
- (id)syncLogicIfEnabled;
- (void)tryStartSyncLogicIfNeeded;
- (_Bool)hidePrivateMessageFromUserHalfScreen;
- (void)tryUpdateNewLifeEntranceSwitchValue;
- (_Bool)shouldShowNewLifeEntrance;
- (_Bool)isSupportToShowNewLifeEntrance;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)showDebugPageIfValidFromVC:(id)arg1;
- (void)disposeBrowseEntryRedPoint;
- (int)finderTabTypeForBrowseCellNumberReddot;
- (int)finderTabTypeForBrowseCellReddot;
- (id)validBrowseCellEntranceTipsShowInfo;
- (_Bool)shouldBrowseCellShowNewLifeEntranceReddot;
- (_Bool)isSupportToShowReddotInBrowseCell;
- (_Bool)isSupportLongVideo;
- (void)triggerEnterDiscoveryTimeLineSync;
- (void)triggerEnterDiscoveryFinderSync;
- (void)triggerDiscoveryExposeSync;
- (void)tryToSyncAfterQuitWebSearch;
- (void)syncWithActionNotifyData:(id)arg1;
- (void)syncForExposeReplace;
- (void)syncForEnterRelatedTab;
- (_Bool)shouldEnableNewLifeSync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

