//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WCAdvertiseStatMgr
{
    NSMutableDictionary *_adID2BodyMap;
    NSMutableDictionary *_adID2CommentMap;
    NSMutableArray *_pictureWrapList;
    unsigned int _clickMinuteFrequency;
    unsigned int _clickMinuteReportCount;
    unsigned int _clickMinuteTimestamp;
    unsigned int _exposureMinuteFrequency;
    unsigned int _exposureMinuteReportCount;
    unsigned int _exposureMinuteTimestamp;
    NSMutableSet *_forbidReportTimelineExposureFeedIdSet;
    _Bool _startRecordAdPageChange;
    NSString *_adInfo;
    NSString *_currUrl;
    NSString *_sessionId;
    NSMutableDictionary *_appId2WAPageInfo;
    NSMutableSet *_adShareExposureIdSet;
}

+ (_Bool)isSameMinuteTimestampA:(unsigned int)arg1 andTimestampB:(unsigned int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *adShareExposureIdSet; // @synthesize adShareExposureIdSet=_adShareExposureIdSet;
@property(retain, nonatomic) NSMutableSet *forbidReportTimelineExposureFeedIdSet; // @synthesize forbidReportTimelineExposureFeedIdSet=_forbidReportTimelineExposureFeedIdSet;
- (id)getCachedBodyWrapList;
- (id)fetchCommentWrap:(id)arg1;
- (id)fetchBodyWrap:(id)arg1;
- (void)endDisplayADShare:(id)arg1;
- (void)willDisplayADShare:(id)arg1;
- (id)fetchFireworkCheerReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)fetchContinuousLikeReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)fetchCommonInteractionReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (void)processLookbookCardBrandNewReportItem:(id)arg1 withMediaItem:(id)arg2;
- (void)processLookbookCardReportItem:(id)arg1 withMediaItem:(id)arg2;
- (void)processLookbookCardReportInfo:(id)arg1 dataItem:(id)arg2;
- (id)createLookbookReportItem:(id)arg1 index:(unsigned long long)arg2;
- (id)createLookbookCardReportInfo:(id)arg1;
- (id)fetchLookbookCardReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)fetchFinderLiveStreamReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)fetchBreakFrameReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (void)processSliderCardReportItem:(id)arg1 withMediaItem:(id)arg2;
- (void)processSliderCardReportInfo:(id)arg1 dataItem:(id)arg2;
- (id)createSliderCardReportItem:(id)arg1 index:(int)arg2 extra:(id)arg3 hasBorder:(_Bool)arg4;
- (id)createSliderCardReportInfo:(id)arg1;
- (id)fetchSliderCardReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (void)processFinderTopicReportInfo:(id)arg1 dataItem:(id)arg2;
- (id)createFinderTopicReportInfo:(id)arg1;
- (id)fetchFinderTopicReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)needReportConversionOnlineClick:(long long)arg1;
- (void)reportConversionOnlineClick:(id)arg1 clickPos:(long long)arg2 eventId:(int)arg3 costTime:(unsigned long long)arg4;
- (unsigned int)forbidAutoPlay:(id)arg1;
- (id)fetchUxInfo:(id)arg1;
- (_Bool)isAdRelievedBuyShow:(id)arg1;
- (_Bool)isAdBrandBeFollowed:(id)arg1;
- (int)getDarkmodeState;
- (int)getAdBrandFollowState:(id)arg1;
- (id)fetchDragImageReportInfoForData:(id)arg1 scene:(unsigned long long)arg2;
- (void)doLongPressReportWithData:(id)arg1 scene:(unsigned long long)arg2 extInfo:(id)arg3 channelId:(id)arg4;
- (void)doLongPressExposureReportWithPlayCount:(int)arg1 playTotalTime:(unsigned long long)arg2 data:(id)arg3 scene:(unsigned long long)arg4;
- (void)doLongPressActionReport:(id)arg1 data:(id)arg2 scene:(unsigned long long)arg3;
- (id)fetchLongPressReportInfoForData:(id)arg1 scene:(unsigned long long)arg2;
- (void)adGestureInfoReport:(unsigned int)arg1 logExt:(id)arg2 source:(unsigned int)arg3;
- (void)doQRJumpToContactReportWithContact:(id)arg1 jumpParams:(id)arg2;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (void)endRecordAdWeAppPage:(id)arg1 closeType:(unsigned long long)arg2;
- (void)startRecordAdWeAppPage:(id)arg1 appid:(id)arg2 pagePath:(id)arg3 scene:(unsigned long long)arg4 sceneNote:(id)arg5;
- (void)setRemindFriendsInfoForADExposureRequest:(id)arg1 AndItem:(id)arg2;
- (void)setRemindFriendsInfoForAdClickRequest:(id)arg1 AndItem:(id)arg2;
- (void)setRemindFriendsInfoForAdClickRequest:(id)arg1 AndItemID:(id)arg2;
- (id)getAdvertiseInfoForItem:(id)arg1;
- (void)adDataReport:(unsigned int)arg1 logExts:(id)arg2;
- (void)adDataReport:(unsigned int)arg1 logExt:(id)arg2;
- (void)handleAddataReport:(id)arg1;
- (void)endRecordAdPageChange;
- (void)webviewPageChange:(unsigned long long)arg1 currUrl:(id)arg2 referUrl:(id)arg3 errCode:(int)arg4;
- (void)initWebViewSessionId:(id)arg1;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)startRecordAdPageChange:(id)arg1 currWebView:(id)arg2 currUrl:(id)arg3;
- (void)handleADExposureResponse:(id)arg1;
- (void)handleADClickResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)reportADExposureForRequest:(id)arg1 andSnsid:(id)arg2;
- (void)reportADClickForRequest:(id)arg1 andSnsid:(id)arg2;
- (_Bool)shouldReportDynamicFeedExpExposureWithAdInfo:(id)arg1;
- (id)generateDynamicFeedExpExposureReportExposureExtInfoWithScene:(unsigned long long)arg1 extInfo:(id)arg2;
- (id)generateDynamicFeedExpExposureReportClickExtInfoWithPageWrap:(id)arg1 adInfo:(id)arg2 scene:(unsigned long long)arg3 extInfo:(id)arg4;
- (id)generateDynamicFeedExpExposureReportCommonExtInfoWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (void)dynamicFeedExpReportExposureEndAction:(id)arg1 scene:(unsigned long long)arg2;
- (void)dynamicFeedExpReportExposureBeginAction:(id)arg1 scene:(unsigned long long)arg2;
- (void)dynamicFeedExpReportClickAction:(id)arg1;
- (id)fetchFeedExpReportInfo:(id)arg1 scene:(unsigned long long)arg2;
- (id)logAdCanvasClickPost:(id)arg1 exposureScene:(long long)arg2 actionType:(long long)arg3 subClickPos:(int)arg4;
- (id)logAdCanvasClickPost:(id)arg1 exposureScene:(long long)arg2 actionType:(long long)arg3;
- (id)logAdCanvasClickPost:(id)arg1 exposureScene:(long long)arg2;
- (id)logAdExpandLogoClickPos:(id)arg1 exposureScene:(long long)arg2;
- (id)logAdPoiClickPos:(id)arg1 exposureScene:(long long)arg2;
- (void)eventADPage:(id)arg1;
- (void)exposureADDetail:(id)arg1 dataItem:(id)arg2;
- (void)exposureADFeed:(id)arg1 dataItem:(id)arg2;
- (unsigned long long)fetchVideoTotalTimeFrom:(id)arg1;
- (void)startAdResumeAppear:(id)arg1 adCell:(id)arg2;
- (void)startAdDisappear:(id)arg1 adCell:(id)arg2;
- (void)endViewStreamVideo:(id)arg1;
- (void)startViewStreamVideo:(id)arg1;
- (void)endViewVideo:(id)arg1;
- (void)startViewVideo:(id)arg1;
- (void)endPicture:(id)arg1 adType:(unsigned int)arg2;
- (void)changePictureFromIndex:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)startPicture:(id)arg1 startIndex:(unsigned int)arg2 totalNum:(unsigned int)arg3;
- (void)logSphereViewWithSphereReportInfo:(id)arg1 dataItem:(id)arg2 scene:(unsigned int)arg3;
- (void)logSphereViewInDetailWithWrapInfo:(id)arg1 dataItem:(id)arg2;
- (void)logSphereViewInTimeLineWithWrapInfo:(id)arg1 dataItem:(id)arg2;
- (void)logHeadImageH5:(id)arg1;
- (void)logADBrandProfile:(id)arg1;
- (void)logADFloatView:(id)arg1;
- (void)logADPoiH5:(id)arg1;
- (void)logADH5:(id)arg1 withUserInfo:(id)arg2 reportType:(unsigned long long)arg3;
- (void)logADH5:(id)arg1;
- (void)logADDetail:(id)arg1 dataItem:(id)arg2;
- (void)logADCommentLog:(id)arg1;
- (void)logADBodyLog:(id)arg1;
- (void)reportAllFeedsADLog;
- (void)endDisplayADComment:(id)arg1;
- (void)willDisplayADComment:(id)arg1;
- (void)endDisplayADBody:(id)arg1 dataItem:(id)arg2;
- (void)willDisplayADBody:(id)arg1;
- (void)dealloc;
- (void)onServiceMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

