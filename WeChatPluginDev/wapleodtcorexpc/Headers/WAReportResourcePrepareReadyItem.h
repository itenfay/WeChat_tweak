//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportResourcePrepareReadyItem
{
    _Bool _hasDownloadCode;
    unsigned int _pkgSize;
    unsigned int _isLaunchSync;
    unsigned int _isContactSync;
    unsigned int _launchType;
    unsigned int _isPreload;
    unsigned int _requestType;
    unsigned int _isCheckJsApiInfoSync;
    unsigned int _runningState;
    unsigned int _isCheckAppidABTestInfoSync;
    unsigned int _webviewType;
    unsigned long long _costTimeInMs;
    unsigned long long _startTimeStampInMs;
    unsigned long long _endTimeStampInMs;
    unsigned long long _launchReadyT;
    unsigned long long _packageReadyT;
    unsigned long long _checkJsApiInfoReadyT;
    unsigned long long _checkAppidABTestInfoReadyT;
}

@property(nonatomic) unsigned int webviewType; // @synthesize webviewType=_webviewType;
@property(nonatomic) unsigned long long checkAppidABTestInfoReadyT; // @synthesize checkAppidABTestInfoReadyT=_checkAppidABTestInfoReadyT;
@property(nonatomic) unsigned int isCheckAppidABTestInfoSync; // @synthesize isCheckAppidABTestInfoSync=_isCheckAppidABTestInfoSync;
@property(nonatomic) unsigned int runningState; // @synthesize runningState=_runningState;
@property(nonatomic) unsigned long long checkJsApiInfoReadyT; // @synthesize checkJsApiInfoReadyT=_checkJsApiInfoReadyT;
@property(nonatomic) unsigned int isCheckJsApiInfoSync; // @synthesize isCheckJsApiInfoSync=_isCheckJsApiInfoSync;
@property(nonatomic) unsigned int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) unsigned long long packageReadyT; // @synthesize packageReadyT=_packageReadyT;
@property(nonatomic) unsigned long long launchReadyT; // @synthesize launchReadyT=_launchReadyT;
@property(nonatomic) unsigned int isPreload; // @synthesize isPreload=_isPreload;
@property(nonatomic) unsigned int launchType; // @synthesize launchType=_launchType;
@property(nonatomic) _Bool hasDownloadCode; // @synthesize hasDownloadCode=_hasDownloadCode;
@property(nonatomic) unsigned int isContactSync; // @synthesize isContactSync=_isContactSync;
@property(nonatomic) unsigned int isLaunchSync; // @synthesize isLaunchSync=_isLaunchSync;
@property(nonatomic) unsigned int pkgSize; // @synthesize pkgSize=_pkgSize;
@property(nonatomic) unsigned long long endTimeStampInMs; // @synthesize endTimeStampInMs=_endTimeStampInMs;
@property(nonatomic) unsigned long long startTimeStampInMs; // @synthesize startTimeStampInMs=_startTimeStampInMs;
@property(nonatomic) unsigned long long costTimeInMs; // @synthesize costTimeInMs=_costTimeInMs;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

