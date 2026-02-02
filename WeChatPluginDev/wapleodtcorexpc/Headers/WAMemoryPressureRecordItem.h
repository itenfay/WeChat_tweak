//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAMemoryPressureRecordItem
{
    unsigned long long _level;
    unsigned long long _timeStamp;
    unsigned long long _interval;
    NSString *_recordDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recordDescription; // @synthesize recordDescription=_recordDescription;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;

@end

