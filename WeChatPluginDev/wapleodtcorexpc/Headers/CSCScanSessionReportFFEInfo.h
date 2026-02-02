//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface CSCScanSessionReportFFEInfo
{
    struct Log engineLog;
    long long _tentativeCount;
    long long _maxScore2ConfirmedCount;
    long long _tentative2ConfirmedCount;
    long long _tentative2DeletedCount;
    long long _confirmed2MissCount;
    long long _miss2DeletedCount;
    long long _miss2ConfirmedCount;
    long long _doudiCount;
    double _detectAvgValue;
    double _detectMaxValue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double detectMaxValue; // @synthesize detectMaxValue=_detectMaxValue;
@property(nonatomic) double detectAvgValue; // @synthesize detectAvgValue=_detectAvgValue;
@property(nonatomic) long long doudiCount; // @synthesize doudiCount=_doudiCount;
@property(nonatomic) long long miss2ConfirmedCount; // @synthesize miss2ConfirmedCount=_miss2ConfirmedCount;
@property(nonatomic) long long miss2DeletedCount; // @synthesize miss2DeletedCount=_miss2DeletedCount;
@property(nonatomic) long long confirmed2MissCount; // @synthesize confirmed2MissCount=_confirmed2MissCount;
@property(nonatomic) long long tentative2DeletedCount; // @synthesize tentative2DeletedCount=_tentative2DeletedCount;
@property(nonatomic) long long tentative2ConfirmedCount; // @synthesize tentative2ConfirmedCount=_tentative2ConfirmedCount;
@property(nonatomic) long long maxScore2ConfirmedCount; // @synthesize maxScore2ConfirmedCount=_maxScore2ConfirmedCount;
@property(nonatomic) long long tentativeCount; // @synthesize tentativeCount=_tentativeCount;
- (struct Log)engineLogInfo;
- (void)setEngineLogInfo:(struct Log)arg1;

@end

