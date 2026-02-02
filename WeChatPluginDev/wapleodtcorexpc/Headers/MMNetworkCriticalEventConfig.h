//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMNetworkCriticalEvent;

@interface MMNetworkCriticalEventConfig : NSObject
{
    unsigned int _checkTime;
    unsigned int _checkCount;
    unsigned int _reportLimit;
    unsigned int _reportCount;
    unsigned long long _eventTag;
    unsigned long long _eventSubTag;
    unsigned long long _criticalUsage;
    double _reportRatio;
    double _lastReportTime;
    MMNetworkCriticalEvent *_criticalEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMNetworkCriticalEvent *criticalEvent; // @synthesize criticalEvent=_criticalEvent;
@property(nonatomic) double lastReportTime; // @synthesize lastReportTime=_lastReportTime;
@property(nonatomic) double reportRatio; // @synthesize reportRatio=_reportRatio;
@property(nonatomic) unsigned long long criticalUsage; // @synthesize criticalUsage=_criticalUsage;
@property(nonatomic) unsigned int reportCount; // @synthesize reportCount=_reportCount;
@property(nonatomic) unsigned int reportLimit; // @synthesize reportLimit=_reportLimit;
@property(nonatomic) unsigned int checkCount; // @synthesize checkCount=_checkCount;
@property(nonatomic) unsigned int checkTime; // @synthesize checkTime=_checkTime;
@property(nonatomic) unsigned long long eventSubTag; // @synthesize eventSubTag=_eventSubTag;
@property(nonatomic) unsigned long long eventTag; // @synthesize eventTag=_eventTag;

@end

