//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WSWebRecommendPerformanceMonitor
{
    NSObject<OS_dispatch_queue> *_monitorQueue;
    double _webRecommendTLInitTime;
    double _webRecommendTLUIBeginRenderTime;
    double _webRecommendTLBePushedTime;
    double _webRecommendTLSuperViewInitDuration;
    double _webRecommendTLUIRenderDuration;
    double _webRecommendTLUIRenderDurationFromInit;
    double _videoPageInitTime;
    double _videoRequestWebRecommendBeginTime;
    double _videoRequestWebRecommendEndTime;
    double _videoWaitForAllUrlEndFromInit;
    double _videoWaitForAllUrlEndFromFirstOne;
    NSMutableDictionary *_videoApiRequestBeginDic;
    NSMutableDictionary *_videoUrlRequestBeginDic;
    NSMutableDictionary *_videoDecideCellForUrlDic;
    double _videoPageRenderDuration;
    double _videoRequestWebRecommendDuration;
    double _videoFirstVideoPlayFromInitDuration;
    double _videoFirstVideoPlayFromRequestEndDuration;
    NSMutableDictionary *_videoApiRequestDurationDic;
    NSMutableDictionary *_videoUrlRequestDurationDic;
    NSMutableDictionary *_videoUrlPlayDurationDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *videoUrlPlayDurationDic; // @synthesize videoUrlPlayDurationDic=_videoUrlPlayDurationDic;
@property(retain, nonatomic) NSMutableDictionary *videoUrlRequestDurationDic; // @synthesize videoUrlRequestDurationDic=_videoUrlRequestDurationDic;
@property(retain, nonatomic) NSMutableDictionary *videoApiRequestDurationDic; // @synthesize videoApiRequestDurationDic=_videoApiRequestDurationDic;
@property(nonatomic) double videoFirstVideoPlayFromRequestEndDuration; // @synthesize videoFirstVideoPlayFromRequestEndDuration=_videoFirstVideoPlayFromRequestEndDuration;
@property(nonatomic) double videoFirstVideoPlayFromInitDuration; // @synthesize videoFirstVideoPlayFromInitDuration=_videoFirstVideoPlayFromInitDuration;
@property(nonatomic) double videoRequestWebRecommendDuration; // @synthesize videoRequestWebRecommendDuration=_videoRequestWebRecommendDuration;
@property(nonatomic) double videoPageRenderDuration; // @synthesize videoPageRenderDuration=_videoPageRenderDuration;
@property(retain, nonatomic) NSMutableDictionary *videoDecideCellForUrlDic; // @synthesize videoDecideCellForUrlDic=_videoDecideCellForUrlDic;
@property(retain, nonatomic) NSMutableDictionary *videoUrlRequestBeginDic; // @synthesize videoUrlRequestBeginDic=_videoUrlRequestBeginDic;
@property(retain, nonatomic) NSMutableDictionary *videoApiRequestBeginDic; // @synthesize videoApiRequestBeginDic=_videoApiRequestBeginDic;
@property(nonatomic) double videoWaitForAllUrlEndFromFirstOne; // @synthesize videoWaitForAllUrlEndFromFirstOne=_videoWaitForAllUrlEndFromFirstOne;
@property(nonatomic) double videoWaitForAllUrlEndFromInit; // @synthesize videoWaitForAllUrlEndFromInit=_videoWaitForAllUrlEndFromInit;
@property(nonatomic) double videoRequestWebRecommendEndTime; // @synthesize videoRequestWebRecommendEndTime=_videoRequestWebRecommendEndTime;
@property(nonatomic) double videoRequestWebRecommendBeginTime; // @synthesize videoRequestWebRecommendBeginTime=_videoRequestWebRecommendBeginTime;
@property(nonatomic) double videoPageInitTime; // @synthesize videoPageInitTime=_videoPageInitTime;
@property(nonatomic) double webRecommendTLUIRenderDurationFromInit; // @synthesize webRecommendTLUIRenderDurationFromInit=_webRecommendTLUIRenderDurationFromInit;
@property(nonatomic) double webRecommendTLUIRenderDuration; // @synthesize webRecommendTLUIRenderDuration=_webRecommendTLUIRenderDuration;
@property(nonatomic) double webRecommendTLSuperViewInitDuration; // @synthesize webRecommendTLSuperViewInitDuration=_webRecommendTLSuperViewInitDuration;
@property(nonatomic) double webRecommendTLBePushedTime; // @synthesize webRecommendTLBePushedTime=_webRecommendTLBePushedTime;
@property(nonatomic) double webRecommendTLUIBeginRenderTime; // @synthesize webRecommendTLUIBeginRenderTime=_webRecommendTLUIBeginRenderTime;
@property(nonatomic) double webRecommendTLInitTime; // @synthesize webRecommendTLInitTime=_webRecommendTLInitTime;
- (void)recordVideoFlowLeave;
- (void)recordVideoBeginPlayFromUrl:(id)arg1;
- (void)recordVideoDecideCellForUrl:(id)arg1;
- (void)recordVideoBeginDownloadFromUrl:(id)arg1;
- (void)recordVideoFlowWaitForAllUrlEnd;
- (void)recordVideoFlowFetchVideoEnd:(id)arg1 returnUrlHead:(id)arg2;
- (void)recordVideoFlowFetchVideo:(id)arg1;
- (void)recordVideoFlowRequestWebRecommendEnd;
- (void)recordVideoFlowRequestWebRecommend;
- (void)recordVideoFlowDidAppear;
- (void)recordVideoFlowInit;
- (void)recordWebRecommendTLBePoped;
- (void)recordWebRecommendTLBePushed;
- (void)recordWebRecommendTLUIReady;
- (void)recordWebRecommendTLUIWillRender;
- (void)recordWebRecommendTLUIInit;
- (void)recordWebRecommendTLInit;
- (void)sendToMonitorQueueToExcute:(CDUnknownBlockType)arg1;
- (void)devideUploadVideoDataWithSlice:(long long)arg1 requestId:(id)arg2;
- (void)uploadVideoData;
- (void)uploadTLData:(_Bool)arg1;
- (void)uploadData;
- (void)resetVideoData;
- (void)resetTLData;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

