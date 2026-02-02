//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportContactCgiItem
{
    _Bool _ret;
    _Bool _isSync;
    unsigned long long _startTimeStampInMs;
    unsigned long long _endTimeStampInMs;
    unsigned long long _costTimeInMs;
}

@property(nonatomic) _Bool isSync; // @synthesize isSync=_isSync;
@property(nonatomic) _Bool ret; // @synthesize ret=_ret;
@property(nonatomic) unsigned long long costTimeInMs; // @synthesize costTimeInMs=_costTimeInMs;
@property(nonatomic) unsigned long long endTimeStampInMs; // @synthesize endTimeStampInMs=_endTimeStampInMs;
@property(nonatomic) unsigned long long startTimeStampInMs; // @synthesize startTimeStampInMs=_startTimeStampInMs;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

