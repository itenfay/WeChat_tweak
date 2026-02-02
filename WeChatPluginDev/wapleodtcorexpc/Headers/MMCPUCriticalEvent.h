//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MMCPUCriticalEvent : NSObject
{
    float _averageUsage;
    double _beginTime;
    double _endTime;
    unsigned long long _eventTag;
    unsigned long long _eventSubTag;
    NSDictionary *_eventInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) unsigned long long eventSubTag; // @synthesize eventSubTag=_eventSubTag;
@property(nonatomic) unsigned long long eventTag; // @synthesize eventTag=_eventTag;
@property(nonatomic) float averageUsage; // @synthesize averageUsage=_averageUsage;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;

@end

