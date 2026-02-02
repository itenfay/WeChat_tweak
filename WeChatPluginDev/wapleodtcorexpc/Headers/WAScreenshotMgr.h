//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, PHFetchResult, WAAppTask;

@interface WAScreenshotMgr
{
    NSMutableDictionary *_infoDic;
    NSMutableArray *_pendingInfoList;
    NSMutableArray *_hasShownGuideBubbleMsgSvrIdList;
    _Bool _isScreenshotTakenBeforeWeAppDidAppear;
    _Bool _hasRegisterPhotoLibraryChangeObserver;
    PHFetchResult *_screenshotAssetsFetchResult;
    WAAppTask *_cachedForegroundTaskOnScreenshotNotify;
    unsigned long long _cachedScreenshotNotifyTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasRegisterPhotoLibraryChangeObserver; // @synthesize hasRegisterPhotoLibraryChangeObserver=_hasRegisterPhotoLibraryChangeObserver;
@property(nonatomic) _Bool isScreenshotTakenBeforeWeAppDidAppear; // @synthesize isScreenshotTakenBeforeWeAppDidAppear=_isScreenshotTakenBeforeWeAppDidAppear;
@property(nonatomic) unsigned long long cachedScreenshotNotifyTimestamp; // @synthesize cachedScreenshotNotifyTimestamp=_cachedScreenshotNotifyTimestamp;
@property(nonatomic) __weak WAAppTask *cachedForegroundTaskOnScreenshotNotify; // @synthesize cachedForegroundTaskOnScreenshotNotify=_cachedForegroundTaskOnScreenshotNotify;
@property(retain, nonatomic) PHFetchResult *screenshotAssetsFetchResult; // @synthesize screenshotAssetsFetchResult=_screenshotAssetsFetchResult;
- (void)onAppTaskDidFinishLaunchWithAppId:(id)arg1;
- (_Bool)imageDataIsScreenshot:(id)arg1;
- (id)msgHasShownGuideBubbleRecordListSavePath;
- (void)saveMsgHasShownGuideBubbleRecordList;
- (void)loadMsgHasShownGuideBubbleRecordList;
- (id)screenshotContextInfoDicSavePath;
- (void)saveScreenshotContextInfoDic;
- (void)loadScreenshotContextInfoDic;
- (void)onFinishGetPathFromDeveloper:(id)arg1 webVC:(id)arg2;
- (_Bool)hasMsgShownEnterWeAppGuideBubble:(long long)arg1;
- (void)recordMsgHasShownEnterWeAppGuideBubble:(long long)arg1;
- (id)getScreenshotContextInfoWithAssetId:(id)arg1;
- (id)getCurrentVisibleTaskByTaskMgr;
- (id)getCurrentVisibleTaskWithCache;
- (void)printAssetImageInfo:(id)arg1;
- (void)onNewScreenshotTaken:(id)arg1 foregroundTask:(id)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)onServiceTerminate;
- (void)initScreenshotFetchResult;
- (void)updatePhotoLibraryChangeObserverRegisterStatus:(_Bool)arg1;
- (_Bool)canRegisterPhotoLibraryChangeObserver;
- (void)handleScreenshot:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

