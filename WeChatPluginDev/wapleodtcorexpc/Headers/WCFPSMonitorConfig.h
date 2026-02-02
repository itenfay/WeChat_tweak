//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFPSMonitorConfig
{
    _Bool _dumpStacks;
    _Bool _autoUpload;
    int _dumpInterval;
    int _dumpMaxCount;
    unsigned long long _trackingType;
    double _maxFrameInterval;
    double _maxDumpTimestamp;
    double _powFactor;
}

+ (id)defaultConfigurationForTransition;
+ (id)defaultConfigurationForScroll;
@property(nonatomic) double powFactor; // @synthesize powFactor=_powFactor;
@property(nonatomic) double maxDumpTimestamp; // @synthesize maxDumpTimestamp=_maxDumpTimestamp;
@property(nonatomic) double maxFrameInterval; // @synthesize maxFrameInterval=_maxFrameInterval;
@property(nonatomic) int dumpMaxCount; // @synthesize dumpMaxCount=_dumpMaxCount;
@property(nonatomic) int dumpInterval; // @synthesize dumpInterval=_dumpInterval;
@property(nonatomic) _Bool autoUpload; // @synthesize autoUpload=_autoUpload;
@property(nonatomic) _Bool dumpStacks; // @synthesize dumpStacks=_dumpStacks;
@property(nonatomic) unsigned long long trackingType; // @synthesize trackingType=_trackingType;

@end

