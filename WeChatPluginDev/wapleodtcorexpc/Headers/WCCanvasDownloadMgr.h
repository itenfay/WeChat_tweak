//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasDownloadMgr
{
}

- (void)tryToPreloadStatePublishForAdCanvas:(id)arg1;
- (void)preDownloadStatePublish:(id)arg1;
- (void)tryToPreloadResourceForCanvasDSLJson:(id)arg1;
- (void)stopPreDownloadVideoForMedia:(id)arg1;
- (void)stopPreDownloadVideoForComponent:(id)arg1;
- (void)stopPreDownloadVideoForComponentList:(id)arg1;
- (void)stopPreDownloadVideoForCanvas:(id)arg1;
- (void)stopPreDownloadVideo:(id)arg1;
- (void)preloadH5WithUrl:(id)arg1;
- (void)preloadH5ForCanvasUrl:(id)arg1 componentItem:(id)arg2 advertiseInfo:(id)arg3;
- (void)preloadH5ForSnsAdUrl:(id)arg1 advertiseInfo:(id)arg2;
- (void)tryPreloadH5ForComponentItem:(id)arg1 advertiseInfo:(id)arg2 inCanvas:(_Bool)arg3;
- (void)tryPreloadH5ForComponentList:(id)arg1 advertiseInfo:(id)arg2 inCanvas:(_Bool)arg3;
- (void)preloadH5ForCanvasAdResource:(id)arg1 advertiseInfo:(id)arg2 inCanvas:(_Bool)arg3;
- (void)preloadH5ForSnsAdResource:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)reportImageDownloadReportWithUr:(id)arg1 andResult:(_Bool)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)md5ForURL:(id)arg1;
- (void)tryToDownloadFirstImage:(id)arg1;
- (_Bool)isFirstImageHasDownloaded:(id)arg1;
- (_Bool)isImageHasDownloaded:(id)arg1;
- (id)getFirstImageUrl:(id)arg1;
- (void)preDownloadDynamicFeedElementResourceWithInfo:(id)arg1;
- (void)preDownloadDynamicFeedResourceWithInfo:(id)arg1;
- (void)preDownloadCanvasEggAnimationResourceWithInfo:(id)arg1;
- (void)preDownloadCommonFileWithUrl:(id)arg1 fileMD5:(id)arg2;
- (void)preDownloadSight:(id)arg1 atScene:(unsigned int)arg2 withDownloadOutside:(_Bool)arg3;
- (void)preDownloadCanvasSightWithUrl:(id)arg1 md5:(id)arg2 tid:(id)arg3 preloadConfigInfo:(id)arg4 isStreamMode:(_Bool)arg5 shouldCheckDownloadQueue:(_Bool)arg6;
- (void)preDownloadTimelineSightWithMediaItem:(id)arg1 preloadConfigInfo:(id)arg2 isStreamMode:(_Bool)arg3;
- (void)preDownloadImage:(id)arg1 atScene:(unsigned int)arg2 withDownloadOutside:(_Bool)arg3;
- (_Bool)tryToDownloadComponetResrc:(id)arg1 atScene:(unsigned int)arg2 withDownloadOutSide:(_Bool)arg3 preloadConfigInfo:(id)arg4;
- (void)preDownloadLookbookCardInfo:(id)arg1 preloadConfigInfo:(id)arg2 isStreamMode:(_Bool)arg3;
- (void)preDownloadSliderCardList:(id)arg1 preloadConfigInfo:(id)arg2 isStreamMode:(_Bool)arg3;
- (void)preDownloadSliderCardMedia:(id)arg1 preloadConfigInfo:(id)arg2 isStreamMode:(_Bool)arg3;
- (void)preDownloadFinderTopicRes:(id)arg1 preloadConfigInfo:(id)arg2 isStreamMode:(_Bool)arg3;
- (void)preDownloadScanGoodRes:(id)arg1;
- (void)preloadCoverRes:(id)arg1;
- (void)preDownloadSphereCardResource:(id)arg1;
- (void)downloadImageInternal:(id)arg1;
- (void)preDownloadImagesWithUrlArray:(id)arg1;
- (void)preDownloadAdResource:(id)arg1 withoutCanvas:(_Bool)arg2;
- (void)preDownloadSnsAdResource:(id)arg1 preloadConfigInfo:(id)arg2;
- (void)tryToDownloadFloatComponentList:(id)arg1 atScene:(unsigned int)arg2 withDownloadOutSide:(_Bool)arg3 preloadConfigInfo:(id)arg4;
- (void)tryToDownloadComponetList:(id)arg1 atScene:(unsigned int)arg2 withDownloadOutSide:(_Bool)arg3 preloadConfigInfo:(id)arg4;
- (void)preDownloadCanvasExtraResource:(id)arg1 preloadConfigInfo:(id)arg2;
- (void)preDownloadCanvasAdResource:(id)arg1 preloadConfigInfo:(id)arg2;
- (void)tryToPreloadCanvasResourceForCanvasInfo:(id)arg1 preloadConfigInfo:(id)arg2;
- (void)tryToPreloadCanvasResourceOnAdExposure:(id)arg1;
- (void)tryToDownloadTopNumComponetResrc:(id)arg1 topNum:(unsigned long long)arg2 atScene:(unsigned int)arg3 withDownloadOutSide:(_Bool)arg4 preloadConfigInfo:(id)arg5;
- (unsigned long long)getResourceCountOfCanvasPage:(id)arg1;
- (id)imageForURL:(id)arg1 LoadOnMainThread:(_Bool)arg2;
- (void)tryToDownloadCanvasAdOutSideIcon:(id)arg1;
- (unsigned long long)getResourceCountOfTopPageCount:(unsigned long long)arg1 canvasInfo:(id)arg2;
- (void)tryToPredownloadResourceWhenRecieveAdDynamicXml:(id)arg1 atScene:(unsigned int)arg2;
- (void)tryToPredownloadResourceWhenRecieveAdShareXml:(id)arg1 atScene:(unsigned int)arg2;
- (void)tryToPredownloadResourceWhenRecieveCanvasShareFeed:(id)arg1 atScene:(unsigned int)arg2;
- (void)tryToDownloadCanvasAdResourceWithBeginPage:(unsigned long long)arg1 EndPage:(unsigned long long)arg2 CanvasInfo:(id)arg3 atScene:(unsigned int)arg4;
- (void)onServiceClearData;
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

