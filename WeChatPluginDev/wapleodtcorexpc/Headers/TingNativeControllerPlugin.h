//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterEventChannel, NSString, TingFlutterPlayController, TingLaterListenChannel, TingPlayerAdvertisement, UIViewController, WCFinderCreateCoordinator;

@interface TingNativeControllerPlugin : NSObject
{
    _Bool _selectImgWithoutCDN;
    UIViewController *_currentViewController;
    WCFinderCreateCoordinator *_userCreator;
    FlutterEventChannel *_peakPowerEventChannel;
    CDUnknownBlockType _peakPowerEventSink;
    FlutterEventChannel *_voiceInputWordingEventChannel;
    CDUnknownBlockType _voiceInputWordingEventSink;
    FlutterEventChannel *_voiceRecordingInterruptEventChannel;
    CDUnknownBlockType _voiceRecordingInterruptEventSink;
    CDUnknownBlockType _selectLocalPhotoComplection;
    CDUnknownBlockType _createFinderUserComplection;
    TingLaterListenChannel *_listenLaterChannel;
    TingFlutterPlayController *_playerControllerChannel;
    TingPlayerAdvertisement *_playerAdvertisement;
    CDUnknownBlockType _consumeWcCoinCompletion;
    CDUnknownBlockType _buyWcCoinCompletion;
}

