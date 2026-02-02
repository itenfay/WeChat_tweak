//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportLaunchCgiItem
{
    _Bool _isParallel;
    unsigned int _ret;
    unsigned int _isSync;
    unsigned int _isNormalOpen;
    unsigned long long _startTimeStampInMs;
    unsigned long long _endTimeStampInMs;
    unsigned long long _costTimeInMs;
}

@property(nonatomic) _Bool isParallel; // @synthesize isParallel=_isParallel;
@property(nonatomic) unsigned int isNormalOpen; // @synthesize isNormalOpen=_isNormalOpen;
@property(nonatomic) unsigned int isSync; // @synthesize isSync=_isSync;
@property(nonatomic) unsigned int ret; // @synthesize ret=_ret;
@property(nonatomic) unsigned long long costTimeInMs; // @synthesize costTimeInMs=_costTimeInMs;
@property(nonatomic) unsigned long long endTimeStampInMs; // @synthesize endTimeStampInMs=_endTimeStampInMs;
@property(nonatomic) unsigned long long startTimeStampInMs; // @synthesize startTimeStampInMs=_startTimeStampInMs;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

