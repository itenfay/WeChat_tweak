//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MMNetworkCriticalEvent : NSObject
{
    int _type;
    double _beginTime;
    double _endTime;
    unsigned long long _totalWwanUsageInWifi;
    unsigned long long _totalWwanUsageInWwan;
    unsigned long long _eventTag;
    unsigned long long _eventSubTag;
    NSDictionary *_eventInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) unsigned long long eventSubTag; // @synthesize eventSubTag=_eventSubTag;
@property(nonatomic) unsigned long long eventTag; // @synthesize eventTag=_eventTag;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long totalWwanUsageInWwan; // @synthesize totalWwanUsageInWwan=_totalWwanUsageInWwan;
@property(nonatomic) unsigned long long totalWwanUsageInWifi; // @synthesize totalWwanUsageInWifi=_totalWwanUsageInWifi;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;

@end