+ (_Bool)isEngineListenItemInfoEvent:(id)arg1;
+ (_Bool)isEngineCategoryInfoEvent:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType buyWcCoinCompletion; // @synthesize buyWcCoinCompletion=_buyWcCoinCompletion;
@property(copy, nonatomic) CDUnknownBlockType consumeWcCoinCompletion; // @synthesize consumeWcCoinCompletion=_consumeWcCoinCompletion;
@property(retain, nonatomic) TingPlayerAdvertisement *playerAdvertisement; // @synthesize playerAdvertisement=_playerAdvertisement;
@property(retain, nonatomic) TingFlutterPlayController *playerControllerChannel; // @synthesize playerControllerChannel=_playerControllerChannel;
@property(retain, nonatomic) TingLaterListenChannel *listenLaterChannel; // @synthesize listenLaterChannel=_listenLaterChannel;
@property(nonatomic) _Bool selectImgWithoutCDN; // @synthesize selectImgWithoutCDN=_selectImgWithoutCDN;
@property(copy, nonatomic) CDUnknownBlockType createFinderUserComplection; // @synthesize createFinderUserComplection=_createFinderUserComplection;
@property(copy, nonatomic) CDUnknownBlockType selectLocalPhotoComplection; // @synthesize selectLocalPhotoComplection=_selectLocalPhotoComplection;
@property(copy, nonatomic) CDUnknownBlockType voiceRecordingInterruptEventSink; // @synthesize voiceRecordingInterruptEventSink=_voiceRecordingInterruptEventSink;
@property(retain, nonatomic) FlutterEventChannel *voiceRecordingInterruptEventChannel; // @synthesize voiceRecordingInterruptEventChannel=_voiceRecordingInterruptEventChannel;
@property(copy, nonatomic) CDUnknownBlockType voiceInputWordingEventSink; // @synthesize voiceInputWordingEventSink=_voiceInputWordingEventSink;
@property(retain, nonatomic) FlutterEventChannel *voiceInputWordingEventChannel; // @synthesize voiceInputWordingEventChannel=_voiceInputWordingEventChannel;
@property(copy, nonatomic) CDUnknownBlockType peakPowerEventSink; // @synthesize peakPowerEventSink=_peakPowerEventSink;
@property(retain, nonatomic) FlutterEventChannel *peakPowerEventChannel; // @synthesize peakPowerEventChannel=_peakPowerEventChannel;
@property(retain, nonatomic) WCFinderCreateCoordinator *userCreator; // @synthesize userCreator=_userCreator;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)onCommonHalfScreenGoDetailClickIdentifier:(id)arg1 error:(id *)arg2;
- (void)onTingCommonEventEvent:(long long)arg1 params:(id)arg2 error:(id *)arg3;
- (void)buyCoinSuccess:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)consumeDidCancel:(id)arg1;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (id)getContactByUsername:(id)arg1;
- (id)getPoiInfoWithError:(id *)arg1;
- (void)onOutterLikeOp:(_Bool)arg1 listenId:(id)arg2;
- (void)onPlayerLikeItemData:(id)arg1 isLike:(_Bool)arg2 error:(id *)arg3;
- (void)didDeletedListenLaterWithItem:(id)arg1 succeed:(_Bool)arg2;
- (void)didAddedListenLaterWithItem:(id)arg1 succeed:(_Bool)arg2;
- (void)launchApplicationWithUrlAppId:(id)arg1 scheme:(id)arg2 url:(id)arg3 gotoAppInstallPage:(_Bool)arg4 error:(id *)arg5;
- (void)gotoAppInstallPageAppId:(id)arg1 error:(id *)arg2;
- (void)launchApplicationAppId:(id)arg1 scheme:(id)arg2 error:(id *)arg3;
- (id)isAppInstalledAppId:(id)arg1 scheme:(id)arg2 error:(id *)arg3;
- (void)willAddListenLaterWithItem:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)showFansHalfProfileUsername:(id)arg1 nickname:(id)arg2 headImgUrl:(id)arg3 listenBypassBuffer:(id)arg4 error:(id *)arg5;
- (void)buyWCCoinParam:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)consumeWCCoinParam:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getWCCoinBalanceWithCompletion:(CDUnknownBlockType)arg1;
- (void)uploadRecordFileToCdnLocalFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopRecordWithCompletion:(CDUnknownBlockType)arg1;
- (void)startRecordMinTimeInSecond:(long long)arg1 maxTimeInSecond:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOrRevertBlackListTingBypassBuffer:(id)arg1 addOrRevert:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addToStarListenItemData:(id)arg1 scene:(long long)arg2 music:(_Bool)arg3 cancel:(_Bool)arg4 snapInfo:(id)arg5 error:(id *)arg6;
- (id)getBrandContactInfoUsername:(id)arg1 error:(id *)arg2;
- (void)followBrandAccountUsername:(id)arg1 isCancel:(_Bool)arg2 scene:(long long)arg3 reportInfo:(id)arg4 sceneNote:(id)arg5 finderBuffer:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)gotoBusinessAccountProfileUserName:(id)arg1 scene:(long long)arg2 sceneNote:(id)arg3 error:(id *)arg4;
- (void)gotoFinderAccountProfileUsername:(id)arg1 tabType:(long long)arg2 requestScene:(long long)arg3 extraInfo:(id)arg4 followScene:(long long)arg5 error:(id *)arg6;
- (void)gotoTingSettingPageWithError:(id *)arg1;
- (void)goToShakeViewControllerWithError:(id *)arg1;
- (void)openLiteAppLiteAppType:(long long)arg1 appId:(id)arg2 page:(id)arg3 query:(id)arg4 minVer:(id)arg5 isTransparent:(_Bool)arg6 error:(id *)arg7;
- (void)prepareLiteAppLiteAppType:(long long)arg1 appId:(id)arg2 page:(id)arg3 query:(id)arg4 error:(id *)arg5;
- (void)showHalfScreenWebViewUrl:(id)arg1 error:(id *)arg2;
- (id)isCategoryItemInFavoritesItemData:(id)arg1 error:(id *)arg2;
- (void)quickShareTingItemTingItemData:(id)arg1 userName:(id)arg2 error:(id *)arg3;
- (void)quickShareCategoryItemItemData:(id)arg1 userName:(id)arg2 error:(id *)arg3;
- (void)getFinderContactInfoUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openWeAppAppId:(id)arg1 path:(id)arg2 scene:(long long)arg3 sceneNote:(id)arg4 noReLaunch:(_Bool)arg5 debugMode:(long long)arg6 error:(id *)arg7;
- (void)openWebPageUrl:(id)arg1 openInfo:(id)arg2 error:(id *)arg3;
- (void)goToWebPageUrl:(id)arg1 scene:(long long)arg2 error:(id *)arg3;
- (id)getFinderAccountInfoWithError:(id *)arg1;
- (void)goToCreateFinderAccountTipsWording:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_openFinderFeedDetailPageWithFeedId:(id)arg1 nonceId:(id)arg2 startTime:(id)arg3;
- (void)openFinderFeedDetailPageWithFeedId:(id)arg1 nonceId:(id)arg2 startTime:(id)arg3;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)__trySyncPlayerActionToWeAppTask:(id)arg1 action:(unsigned long long)arg2;
- (void)onPlayerActionItemData:(id)arg1 action:(long long)arg2 error:(id *)arg3;
- (void)updatePersonalizedRecommendIsPersonalizedRecommend:(_Bool)arg1 error:(id *)arg2;
- (void)destroyAndReopenTingMiniProgramScene:(long long)arg1 error:(id *)arg2;
- (void)setShowAudioRedDotShow:(_Bool)arg1 error:(id *)arg2;
- (id)getContactInfoFromHashHashUsernames:(id)arg1 error:(id *)arg2;
- (id)getContactInfoUsername:(id)arg1 error:(id *)arg2;
- (id)deleteFavBySourceIdSourceId:(id)arg1 error:(id *)arg2;
- (id)hasAddedInFavDBSourceId:(id)arg1 error:(id *)arg2;
- (id)showAudioRedDotWithError:(id *)arg1;
- (void)inPlayerValue:(_Bool)arg1 error:(id *)arg2;
- (void)setOnceOrientationOrientation:(long long)arg1 error:(id *)arg2;
- (void)allowRotateAllow:(_Bool)arg1 error:(id *)arg2;
- (void)goToProfileUserName:(id)arg1 error:(id *)arg2;
- (id)getWxUsernameWithError:(id *)arg1;
- (id)getIdentityTypeWithError:(id *)arg1;
- (void)internalStopVoiceInput;
- (void)stopVoiceInputWithError:(id *)arg1;
- (void)startVoiceInputWithCompletion:(CDUnknownBlockType)arg1;
- (void)internalStopRecognizeSong;
- (void)stopRecognizeSongWithError:(id *)arg1;
- (void)startRecognizeSongWithCompletion:(CDUnknownBlockType)arg1;
- (void)scanWithCompletion:(CDUnknownBlockType)arg1;
- (void)gotoBusinessArticleItemData:(id)arg1 error:(id *)arg2;
- (void)gotoBusinessArticleUrl:(id)arg1 error:(id *)arg2;
- (void)gotoBusinessAccountProfileItemData:(id)arg1 error:(id *)arg2;
- (void)open3rdAppWithTingItemAppId:(id)arg1 itemData:(id)arg2 fromSource:(long long)arg3 error:(id *)arg4;
- (id)get3rdAppInfoAppId:(id)arg1 error:(id *)arg2;
- (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)uploadLocalPhotoLocalPhotoResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)selectLocalPhotoWithCompletion:(CDUnknownBlockType)arg1;
- (void)selectLocalImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)markPlayTaskInFullScreenPlayerModeWithError:(id *)arg1;
- (void)shareLyricTingItemData:(id)arg1 lyricItems:(id)arg2 beginTime:(double)arg3 endTime:(double)arg4 shareScene:(long long)arg5 error:(id *)arg6;
- (void)saveLocalFileTingItemData:(id)arg1 error:(id *)arg2;
- (void)openByOtherAppTingItemData:(id)arg1 error:(id *)arg2;
- (void)sendHandOffOpenCommandTingItemData:(id)arg1 error:(id *)arg2;
- (id)canShowHandOffOpenCommandItemTingItemData:(id)arg1 error:(id *)arg2;
- (void)shareCategoryItemItemData:(id)arg1 shareScene:(long long)arg2 error:(id *)arg3;
- (void)shareTingItemTingItemData:(id)arg1 commentInfo:(id)arg2 categoryItem:(id)arg3 shareScene:(long long)arg4 error:(id *)arg5;
- (void)gotoFinderMyProfileAudioTabContactInfo:(id)arg1 error:(id *)arg2;
- (void)followFinderAccountUsername:(id)arg1 isCancel:(_Bool)arg2 tingItemData:(id)arg3 requestScene:(long long)arg4 extraInfo:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)gotoFinderLiveTid:(id)arg1 nonceId:(id)arg2 error:(id *)arg3;
- (void)gotoFinderDetailWithStartTimeTid:(id)arg1 nonceId:(id)arg2 needGetRelatedList:(_Bool)arg3 sessionId:(id)arg4 startTimeMsk:(long long)arg5 error:(id *)arg6;
- (void)gotoFinderFeedTid:(id)arg1 nonceId:(id)arg2 sessionId:(id)arg3 error:(id *)arg4;
- (void)gotoFinderDetailTid:(id)arg1 nonceId:(id)arg2 needGetRelatedList:(_Bool)arg3 sessionId:(id)arg4 error:(id *)arg5;
- (void)goToQQMusicPaymentAppId:(id)arg1 mid:(id)arg2 error:(id *)arg3;
- (void)goToLiteAppAppId:(id)arg1 path:(id)arg2 query:(id)arg3 error:(id *)arg4;
- (void)openADAdSchemeInfo:(id)arg1 preloadScene:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preloadMiniProgramPreloadMiniProgramType:(long long)arg1 preloadScene:(long long)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

