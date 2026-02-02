//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveStorageCleanupPinningToken, NSMutableSet, NSString, WCFinderLivePlayerViewReporter;

@interface MMFinderLiveAdvertisementPlayerViewModel
{
    NSMutableSet *_preloadAdvertisementSet;
    unsigned long long _beginShowAdVideoTimeForReport;
    WCFinderLivePlayerViewReporter *_playerViewReporter;
    MMLiveStorageCleanupPinningToken *_resourcesPinningToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken; // @synthesize resourcesPinningToken=_resourcesPinningToken;
@property(retain, nonatomic) WCFinderLivePlayerViewReporter *playerViewReporter; // @synthesize playerViewReporter=_playerViewReporter;
@property(nonatomic) unsigned long long beginShowAdVideoTimeForReport; // @synthesize beginShowAdVideoTimeForReport=_beginShowAdVideoTimeForReport;
@property(retain, nonatomic) NSMutableSet *preloadAdvertisementSet; // @synthesize preloadAdvertisementSet=_preloadAdvertisementSet;
- (void)showBufferingView;
- (void)onVideoPlayFinish;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)hiddenBufferingView;
- (unsigned long long)currentAdVideoDuration;
- (unsigned long long)currentAdTime;
- (id)adId;
- (id)playerId;
- (void)onExitLive;
- (double)adVideoDiffernetValue;
- (unsigned long long)audienceAdVideoScenReportType:(unsigned long long)arg1;
- (void)preloadPreloadPlayerDataWithRequest:(id)arg1 liveAdId:(id)arg2;
- (void)unRegisterExt;
- (void)registerExt;
- (void)onLiveTaskWillShowLiveAdvertisement:(id)arg1 liveAdId:(id)arg2 liveAdPlayUrl:(id)arg3;
- (void)onLiveTask:(id)arg1 synchronizedFinderLiveAnchorTimeInterval:(id)arg2;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (id)saveFilename;
- (id)videoFormatPath;
- (id)videoSavePath;
- (id)generateDownloadArgsWrap;
- (id)createPlayerInfo;
- (void)playFinish;
- (_Bool)play;
- (void)dealloc;
- (id)initTaskId:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

