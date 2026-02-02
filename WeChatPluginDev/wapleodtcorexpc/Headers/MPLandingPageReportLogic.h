//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MPLandingPageReportLogicDelegate;

@interface MPLandingPageReportLogic
{
    unsigned int _itemShowType;
    unsigned int _sessionId;
    unsigned int _landingPageType;
    unsigned int _videoWidth;
    unsigned int _videoHeight;
    unsigned int _mid;
    unsigned int _idx;
    unsigned int _scene;
    unsigned int _subscene;
    unsigned int _enterId;
    unsigned int _webPageId;
    NSString *_bizUsrName;
    NSString *_channelSessionId;
    unsigned long long _videoDuration;
    unsigned long long _enterTimeInMs;
    unsigned long long _exitTimeInMs;
    unsigned long long _bufferingStartTimeInMs;
    id <MPLandingPageReportLogicDelegate> _delegate;
    NSString *_videoId;
    NSString *_url;
    NSMutableArray *_performanceReportDataArr;
    NSMutableDictionary *_performanceReportCtxDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *performanceReportCtxDict; // @synthesize performanceReportCtxDict=_performanceReportCtxDict;
@property(retain, nonatomic) NSMutableArray *performanceReportDataArr; // @synthesize performanceReportDataArr=_performanceReportDataArr;
@property(nonatomic) unsigned int webPageId; // @synthesize webPageId=_webPageId;
@property(nonatomic) unsigned int enterId; // @synthesize enterId=_enterId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) unsigned int subscene; // @synthesize subscene=_subscene;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <MPLandingPageReportLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long bufferingStartTimeInMs; // @synthesize bufferingStartTimeInMs=_bufferingStartTimeInMs;
@property(nonatomic) unsigned int idx; // @synthesize idx=_idx;
@property(nonatomic) unsigned int mid; // @synthesize mid=_mid;
@property(nonatomic) unsigned long long exitTimeInMs; // @synthesize exitTimeInMs=_exitTimeInMs;
@property(nonatomic) unsigned long long enterTimeInMs; // @synthesize enterTimeInMs=_enterTimeInMs;
@property(nonatomic) unsigned int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) unsigned int videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) unsigned int landingPageType; // @synthesize landingPageType=_landingPageType;
@property(copy, nonatomic) NSString *channelSessionId; // @synthesize channelSessionId=_channelSessionId;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(copy, nonatomic) NSString *bizUsrName; // @synthesize bizUsrName=_bizUsrName;
- (unsigned int)isFans;
- (id)genDefaultKvReportItem17149;
- (void)reportClickDefinitionBtnWithVideoCurrTimeInSecond:(double)arg1 definitionOptionsStr:(id)arg2;
- (void)reportClickRightTopMoreBtn:(_Bool)arg1 videoCurrTimeInSecond:(double)arg2;
- (void)reportVideoPagePlayBufferEvent:(unsigned int)arg1 bufferTimeInMs:(unsigned long long)arg2 currPlayedTimeMs:(unsigned long long)arg3 isFullScreen:(_Bool)arg4;
- (void)onVideoEndBuffering:(_Bool)arg1 currPlayedTimeMs:(unsigned long long)arg2 isFullScreen:(_Bool)arg3;
- (void)onVideoBeginBuffering:(_Bool)arg1;
- (void)reportVideoPageCommonEvent:(unsigned int)arg1 currPlayedTimeMs:(unsigned long long)arg2 isFullScreen:(_Bool)arg3;
- (void)reportPlayErrEventWithErrCode:(int)arg1 isFullScreen:(_Bool)arg2 currPlayedTimeMs:(unsigned long long)arg3;
- (void)reportExitVideoPageEvent:(unsigned long long)arg1 playRealTime:(unsigned long long)arg2 isFullScreen:(_Bool)arg3;
- (void)reportEnterVideoPageEvent;
- (id)getNetWorkStrType;
- (int)getNetWorkIntType;
- (_Bool)checkCGIBaseRespSuccess:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportVideoPagePlayEvent:(unsigned int)arg1;
- (unsigned int)convertItemShowTypeTo10380Type;
- (void)reportShareAction:(unsigned int)arg1 extInfo:(id)arg2;
- (void)reportShareAction:(unsigned int)arg1;
- (void)report10945;
- (void)onLeaveLandingPage;
- (void)onEnterLandingPage;
- (void)updateLandingPageType:(unsigned int)arg1;
- (void)updateSessionId:(unsigned int)arg1;
- (void)updateVideoDuration:(float)arg1;
- (void)updateOpenParam:(id)arg1;
- (id)initWithOpenParam:(id)arg1 enterId:(unsigned int)arg2 sessionId:(unsigned int)arg3 delegate:(id)arg4;
- (void)dealloc;
- (id)convertDict2ReportItemArr:(id)arg1;
- (id)dataReportWithDict:(id)arg1;
- (void)reportPerformanceEventEnd:(unsigned long long)arg1;
- (void)reportPerformanceEventBegin:(unsigned long long)arg1;
- (void)reportPerformanceEventEnd:(unsigned long long)arg1 extraDict:(id)arg2;
- (void)reportPerformanceEventBegin:(unsigned long long)arg1 extraDict:(id)arg2;
- (void)reportSimplePerformanceEvent:(unsigned long long)arg1 extraDict:(id)arg2;
- (void)reportSimplePerformanceEvent:(unsigned long long)arg1;
- (void)updateWebPageId:(unsigned int)arg1;

@end

