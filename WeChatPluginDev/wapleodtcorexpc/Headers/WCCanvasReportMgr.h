//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCCanvasDynamicDataLoader, WCCanvasReportInfo, WCStatTimerHelper;

@interface WCCanvasReportMgr
{
    _Bool _bSearchCanvas;
    _Bool _hasReportInit;
    WCCanvasReportInfo *_reportInfo;
    WCStatTimerHelper *_pageTimeHelper;
    NSMutableDictionary *_componentTimeHelperDict;
    NSMutableDictionary *_componentReportInfoDict;
    NSMutableDictionary *_videoTimeHelperDict;
    NSMutableDictionary *_sightStreamTimeHelperDict;
    unsigned long long _lastStreamVideoPlayCompleteTime;
    unsigned long long _lastSightStreamVideoPlayCompleteTime;
    WCCanvasDynamicDataLoader *_dataLoader;
}

+ (void)tryToReportDownloadInfoWithUrl:(id)arg1 mediaType:(unsigned int)arg2 isPreload:(unsigned int)arg3 costTime:(unsigned long long)arg4 retCode:(long long)arg5 scene:(unsigned int)arg6 downloadSize:(long long)arg7 startDownloadTime:(unsigned long long)arg8;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) unsigned long long lastSightStreamVideoPlayCompleteTime; // @synthesize lastSightStreamVideoPlayCompleteTime=_lastSightStreamVideoPlayCompleteTime;
@property(nonatomic) unsigned long long lastStreamVideoPlayCompleteTime; // @synthesize lastStreamVideoPlayCompleteTime=_lastStreamVideoPlayCompleteTime;
@property(retain, nonatomic) NSMutableDictionary *sightStreamTimeHelperDict; // @synthesize sightStreamTimeHelperDict=_sightStreamTimeHelperDict;
@property(retain, nonatomic) NSMutableDictionary *videoTimeHelperDict; // @synthesize videoTimeHelperDict=_videoTimeHelperDict;
@property(retain, nonatomic) NSMutableDictionary *componentReportInfoDict; // @synthesize componentReportInfoDict=_componentReportInfoDict;
@property(retain, nonatomic) NSMutableDictionary *componentTimeHelperDict; // @synthesize componentTimeHelperDict=_componentTimeHelperDict;
@property(retain, nonatomic) WCStatTimerHelper *pageTimeHelper; // @synthesize pageTimeHelper=_pageTimeHelper;
@property(nonatomic) _Bool hasReportInit; // @synthesize hasReportInit=_hasReportInit;
@property(retain, nonatomic) WCCanvasReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) _Bool bSearchCanvas; // @synthesize bSearchCanvas=_bSearchCanvas;
- (id)getTimerHelperInDict:(id)arg1 usingKey:(id)arg2;
- (id)getComponentReportInfoUsingItem:(id)arg1 withAssertType:(Class)arg2;
- (id)getComponentReportInfoUsingItem:(id)arg1;
- (void)tryToReportBackgroundMusicComponent:(id)arg1 exposureCount:(unsigned int)arg2 stayTime:(unsigned long long)arg3;
- (void)tryToReportMusicComponent:(id)arg1 musicDuration:(unsigned int)arg2 playCount:(unsigned int)arg3 playCompletedCount:(unsigned int)arg4 playedTime:(unsigned long long)arg5 maxPlayTime:(unsigned int)arg6;
- (id)getRedEnvelopCardInfoForItem:(id)arg1 withSubType:(int)arg2 isDoubleCard:(int)arg3 giveCardId:(id)arg4;
- (void)tryToReportRedEnvelopComponentShareLinkClick:(id)arg1 withSubType:(int)arg2 isDoubleCard:(int)arg3 giveCardId:(id)arg4;
- (void)tryToReportRedEnvelopComponentButtonClick:(id)arg1 withSubType:(int)arg2 isDoubleCard:(int)arg3 giveCardId:(id)arg4;
- (void)tryToReportRedEnvelopComponentExposure:(id)arg1 withSubType:(int)arg2 isDoubleCard:(int)arg3 giveCardId:(id)arg4;
- (void)tryToReportFloatJumpComponentClick:(id)arg1 clickSource:(unsigned long long)arg2;
- (void)tryToReportRandomPickCardComponentCardClicked:(id)arg1 isPicked:(_Bool)arg2;
- (void)tryToReportRandomLayoutComponentPickCardBottomClicked:(id)arg1;
- (void)tryToReportHalfRandomCardComponent:(id)arg1 cardId:(id)arg2;
- (void)tryToReportSocialComponent:(id)arg1 withUIType:(int)arg2;
- (void)tryToReportWebStoreComponentDidClickDone:(id)arg1;
- (void)tryToReportWebStoreComponent:(id)arg1 loadingTime:(unsigned long long)arg2;
- (void)tryToReportWebStoreComponent:(id)arg1 isPreloaded:(_Bool)arg2;
- (void)tryToReportGeneralVideoComponent:(id)arg1 floatAreaClickIsFullClick:(_Bool)arg2;
- (void)tryToReportGeneralVideoComponent:(id)arg1 withFloatAreaStayTime:(unsigned long long)arg2 floatAreaExposureCount:(unsigned int)arg3 buttonStayTime:(unsigned long long)arg4 buttonExposureCount:(unsigned int)arg5;
- (void)tryToReportGeneralVideoComponent:(id)arg1 withClickType:(unsigned int)arg2;
- (void)tryToReportGeneralVideoComponentClickSight:(id)arg1;
- (void)tryToReportGeneralVideoComponentVideoUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportGeneralVideoComponentThumbUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportGeneralVideoComponent:(id)arg1 isAutoPlay:(_Bool)arg2;
- (void)tryToReportGeneralVideoComponentClickVoiceControl:(id)arg1;
- (void)tryToReportGeneralVideoComponentClickPlayButton:(id)arg1;
- (void)tryToReportGeneralVideoComponentPlayComplete:(id)arg1;
- (void)tryToReportGeneralVideoComponentPlayEnd:(id)arg1;
- (void)tryToReportGeneralVideoComponentPlayStart:(id)arg1;
- (void)tryToReportGeneralVideoComponent:(id)arg1 withDuration:(CDStruct_1b6d18a9)arg2;
- (void)tryToReportBottomSwipeComponentJump:(id)arg1;
- (void)tryToReportSphereImagePan:(id)arg1;
- (void)tryToReportPanoramaComponentUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportStreamCDNComponentClick:(id)arg1 withType:(unsigned int)arg2;
- (void)addComponentStayTime:(id)arg1 stayTime:(unsigned long long)arg2;
- (void)tryToReportFullscreenVideoLeave:(id)arg1 stayTotalTime:(unsigned long long)arg2;
- (void)tryToReportStreamCDNComponentFloatAreaClick:(id)arg1 isFullClick:(_Bool)arg2;
- (void)tryToReportStreamCDNComponentFloatAreaExposedData:(id)arg1 withFloatAreaStayTime:(unsigned long long)arg2 floatAreaExposureCount:(unsigned int)arg3 buttonStayTime:(unsigned long long)arg4 buttonExposureCount:(unsigned int)arg5;
- (void)tryToReportStreamCDNComponentUseNewUI:(id)arg1;
- (void)tryToReportStreamComponentThumbUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportStreamComponentIsAutoPlay:(id)arg1 isAutoPlay:(_Bool)arg2;
- (void)tryToReportStreamComponentClickVoiceControl:(id)arg1;
- (void)tryToReportStreamComponentClickPlayButton:(id)arg1;
- (void)tryToReportStreamComponentPlayComplete:(id)arg1;
- (void)tryToReportStreamComponentPlayEnd:(id)arg1;
- (void)tryToReportStreamComponentPlayStart:(id)arg1;
- (void)tryToReportStreamComponentDuration:(CDStruct_1b6d18a9)arg1 WithItem:(id)arg2;
- (void)tryToReportSightCDNComponentClick:(id)arg1 withType:(unsigned int)arg2;
- (void)tryToReportSightCDNComponentFloatAreaClick:(id)arg1 isFullClick:(_Bool)arg2;
- (void)tryToReportSightCDNComponentFloatAreaExposedData:(id)arg1 withFloatAreaStayTime:(unsigned long long)arg2 floatAreaExposureCount:(unsigned int)arg3 buttonStayTime:(unsigned long long)arg4 buttonExposureCount:(unsigned int)arg5;
- (void)tryToReportSightCDNComponentUseNewUI:(id)arg1;
- (void)tryToReportSightComponentStreamVideoPlayFromBegining:(id)arg1;
- (void)tryToReportSightComponentStreamVideoPlayComplete:(id)arg1;
- (void)tryToReportSightComponentStreamVideoPlayEnd:(id)arg1;
- (void)tryToReportSightComponentStreamVideoPlayStart:(id)arg1;
- (void)tryToReportSightComponentClickStreamButtonEntrance:(id)arg1;
- (void)tryToReportSightComponentClick:(id)arg1;
- (void)tryToReportSightUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportSightThumbUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportSightIsAutoPlay:(id)arg1 isAutoPlay:(_Bool)arg2;
- (void)tryToReportSightComponentClickVoiceControl:(id)arg1;
- (void)tryToReportSightComponentPlayComplete:(id)arg1;
- (void)tryToReportSightComponentPlayEnd:(id)arg1;
- (void)tryToReportSightComponentPlayStart:(id)arg1;
- (void)tryToReportSightComponentDuration:(CDStruct_1b6d18a9)arg1 WithItem:(id)arg2;
- (void)tryToReportBasicActionComponentClick:(id)arg1;
- (void)tryToReportFullScreenImageUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportPureImageUrlInfo:(id)arg1 needDownload:(_Bool)arg2;
- (void)tryToReportButtonComponentInit:(id)arg1;
- (void)tryToReportButtonComponentClick:(id)arg1;
- (void)tryToAddReportComponentExposure:(id)arg1;
- (void)tryToReportComponentExposureEnd:(id)arg1;
- (void)tryToReportComponentExposureStart:(id)arg1;
- (void)tryToReportExitWithLeaveType:(unsigned int)arg1 andSource:(unsigned int)arg2;
- (void)tryToUpdateExtraInfo:(id)arg1;
- (void)tryToUpdateSharedUxinfoWith:(id)arg1;
- (void)tryToReportAddFavItem;
- (void)tryToReportSendFriendMsg;
- (void)tryToReportShareTimeLine;
- (void)tryToReportRightSwipePage;
- (void)reportCanvasAdEnterWithSnsId:(id)arg1 uxInfo:(id)arg2 inScene:(int)arg3 withEnterType:(unsigned int)arg4 andSource:(unsigned int)arg5 originScene:(int)arg6 canvasId:(unsigned long long)arg7;
- (void)reportCanvasAdInitWithSnsId:(id)arg1 uxInfo:(id)arg2 inScene:(int)arg3 withEnterType:(unsigned int)arg4 enableSwipe:(_Bool)arg5 componentItemsCount:(unsigned int)arg6 snsStatExt:(id)arg7 extraInfo:(id)arg8 originScene:(int)arg9 canvasId:(unsigned long long)arg10 viewId:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

