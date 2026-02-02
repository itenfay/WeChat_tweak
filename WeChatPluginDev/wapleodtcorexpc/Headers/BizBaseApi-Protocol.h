//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizArticleInfo, BizChattingJumpInfo, BizEnterStatusInfo, BizFinderJumpInfo, BizFinderPigeonInfo, BizMinimizeInfo, BizNotifyTipsInfo, BizProfileJumpInfo, BizRecFollowActionInfo, BizShareInfo, ContactInfo, FinderPageJumpInfo, FlutterStandardTypedData, MiniProgramLaunchBundle, NSArray, NSNumber, NSString, NativeBizCreationInfo, OpenFlowListParams;

@protocol BizBaseApi
- (void)showShareMenuInfo:(BizShareInfo *)arg1 completion:(void (^)(FlutterError *))arg2;
- (void)tryPreloadFinderVideoExportId:(NSString *)arg1 nonceId:(NSString *)arg2 objectId:(NSString *)arg3 completion:(void (^)(FlutterError *))arg4;
- (void)preloadFinderDataItemsFinderExportIdList:(NSArray *)arg1 completion:(void (^)(FlutterError *))arg2;
- (void)openFlowListParams:(OpenFlowListParams *)arg1 error:(id *)arg2;
- (void)notifyRecycleCardResultRetBuffer:(FlutterStandardTypedData *)arg1 completion:(void (^)(FlutterError *))arg2;
- (void)getRecycleCardListMsgId:(long long)arg1 completion:(void (^)(NSArray *, FlutterError *))arg2;
- (void)markOftenReadAccountExpiredIfNeedUsername:(NSString *)arg1 error:(id *)arg2;
- (void)followBizContactInfo:(BizRecFollowActionInfo *)arg1 completion:(void (^)(NSNumber *, FlutterError *))arg2;
- (void)gotoTingWithUrlsUrls:(NSArray *)arg1 sessionId:(long long)arg2 source:(long long)arg3 error:(id *)arg4;
- (void)launchMiniProgramBundle:(MiniProgramLaunchBundle *)arg1 error:(id *)arg2;
- (NativeBizCreationInfo *)getNativeBizCreationInfoWithError:(id *)arg1;
- (void)getNetWorkInfoWithCompletion:(void (^)(NetworkInfo *, FlutterError *))arg1;
- (void)requestFinderLiveStatsFinder_export_id:(NSString *)arg1 completion:(void (^)(BizFinderLiveStats *, FlutterError *))arg2;
- (void)onClickSearchBarWithError:(id *)arg1;
- (void)markLiveBarItemExposuredUserName:(NSString *)arg1 finderId:(NSString *)arg2 error:(id *)arg3;
- (NSNumber *)isLiveBarItemExposuredUserName:(NSString *)arg1 finderId:(NSString *)arg2 error:(id *)arg3;
- (void)saveLocalOftenReadInfoInfoBuffer:(FlutterStandardTypedData *)arg1 completion:(void (^)(FlutterError *))arg2;
- (void)loadLocalOftenReadInfoWithCompletion:(void (^)(FlutterStandardTypedData *, FlutterError *))arg1;
- (void)updateBizFinderLivesInfoUsernameList:(NSArray *)arg1 completion:(void (^)(NSArray *, FlutterError *))arg2;
- (void)saveFinderLivesInfoBatchInfos:(NSArray *)arg1 completion:(void (^)(FlutterError *))arg2;
- (void)getBizFinderLivesInfoBizFinderLiveRedDot:(_Bool)arg1 completion:(void (^)(NSArray *, FlutterError *))arg2;
- (NSNumber *)isFinderContactFollowFinderUsername:(NSString *)arg1 error:(id *)arg2;
- (void)openFinderContactInfo:(BizFinderPigeonInfo *)arg1 error:(id *)arg2;
- (void)unfollowFinderContactInfo:(BizFinderPigeonInfo *)arg1 error:(id *)arg2;
- (void)launchBizFinderFeedInfo:(BizFinderPigeonInfo *)arg1 error:(id *)arg2;
- (void)onMinimizeFinderInfo:(BizFinderPigeonInfo *)arg1 error:(id *)arg2;
- (void)createMagicBrandServiceScene:(long long)arg1 error:(id *)arg2;
- (void)createMagicAdBrandServiceScene:(long long)arg1 error:(id *)arg2;
- (void)onMinimizeArticleInfo:(BizMinimizeInfo *)arg1 error:(id *)arg2;
- (void)getMassSendDataLastOrderId:(long long)arg1 initData:(_Bool)arg2 resetData:(_Bool)arg3 completion:(void (^)(NSArray *, FlutterError *))arg4;
- (void)gotoBizTestUIWithError:(id *)arg1;
- (NSNumber *)onExpandMsgId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)deleteByMsgIdMsgId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)deleteByTalkerUserName:(NSString *)arg1 error:(id *)arg2;
- (NSString *)getCdnUrlListWithError:(id *)arg1;
- (NSString *)getBizImgCacheDirectoryWithError:(id *)arg1;
- (BizEnterStatusInfo *)getBizEnterStatusInfoWithError:(id *)arg1;
- (void)getOftenReadAccountInfoBatchUserNames:(NSArray *)arg1 completion:(void (^)(NSDictionary *, FlutterError *))arg2;
- (void)getOftenReadAccountInfoUserName:(NSString *)arg1 completion:(void (^)(OftenReadAccountInfo *, FlutterError *))arg2;
- (void)getContactInfoBatchUserNames:(NSArray *)arg1 completion:(void (^)(NSArray *, FlutterError *))arg2;
- (ContactInfo *)getContactInfoUserName:(NSString *)arg1 error:(id *)arg2;
- (void)onExposedMsgId:(long long)arg1 userName:(NSString *)arg2 isValidExposed:(_Bool)arg3 publishEnterSession:(_Bool)arg4 error:(id *)arg5;
- (NSNumber *)getUnReadCountWithError:(id *)arg1;
- (void)resetRedDotWithError:(id *)arg1;
- (void)doSearchWithError:(id *)arg1;
- (BizNotifyTipsInfo *)getNotifyTipsInfoWithError:(id *)arg1;
- (void)onClickNotifyTipsWithError:(id *)arg1;
- (void)setPayStatusUrl:(NSString *)arg1 isPaid:(_Bool)arg2 error:(id *)arg3;
- (NSNumber *)isPaidUrl:(NSString *)arg1 error:(id *)arg2;
- (void)addToGeneralPreloadUrl:(NSString *)arg1 preloadType:(long long)arg2 itemShowType:(long long)arg3 openScene:(long long)arg4 error:(id *)arg5;
- (void)addToPreloadUrl:(NSString *)arg1 itemShowType:(long long)arg2 openScene:(long long)arg3 error:(id *)arg4;
- (void)gotoChattingUIJumpInfo:(BizChattingJumpInfo *)arg1 error:(id *)arg2;
- (void)openUrlArticleInfo:(BizArticleInfo *)arg1 error:(id *)arg2;
- (void)gotoFinderProfileJumpInfo:(FinderPageJumpInfo *)arg1 error:(id *)arg2;
- (void)gotoFinderPaywallJumpInfo:(FinderPageJumpInfo *)arg1 error:(id *)arg2;
- (void)gotoFinderJumpInfo:(BizFinderJumpInfo *)arg1 error:(id *)arg2;
- (void)gotoProfileInfo:(BizProfileJumpInfo *)arg1 error:(id *)arg2;
- (void)gotoOldListSessionId:(long long)arg1 source:(long long)arg2 error:(id *)arg3;
@end

