//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterStandardTypedData, NSArray, NSDictionary, NSNumber, NSString, OpenWebPageInfo, SelectLocalPhotoResult, ThirdAppInfo, TingBrandContactInfo, TingFinderContactInfo, TingPoiInfo, TingStarSnapInfo, TingUserContactInfo;

@protocol TingNativeController
- (void)addToStarListenItemData:(FlutterStandardTypedData *)arg1 scene:(long long)arg2 music:(_Bool)arg3 cancel:(_Bool)arg4 snapInfo:(TingStarSnapInfo *)arg5 error:(id *)arg6;
- (void)showFansHalfProfileUsername:(NSString *)arg1 nickname:(NSString *)arg2 headImgUrl:(NSString *)arg3 listenBypassBuffer:(FlutterStandardTypedData *)arg4 error:(id *)arg5;
- (void)buyWCCoinParam:(FlutterStandardTypedData *)arg1 completion:(void (^)(AsyncResult *, FlutterError *))arg2;
- (void)consumeWCCoinParam:(FlutterStandardTypedData *)arg1 completion:(void (^)(AsyncResult *, FlutterError *))arg2;
- (void)getWCCoinBalanceWithCompletion:(void (^)(AsyncResult *, FlutterError *))arg1;
- (void)onCommonHalfScreenGoDetailClickIdentifier:(NSString *)arg1 error:(id *)arg2;
- (void)uploadRecordFileToCdnLocalFilePath:(NSString *)arg1 completion:(void (^)(FlutterStandardTypedData *, FlutterError *))arg2;
- (void)stopRecordWithCompletion:(void (^)(FlutterStandardTypedData *, FlutterError *))arg1;
- (void)startRecordMinTimeInSecond:(long long)arg1 maxTimeInSecond:(long long)arg2 completion:(void (^)(NSNumber *, FlutterError *))arg3;
- (void)onTingCommonEventEvent:(long long)arg1 params:(NSDictionary *)arg2 error:(id *)arg3;
- (void)addOrRevertBlackListTingBypassBuffer:(FlutterStandardTypedData *)arg1 addOrRevert:(_Bool)arg2 completion:(void (^)(AsyncResult *, FlutterError *))arg3;
- (void)onPlayerActionItemData:(FlutterStandardTypedData *)arg1 action:(long long)arg2 error:(id *)arg3;
- (void)onPlayerLikeItemData:(FlutterStandardTypedData *)arg1 isLike:(_Bool)arg2 error:(id *)arg3;
- (void)prepareLiteAppLiteAppType:(long long)arg1 appId:(NSString *)arg2 page:(NSString *)arg3 query:(NSString *)arg4 error:(id *)arg5;
- (void)openLiteAppLiteAppType:(long long)arg1 appId:(NSString *)arg2 page:(NSString *)arg3 query:(NSString *)arg4 minVer:(NSString *)arg5 isTransparent:(_Bool)arg6 error:(id *)arg7;
- (void)gotoAppInstallPageAppId:(NSString *)arg1 error:(id *)arg2;
- (void)launchApplicationWithUrlAppId:(NSString *)arg1 scheme:(NSString *)arg2 url:(NSString *)arg3 gotoAppInstallPage:(_Bool)arg4 error:(id *)arg5;
- (void)launchApplicationAppId:(NSString *)arg1 scheme:(NSString *)arg2 error:(id *)arg3;
- (NSNumber *)isAppInstalledAppId:(NSString *)arg1 scheme:(NSString *)arg2 error:(id *)arg3;
- (TingPoiInfo *)getPoiInfoWithError:(id *)arg1;
- (void)showHalfScreenWebViewUrl:(NSString *)arg1 error:(id *)arg2;
- (void)setShowAudioRedDotShow:(_Bool)arg1 error:(id *)arg2;
- (NSNumber *)showAudioRedDotWithError:(id *)arg1;
- (void)inPlayerValue:(_Bool)arg1 error:(id *)arg2;
- (void)setOnceOrientationOrientation:(long long)arg1 error:(id *)arg2;
- (void)allowRotateAllow:(_Bool)arg1 error:(id *)arg2;
- (void)getFinderContactInfoUsername:(NSString *)arg1 completion:(void (^)(TingFinderContactInfo *, FlutterError *))arg2;
- (TingFinderContactInfo *)getFinderAccountInfoWithError:(id *)arg1;
- (void)goToCreateFinderAccountTipsWording:(NSString *)arg1 completion:(void (^)(TingFinderContactInfo *, FlutterError *))arg2;
- (void)updatePersonalizedRecommendIsPersonalizedRecommend:(_Bool)arg1 error:(id *)arg2;
- (void)destroyAndReopenTingMiniProgramScene:(long long)arg1 error:(id *)arg2;
- (NSArray *)getContactInfoFromHashHashUsernames:(NSArray *)arg1 error:(id *)arg2;
- (TingUserContactInfo *)getContactInfoUsername:(NSString *)arg1 error:(id *)arg2;
- (NSNumber *)deleteFavBySourceIdSourceId:(NSString *)arg1 error:(id *)arg2;
- (NSNumber *)hasAddedInFavDBSourceId:(NSString *)arg1 error:(id *)arg2;
- (NSString *)getWxUsernameWithError:(id *)arg1;
- (NSNumber *)getIdentityTypeWithError:(id *)arg1;
- (void)stopVoiceInputWithError:(id *)arg1;
- (void)startVoiceInputWithCompletion:(void (^)(AsyncResult *, FlutterError *))arg1;
- (void)stopRecognizeSongWithError:(id *)arg1;
- (void)startRecognizeSongWithCompletion:(void (^)(AsyncResult *, FlutterError *))arg1;
- (void)scanWithCompletion:(void (^)(AsyncResult *, FlutterError *))arg1;
- (void)openWeAppAppId:(NSString *)arg1 path:(NSString *)arg2 scene:(long long)arg3 sceneNote:(NSString *)arg4 noReLaunch:(_Bool)arg5 debugMode:(long long)arg6 error:(id *)arg7;
- (void)openWebPageUrl:(NSString *)arg1 openInfo:(OpenWebPageInfo *)arg2 error:(id *)arg3;
- (void)goToWebPageUrl:(NSString *)arg1 scene:(long long)arg2 error:(id *)arg3;
- (void)gotoTingSettingPageWithError:(id *)arg1;
- (void)goToShakeViewControllerWithError:(id *)arg1;
- (void)goToLiteAppAppId:(NSString *)arg1 path:(NSString *)arg2 query:(NSString *)arg3 error:(id *)arg4;
- (void)goToQQMusicPaymentAppId:(NSString *)arg1 mid:(NSString *)arg2 error:(id *)arg3;
- (void)open3rdAppWithTingItemAppId:(NSString *)arg1 itemData:(FlutterStandardTypedData *)arg2 fromSource:(long long)arg3 error:(id *)arg4;
- (ThirdAppInfo *)get3rdAppInfoAppId:(NSString *)arg1 error:(id *)arg2;
- (void)uploadLocalPhotoLocalPhotoResult:(SelectLocalPhotoResult *)arg1 completion:(void (^)(UploadLocalPhotoResult *, FlutterError *))arg2;
- (void)selectLocalPhotoWithCompletion:(void (^)(SelectLocalPhotoResult *, FlutterError *))arg1;
- (void)selectLocalImageWithCompletion:(void (^)(FlutterStandardTypedData *, FlutterError *))arg1;
- (void)markPlayTaskInFullScreenPlayerModeWithError:(id *)arg1;
- (void)shareLyricTingItemData:(FlutterStandardTypedData *)arg1 lyricItems:(NSArray *)arg2 beginTime:(double)arg3 endTime:(double)arg4 shareScene:(long long)arg5 error:(id *)arg6;
- (void)saveLocalFileTingItemData:(FlutterStandardTypedData *)arg1 error:(id *)arg2;
- (void)openByOtherAppTingItemData:(FlutterStandardTypedData *)arg1 error:(id *)arg2;
- (void)sendHandOffOpenCommandTingItemData:(FlutterStandardTypedData *)arg1 error:(id *)arg2;
- (NSNumber *)canShowHandOffOpenCommandItemTingItemData:(FlutterStandardTypedData *)arg1 error:(id *)arg2;
- (void)shareCategoryItemItemData:(FlutterStandardTypedData *)arg1 shareScene:(long long)arg2 error:(id *)arg3;
- (void)shareTingItemTingItemData:(FlutterStandardTypedData *)arg1 commentInfo:(FlutterStandardTypedData *)arg2 categoryItem:(FlutterStandardTypedData *)arg3 shareScene:(long long)arg4 error:(id *)arg5;
- (void)quickShareCategoryItemItemData:(FlutterStandardTypedData *)arg1 userName:(NSString *)arg2 error:(id *)arg3;
- (void)quickShareTingItemTingItemData:(FlutterStandardTypedData *)arg1 userName:(NSString *)arg2 error:(id *)arg3;
- (void)followBrandAccountUsername:(NSString *)arg1 isCancel:(_Bool)arg2 scene:(long long)arg3 reportInfo:(NSString *)arg4 sceneNote:(NSString *)arg5 finderBuffer:(NSString *)arg6 completion:(void (^)(NSNumber *, FlutterError *))arg7;
- (TingBrandContactInfo *)getBrandContactInfoUsername:(NSString *)arg1 error:(id *)arg2;
- (void)goToProfileUserName:(NSString *)arg1 error:(id *)arg2;
- (void)gotoBusinessArticleUrl:(NSString *)arg1 error:(id *)arg2;
- (void)followFinderAccountUsername:(NSString *)arg1 isCancel:(_Bool)arg2 tingItemData:(FlutterStandardTypedData *)arg3 requestScene:(long long)arg4 extraInfo:(NSString *)arg5 completion:(void (^)(NSNumber *, FlutterError *))arg6;
- (void)gotoBusinessAccountProfileUserName:(NSString *)arg1 scene:(long long)arg2 sceneNote:(NSString *)arg3 error:(id *)arg4;
- (void)gotoFinderMyProfileAudioTabContactInfo:(TingFinderContactInfo *)arg1 error:(id *)arg2;
- (void)gotoFinderLiveTid:(NSString *)arg1 nonceId:(NSString *)arg2 error:(id *)arg3;
- (void)gotoFinderFeedTid:(NSString *)arg1 nonceId:(NSString *)arg2 sessionId:(NSString *)arg3 error:(id *)arg4;
- (void)gotoFinderDetailWithStartTimeTid:(NSString *)arg1 nonceId:(NSString *)arg2 needGetRelatedList:(_Bool)arg3 sessionId:(NSString *)arg4 startTimeMsk:(long long)arg5 error:(id *)arg6;
- (void)gotoFinderDetailTid:(NSString *)arg1 nonceId:(NSString *)arg2 needGetRelatedList:(_Bool)arg3 sessionId:(NSString *)arg4 error:(id *)arg5;
- (void)gotoFinderAccountProfileUsername:(NSString *)arg1 tabType:(long long)arg2 requestScene:(long long)arg3 extraInfo:(NSString *)arg4 followScene:(long long)arg5 error:(id *)arg6;
- (void)openADAdSchemeInfo:(FlutterStandardTypedData *)arg1 preloadScene:(long long)arg2 completion:(void (^)(TingADResult *, FlutterError *))arg3;
- (void)preloadMiniProgramPreloadMiniProgramType:(long long)arg1 preloadScene:(long long)arg2 error:(id *)arg3;
@end

