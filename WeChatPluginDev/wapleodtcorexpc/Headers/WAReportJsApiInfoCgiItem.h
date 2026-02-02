//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportJsApiInfoCgiItem
{
    unsigned int _costTimeMs;
    unsigned int _ret;
    unsigned int _isSync;
    unsigned int _NetworkType;
    long long _startTimeStampMs;
    long long _endTimeStampMs;
}

@property(nonatomic) unsigned int NetworkType; // @synthesize NetworkType=_NetworkType;
@property(nonatomic) unsigned int isSync; // @synthesize isSync=_isSync;
@property(nonatomic) unsigned int ret; // @synthesize ret=_ret;
@property(nonatomic) long long endTimeStampMs; // @synthesize endTimeStampMs=_endTimeStampMs;
@property(nonatomic) long long startTimeStampMs; // @synthesize startTimeStampMs=_startTimeStampMs;
@property(nonatomic) unsigned int costTimeMs; // @synthesize costTimeMs=_costTimeMs;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

