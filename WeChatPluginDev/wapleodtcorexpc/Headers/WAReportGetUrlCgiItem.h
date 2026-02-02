//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportGetUrlCgiItem
{
    _Bool _isParallel;
    _Bool _isUsed;
    unsigned int _ret;
    unsigned long long _startTimeStampInMs;
    unsigned long long _endTimeStampInMs;
    unsigned long long _costTimeInMs;
}

@property(nonatomic) _Bool isUsed; // @synthesize isUsed=_isUsed;
@property(nonatomic) _Bool isParallel; // @synthesize isParallel=_isParallel;
@property(nonatomic) unsigned int ret; // @synthesize ret=_ret;
@property(nonatomic) unsigned long long costTimeInMs; // @synthesize costTimeInMs=_costTimeInMs;
@property(nonatomic) unsigned long long endTimeStampInMs; // @synthesize endTimeStampInMs=_endTimeStampInMs;
@property(nonatomic) unsigned long long startTimeStampInMs; // @synthesize startTimeStampInMs=_startTimeStampInMs;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

