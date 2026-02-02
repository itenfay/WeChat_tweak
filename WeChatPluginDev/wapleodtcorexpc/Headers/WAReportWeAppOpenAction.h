//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportWeAppOpenAction
{
    unsigned int _isLaunch;
    unsigned int _loadingType;
    unsigned int _runningState;
    unsigned int _userType;
    unsigned int _launchMode;
    unsigned int _coldStartMode;
    unsigned int _wxProcessColdStartTimeStamp;
    unsigned long long _costTimeInMs;
    unsigned long long _startTimeStampInMs;
    unsigned long long _endTimeStampInMs;
    NSString *_sceneData;
    NSString *_reloadReferer;
    NSString *_reloadReason;
    NSString *_shortLink;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int wxProcessColdStartTimeStamp; // @synthesize wxProcessColdStartTimeStamp=_wxProcessColdStartTimeStamp;
@property(copy, nonatomic) NSString *shortLink; // @synthesize shortLink=_shortLink;
@property(nonatomic) unsigned int coldStartMode; // @synthesize coldStartMode=_coldStartMode;
@property(nonatomic) unsigned int launchMode; // @synthesize launchMode=_launchMode;
@property(nonatomic) unsigned int userType; // @synthesize userType=_userType;
@property(copy, nonatomic) NSString *reloadReason; // @synthesize reloadReason=_reloadReason;
@property(copy, nonatomic) NSString *reloadReferer; // @synthesize reloadReferer=_reloadReferer;
@property(nonatomic) unsigned int runningState; // @synthesize runningState=_runningState;
@property(copy, nonatomic) NSString *sceneData; // @synthesize sceneData=_sceneData;
@property(nonatomic) unsigned int loadingType; // @synthesize loadingType=_loadingType;
@property(nonatomic) unsigned int isLaunch; // @synthesize isLaunch=_isLaunch;
@property(nonatomic) unsigned long long endTimeStampInMs; // @synthesize endTimeStampInMs=_endTimeStampInMs;
@property(nonatomic) unsigned long long startTimeStampInMs; // @synthesize startTimeStampInMs=_startTimeStampInMs;
@property(nonatomic) unsigned long long costTimeInMs; // @synthesize costTimeInMs=_costTimeInMs;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

