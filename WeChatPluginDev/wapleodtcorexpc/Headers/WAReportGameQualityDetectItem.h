//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportGameQualityDetectItem
{
    _Bool _isDownloadCode;
    unsigned int _isPreload;
    unsigned int _webViewType;
    unsigned int _userType;
    unsigned int _runningState;
    unsigned int _issueType;
    unsigned int _issueSubType;
    unsigned int _stage;
    unsigned int _reasonType;
    unsigned int _renderMode;
    unsigned long long _issueTimestampInMs;
    unsigned long long _runtimeDuration;
}

@property(nonatomic) unsigned long long runtimeDuration; // @synthesize runtimeDuration=_runtimeDuration;
@property(nonatomic) unsigned int renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) unsigned long long issueTimestampInMs; // @synthesize issueTimestampInMs=_issueTimestampInMs;
@property(nonatomic) unsigned int reasonType; // @synthesize reasonType=_reasonType;
@property(nonatomic) unsigned int stage; // @synthesize stage=_stage;
@property(nonatomic) unsigned int issueSubType; // @synthesize issueSubType=_issueSubType;
@property(nonatomic) unsigned int issueType; // @synthesize issueType=_issueType;
@property(nonatomic) unsigned int runningState; // @synthesize runningState=_runningState;
@property(nonatomic) unsigned int userType; // @synthesize userType=_userType;
@property(nonatomic) unsigned int webViewType; // @synthesize webViewType=_webViewType;
@property(nonatomic) unsigned int isPreload; // @synthesize isPreload=_isPreload;
@property(nonatomic) _Bool isDownloadCode; // @synthesize isDownloadCode=_isDownloadCode;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

