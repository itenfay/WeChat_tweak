//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportWeAppQualityDetectItem
{
    _Bool _currentPageRecoverReloaded;
    _Bool _hasHtmlWeb;
    _Bool _isDisplayingPageSheet;
    _Bool _isSkyline;
    _Bool _isByteCodeEnabled;
    unsigned int _qualityIssueType;
    unsigned int _qualityIssueSubType;
    unsigned int _pageCount;
    unsigned int _whiteScreenDetectThreshold;
    unsigned int _whiteScreenColorRatio;
    unsigned int _whiteScreenDoubleCheckScene;
    unsigned int _whiteScreenDoubleCheckReason;
    unsigned int _gameRenderMode;
    unsigned int _currentWebViewResponsibleType;
    unsigned int _currentWebViewAliveFailedCount;
    unsigned int _currentServiceAliveFailedCount;
    unsigned long long _qualityIssueTimeStampInMs;
    NSString *_lastNPagePath;
    NSString *_qualityIssuePageLastError;
    NSString *_qualityIssueServiceLastError;
    NSString *_runtimeContext;
    NSString *_qualityIssueHappenPagePath;
    NSString *_openType;
    NSString *_navId;
    unsigned long long _appRouteStartTimeInMs;
    unsigned long long _initReadyReceiveTimeInMs;
    unsigned long long _recoverReloadStartTimeInMs;
    unsigned long long _recoverReloadInitReadyReceiveTimeInMs;
    unsigned long long _initReadyLastWhiteScreenDetectedTimeInMs;
    NSString *_whiteScreenHexColor;
    NSString *_modalOrToastStr;
    unsigned long long _currentWebViewLastAliveTimeStampInMs;
    unsigned long long _currentWebViewLastAliveFailedTimeStampInMs;
    unsigned long long _currentServiceLastAliveTimeStampInMs;
    unsigned long long _currentServiceLastAliveFailedTimeStampInMs;
    unsigned long long _currentWebViewInitTimeStampInMs;
    unsigned long long _currentWebViewRouteIntensionTimeStampInMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentWebViewRouteIntensionTimeStampInMs; // @synthesize currentWebViewRouteIntensionTimeStampInMs=_currentWebViewRouteIntensionTimeStampInMs;
@property(nonatomic) unsigned long long currentWebViewInitTimeStampInMs; // @synthesize currentWebViewInitTimeStampInMs=_currentWebViewInitTimeStampInMs;
@property(nonatomic) unsigned long long currentServiceLastAliveFailedTimeStampInMs; // @synthesize currentServiceLastAliveFailedTimeStampInMs=_currentServiceLastAliveFailedTimeStampInMs;
@property(nonatomic) unsigned long long currentServiceLastAliveTimeStampInMs; // @synthesize currentServiceLastAliveTimeStampInMs=_currentServiceLastAliveTimeStampInMs;
@property(nonatomic) unsigned long long currentWebViewLastAliveFailedTimeStampInMs; // @synthesize currentWebViewLastAliveFailedTimeStampInMs=_currentWebViewLastAliveFailedTimeStampInMs;
@property(nonatomic) unsigned long long currentWebViewLastAliveTimeStampInMs; // @synthesize currentWebViewLastAliveTimeStampInMs=_currentWebViewLastAliveTimeStampInMs;
@property(nonatomic) unsigned int currentServiceAliveFailedCount; // @synthesize currentServiceAliveFailedCount=_currentServiceAliveFailedCount;
@property(nonatomic) unsigned int currentWebViewAliveFailedCount; // @synthesize currentWebViewAliveFailedCount=_currentWebViewAliveFailedCount;
@property(nonatomic) unsigned int currentWebViewResponsibleType; // @synthesize currentWebViewResponsibleType=_currentWebViewResponsibleType;
@property(nonatomic) _Bool isByteCodeEnabled; // @synthesize isByteCodeEnabled=_isByteCodeEnabled;
@property(nonatomic) unsigned int gameRenderMode; // @synthesize gameRenderMode=_gameRenderMode;
@property(nonatomic) unsigned int whiteScreenDoubleCheckReason; // @synthesize whiteScreenDoubleCheckReason=_whiteScreenDoubleCheckReason;
@property(nonatomic) _Bool isSkyline; // @synthesize isSkyline=_isSkyline;
@property(nonatomic) unsigned int whiteScreenDoubleCheckScene; // @synthesize whiteScreenDoubleCheckScene=_whiteScreenDoubleCheckScene;
@property(nonatomic) _Bool isDisplayingPageSheet; // @synthesize isDisplayingPageSheet=_isDisplayingPageSheet;
@property(copy, nonatomic) NSString *modalOrToastStr; // @synthesize modalOrToastStr=_modalOrToastStr;
@property(nonatomic) unsigned int whiteScreenColorRatio; // @synthesize whiteScreenColorRatio=_whiteScreenColorRatio;
@property(copy, nonatomic) NSString *whiteScreenHexColor; // @synthesize whiteScreenHexColor=_whiteScreenHexColor;
@property(nonatomic) unsigned long long initReadyLastWhiteScreenDetectedTimeInMs; // @synthesize initReadyLastWhiteScreenDetectedTimeInMs=_initReadyLastWhiteScreenDetectedTimeInMs;
@property(nonatomic) unsigned long long recoverReloadInitReadyReceiveTimeInMs; // @synthesize recoverReloadInitReadyReceiveTimeInMs=_recoverReloadInitReadyReceiveTimeInMs;
@property(nonatomic) unsigned long long recoverReloadStartTimeInMs; // @synthesize recoverReloadStartTimeInMs=_recoverReloadStartTimeInMs;
@property(nonatomic) unsigned long long initReadyReceiveTimeInMs; // @synthesize initReadyReceiveTimeInMs=_initReadyReceiveTimeInMs;
@property(nonatomic) unsigned long long appRouteStartTimeInMs; // @synthesize appRouteStartTimeInMs=_appRouteStartTimeInMs;
@property(nonatomic) _Bool hasHtmlWeb; // @synthesize hasHtmlWeb=_hasHtmlWeb;
@property(nonatomic) _Bool currentPageRecoverReloaded; // @synthesize currentPageRecoverReloaded=_currentPageRecoverReloaded;
@property(copy, nonatomic) NSString *navId; // @synthesize navId=_navId;
@property(copy, nonatomic) NSString *openType; // @synthesize openType=_openType;
@property(nonatomic) unsigned int whiteScreenDetectThreshold; // @synthesize whiteScreenDetectThreshold=_whiteScreenDetectThreshold;
@property(copy, nonatomic) NSString *qualityIssueHappenPagePath; // @synthesize qualityIssueHappenPagePath=_qualityIssueHappenPagePath;
@property(copy, nonatomic) NSString *runtimeContext; // @synthesize runtimeContext=_runtimeContext;
@property(copy, nonatomic) NSString *qualityIssueServiceLastError; // @synthesize qualityIssueServiceLastError=_qualityIssueServiceLastError;
@property(copy, nonatomic) NSString *qualityIssuePageLastError; // @synthesize qualityIssuePageLastError=_qualityIssuePageLastError;
@property(copy, nonatomic) NSString *lastNPagePath; // @synthesize lastNPagePath=_lastNPagePath;
@property(nonatomic) unsigned int pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) unsigned long long qualityIssueTimeStampInMs; // @synthesize qualityIssueTimeStampInMs=_qualityIssueTimeStampInMs;
@property(nonatomic) unsigned int qualityIssueSubType; // @synthesize qualityIssueSubType=_qualityIssueSubType;
@property(nonatomic) unsigned int qualityIssueType; // @synthesize qualityIssueType=_qualityIssueType;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

// Remaining properties
@property(nonatomic) unsigned int engineType;

@end

