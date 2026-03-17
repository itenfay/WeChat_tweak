//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMMetricsEventConfig : NSObject
{
    _Bool _enableCPUEvent;
    _Bool _enableGPUEvent;
    _Bool _enableNetworkEvent;
    unsigned int _reportLimitForCPUEvent;
    unsigned int _checkTimeForCPUEvent;
    unsigned int _reportLimitForGPUEvent;
    unsigned int _checkTimeForGPUEvent;
    unsigned int _reportLimitForNetworkEvent;
    unsigned int _checkTimeForNetworkEvent;
    unsigned long long _eventTag;
    unsigned long long _eventSubTag;
    double _reportRatio;
    double _criticalUsageForCPUEvent;
    double _criticalUsageForGPUEvent;
    double _criticalUsageForNetworkEvent;
}

@property(nonatomic) double criticalUsageForNetworkEvent; // @synthesize criticalUsageForNetworkEvent=_criticalUsageForNetworkEvent;
@property(nonatomic) unsigned int checkTimeForNetworkEvent; // @synthesize checkTimeForNetworkEvent=_checkTimeForNetworkEvent;
@property(nonatomic) unsigned int reportLimitForNetworkEvent; // @synthesize reportLimitForNetworkEvent=_reportLimitForNetworkEvent;
@property(nonatomic) _Bool enableNetworkEvent; // @synthesize enableNetworkEvent=_enableNetworkEvent;
@property(nonatomic) double criticalUsageForGPUEvent; // @synthesize criticalUsageForGPUEvent=_criticalUsageForGPUEvent;
@property(nonatomic) unsigned int checkTimeForGPUEvent; // @synthesize checkTimeForGPUEvent=_checkTimeForGPUEvent;
@property(nonatomic) unsigned int reportLimitForGPUEvent; // @synthesize reportLimitForGPUEvent=_reportLimitForGPUEvent;
@property(nonatomic) _Bool enableGPUEvent; // @synthesize enableGPUEvent=_enableGPUEvent;
@property(nonatomic) double criticalUsageForCPUEvent; // @synthesize criticalUsageForCPUEvent=_criticalUsageForCPUEvent;
@property(nonatomic) unsigned int checkTimeForCPUEvent; // @synthesize checkTimeForCPUEvent=_checkTimeForCPUEvent;
@property(nonatomic) unsigned int reportLimitForCPUEvent; // @synthesize reportLimitForCPUEvent=_reportLimitForCPUEvent;
@property(nonatomic) _Bool enableCPUEvent; // @synthesize enableCPUEvent=_enableCPUEvent;
@property(nonatomic) double reportRatio; // @synthesize reportRatio=_reportRatio;
@property(nonatomic) unsigned long long eventSubTag; // @synthesize eventSubTag=_eventSubTag;
@property(nonatomic) unsigned long long eventTag; // @synthesize eventTag=_eventTag;

@end

