//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCAdEndCoverExposureReportModel
{
    int _type;
    unsigned long long _startTimestamp;
    unsigned long long _exposureDuration;
}

@property(nonatomic) unsigned long long exposureDuration; // @synthesize exposureDuration=_exposureDuration;
@property(nonatomic) unsigned long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) int type; // @synthesize type=_type;

@end

