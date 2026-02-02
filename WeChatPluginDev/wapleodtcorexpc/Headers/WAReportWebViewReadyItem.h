//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportWebViewReadyItem
{
    _Bool _isPreloadPageFrame;
    _Bool _isFirstPageRenderingCacheAccepted;
    _Bool _exptUseByteCode;
    unsigned int _costTimeInMs;
    unsigned int _preloadType;
    unsigned int _runningState;
    unsigned int _webViewType;
    unsigned int _codeCacheFormatVersion;
    unsigned long long _startTimeInMs;
    unsigned long long _endTimeInMs;
    NSString *_publibFileNameListUseCodeCache;
    NSString *_usrFileNameListUseCodeCache;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int codeCacheFormatVersion; // @synthesize codeCacheFormatVersion=_codeCacheFormatVersion;
@property(copy, nonatomic) NSString *usrFileNameListUseCodeCache; // @synthesize usrFileNameListUseCodeCache=_usrFileNameListUseCodeCache;
@property(copy, nonatomic) NSString *publibFileNameListUseCodeCache; // @synthesize publibFileNameListUseCodeCache=_publibFileNameListUseCodeCache;
@property(nonatomic) unsigned int webViewType; // @synthesize webViewType=_webViewType;
@property(nonatomic) _Bool exptUseByteCode; // @synthesize exptUseByteCode=_exptUseByteCode;
@property(nonatomic) unsigned int runningState; // @synthesize runningState=_runningState;
@property(nonatomic) _Bool isFirstPageRenderingCacheAccepted; // @synthesize isFirstPageRenderingCacheAccepted=_isFirstPageRenderingCacheAccepted;
@property(nonatomic) _Bool isPreloadPageFrame; // @synthesize isPreloadPageFrame=_isPreloadPageFrame;
@property(nonatomic) unsigned int preloadType; // @synthesize preloadType=_preloadType;
@property(nonatomic) unsigned long long endTimeInMs; // @synthesize endTimeInMs=_endTimeInMs;
@property(nonatomic) unsigned long long startTimeInMs; // @synthesize startTimeInMs=_startTimeInMs;
@property(nonatomic) unsigned int costTimeInMs; // @synthesize costTimeInMs=_costTimeInMs;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

// Remaining properties
@property(nonatomic) unsigned int engineType;

@end

