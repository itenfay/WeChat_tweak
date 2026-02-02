//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportInitReadyItem
{
    _Bool _isDownloadCode;
    _Bool _isPatch;
    _Bool _isPreloadPageFrame;
    _Bool _isSplitCodeLib;
    _Bool _isFirstPageRenderingCacheAccepted;
    _Bool _canShowLoadingAdvert;
    _Bool _exptUseByteCode;
    unsigned int _costTimeInMs;
    unsigned int _preloadType;
    unsigned int _showAd;
    unsigned int _runningState;
    unsigned int _webviewType;
    unsigned int _runtimeNo;
    unsigned int _lazyCodeLoading;
    unsigned int _codeCacheFormatVersion;
    unsigned int _wxProcessColdStartTimeStamp;
    unsigned int _currentOpenedTaskIndex;
    unsigned int _splashAdClientState;
    unsigned long long _startTimeInMs;
    unsigned long long _endTimeInMs;
    unsigned long long _loadingInEntTInMs;
    NSString *_publibFileNameListUseCodeCache;
    NSString *_usrFileNameListUseCodeCache;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int splashAdClientState; // @synthesize splashAdClientState=_splashAdClientState;
@property(nonatomic) unsigned int currentOpenedTaskIndex; // @synthesize currentOpenedTaskIndex=_currentOpenedTaskIndex;
@property(nonatomic) unsigned int wxProcessColdStartTimeStamp; // @synthesize wxProcessColdStartTimeStamp=_wxProcessColdStartTimeStamp;
@property(nonatomic) unsigned int codeCacheFormatVersion; // @synthesize codeCacheFormatVersion=_codeCacheFormatVersion;
@property(copy, nonatomic) NSString *usrFileNameListUseCodeCache; // @synthesize usrFileNameListUseCodeCache=_usrFileNameListUseCodeCache;
@property(copy, nonatomic) NSString *publibFileNameListUseCodeCache; // @synthesize publibFileNameListUseCodeCache=_publibFileNameListUseCodeCache;
@property(nonatomic) _Bool exptUseByteCode; // @synthesize exptUseByteCode=_exptUseByteCode;
@property(nonatomic) unsigned int lazyCodeLoading; // @synthesize lazyCodeLoading=_lazyCodeLoading;
@property(nonatomic) unsigned int runtimeNo; // @synthesize runtimeNo=_runtimeNo;
@property(nonatomic) unsigned int webviewType; // @synthesize webviewType=_webviewType;
@property(nonatomic) unsigned int runningState; // @synthesize runningState=_runningState;
@property(nonatomic) unsigned long long loadingInEntTInMs; // @synthesize loadingInEntTInMs=_loadingInEntTInMs;
@property(nonatomic) _Bool canShowLoadingAdvert; // @synthesize canShowLoadingAdvert=_canShowLoadingAdvert;
@property(nonatomic) unsigned int showAd; // @synthesize showAd=_showAd;
@property(nonatomic) _Bool isFirstPageRenderingCacheAccepted; // @synthesize isFirstPageRenderingCacheAccepted=_isFirstPageRenderingCacheAccepted;
@property(nonatomic) _Bool isSplitCodeLib; // @synthesize isSplitCodeLib=_isSplitCodeLib;
@property(nonatomic) _Bool isPreloadPageFrame; // @synthesize isPreloadPageFrame=_isPreloadPageFrame;
@property(nonatomic) unsigned int preloadType; // @synthesize preloadType=_preloadType;
@property(nonatomic) _Bool isPatch; // @synthesize isPatch=_isPatch;
@property(nonatomic) _Bool isDownloadCode; // @synthesize isDownloadCode=_isDownloadCode;
@property(nonatomic) unsigned long long endTimeInMs; // @synthesize endTimeInMs=_endTimeInMs;
@property(nonatomic) unsigned long long startTimeInMs; // @synthesize startTimeInMs=_startTimeInMs;
@property(nonatomic) unsigned int costTimeInMs; // @synthesize costTimeInMs=_costTimeInMs;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

// Remaining properties
@property(nonatomic) unsigned int engineType;

@end

