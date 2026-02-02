//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCFinderPlayBufferingInfo;

@interface WCFinderPlayerReport
{
    _Bool _downloadSuccessful;
    _Bool _isDownloadH265;
    _Bool _isDownloadH266;
    _Bool _isSeek;
    _Bool _isPause;
    _Bool _isPlayUnifiedURL;
    _Bool _hasRecordPrecreate;
    _Bool _isDownloadFinishBeforPlay;
    _Bool _hasFinderDataReported;
    unsigned long long _hasDownloadSize;
    NSString *_tid;
    NSMutableSet *_secondSet;
    NSMutableDictionary *_secondBufferDict;
    NSMutableSet *_timeIntervalSet;
    NSMutableDictionary *_networkStatusDict;
    unsigned long long _loopCount;
    unsigned long long _completedSizeBeforePlay;
    WCFinderPlayBufferingInfo *_bufferingInfo;
    NSMutableArray *_bufferingInfoArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *bufferingInfoArray; // @synthesize bufferingInfoArray=_bufferingInfoArray;
@property(retain, nonatomic) WCFinderPlayBufferingInfo *bufferingInfo; // @synthesize bufferingInfo=_bufferingInfo;
@property(nonatomic) _Bool hasFinderDataReported; // @synthesize hasFinderDataReported=_hasFinderDataReported;
@property(nonatomic) unsigned long long completedSizeBeforePlay; // @synthesize completedSizeBeforePlay=_completedSizeBeforePlay;
@property(nonatomic) _Bool isDownloadFinishBeforPlay; // @synthesize isDownloadFinishBeforPlay=_isDownloadFinishBeforPlay;
@property(nonatomic) _Bool hasRecordPrecreate; // @synthesize hasRecordPrecreate=_hasRecordPrecreate;
@property(nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) _Bool isPlayUnifiedURL; // @synthesize isPlayUnifiedURL=_isPlayUnifiedURL;
@property(retain, nonatomic) NSMutableDictionary *networkStatusDict; // @synthesize networkStatusDict=_networkStatusDict;
@property(retain, nonatomic) NSMutableSet *timeIntervalSet; // @synthesize timeIntervalSet=_timeIntervalSet;
@property(retain, nonatomic) NSMutableDictionary *secondBufferDict; // @synthesize secondBufferDict=_secondBufferDict;
@property(retain, nonatomic) NSMutableSet *secondSet; // @synthesize secondSet=_secondSet;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(nonatomic) _Bool isSeek; // @synthesize isSeek=_isSeek;
@property(nonatomic) _Bool isDownloadH266; // @synthesize isDownloadH266=_isDownloadH266;
@property(nonatomic) _Bool isDownloadH265; // @synthesize isDownloadH265=_isDownloadH265;
@property(nonatomic) _Bool downloadSuccessful; // @synthesize downloadSuccessful=_downloadSuccessful;
@property(nonatomic) unsigned long long hasDownloadSize; // @synthesize hasDownloadSize=_hasDownloadSize;
- (void)reportBuffering;
- (void)endLoading;
- (void)startLoading;
- (int)getPreCreateExperienceCost;
- (unsigned long long)getFirstLoadTime;
- (id)secondBufferString;
- (id)secondSetString;
- (long long)getPreloadFileSize;
- (id)replaceCommaToSemicolon:(id)arg1;
- (id)getJsonFormatStringWithDictionary:(id)arg1;
- (id)getReportJsonFormatStringWithDictionary:(id)arg1;
- (id)getAPMInfoStr;
- (id)getWaitDetailJson;
- (id)getAllBufferEvent;
- (id)getReportInfo;
- (id)finderMediaWrap;
- (void)updatePrecreateLoadInfo;
- (void)cachePrecreateData;
- (void)customReport;
- (void)resetReportFlag;

@end

