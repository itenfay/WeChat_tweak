//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RingToneDetail;

@interface RingToneRecommendReporter_23604
{
    _Bool _reportedExposed;
    unsigned int _previewTimeMs;
    unsigned int _chooseTimeMs;
    NSString *_feedID;
    unsigned long long _feedType;
    unsigned long long _exposureCount;
    unsigned long long _evnetCode;
    unsigned long long _scene;
    NSString *_searchKeyword;
    unsigned long long _usageRange;
    NSString *_friendName;
    NSString *_sessionID;
    unsigned long long _setType;
    unsigned long long _channel;
    unsigned long long _vibrateType;
    unsigned long long _recommendReasonType;
    unsigned long long _cmdID;
    unsigned long long _lastExposureCount;
    NSString *_searchID;
    NSString *_requestID;
    unsigned long long _isVedioStream;
    NSString *_extrainfo;
    unsigned long long _pageKeepTimeStamp;
    unsigned long long _startPlayRingTimeStamp;
    RingToneDetail *_playingRingTone;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingToneDetail *playingRingTone; // @synthesize playingRingTone=_playingRingTone;
@property(nonatomic) unsigned long long startPlayRingTimeStamp; // @synthesize startPlayRingTimeStamp=_startPlayRingTimeStamp;
@property(nonatomic) unsigned long long pageKeepTimeStamp; // @synthesize pageKeepTimeStamp=_pageKeepTimeStamp;
@property(copy, nonatomic) NSString *extrainfo; // @synthesize extrainfo=_extrainfo;
@property(nonatomic) unsigned long long isVedioStream; // @synthesize isVedioStream=_isVedioStream;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) _Bool reportedExposed; // @synthesize reportedExposed=_reportedExposed;
@property(nonatomic) unsigned long long lastExposureCount; // @synthesize lastExposureCount=_lastExposureCount;
@property(nonatomic) unsigned long long cmdID; // @synthesize cmdID=_cmdID;
@property(nonatomic) unsigned long long recommendReasonType; // @synthesize recommendReasonType=_recommendReasonType;
@property(nonatomic) unsigned long long vibrateType; // @synthesize vibrateType=_vibrateType;
@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned long long setType; // @synthesize setType=_setType;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *friendName; // @synthesize friendName=_friendName;
@property(nonatomic) unsigned long long usageRange; // @synthesize usageRange=_usageRange;
@property(nonatomic) unsigned int chooseTimeMs; // @synthesize chooseTimeMs=_chooseTimeMs;
@property(nonatomic) unsigned int previewTimeMs; // @synthesize previewTimeMs=_previewTimeMs;
@property(copy, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long evnetCode; // @synthesize evnetCode=_evnetCode;
@property(nonatomic) unsigned long long exposureCount; // @synthesize exposureCount=_exposureCount;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void)reportStopPlayRing;
- (void)reportEventCodeOnly:(unsigned long long)arg1 reset:(_Bool)arg2;
- (void)reportPlayRing:(id)arg1 eventType:(unsigned long long)arg2;
- (void)reportExposedFirstRing:(id)arg1 exposedCount:(unsigned int)arg2 eventType:(unsigned long long)arg3;
- (void)startPageKeepTimer;
- (void)doReportImmediately;
- (void)doReport;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;

@end

