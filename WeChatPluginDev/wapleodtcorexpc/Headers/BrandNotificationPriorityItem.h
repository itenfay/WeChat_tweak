//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandNotificationPriorityItem : NSObject
{
    _Bool _priorityShowSwitch;
    unsigned int _priorityShowExposureTimeInMs;
    unsigned int _priorityShowExposureCount;
    unsigned int _priorityShowWithinUnreadCount;
}

@property(nonatomic) unsigned int priorityShowWithinUnreadCount; // @synthesize priorityShowWithinUnreadCount=_priorityShowWithinUnreadCount;
@property(nonatomic) unsigned int priorityShowExposureCount; // @synthesize priorityShowExposureCount=_priorityShowExposureCount;
@property(nonatomic) unsigned int priorityShowExposureTimeInMs; // @synthesize priorityShowExposureTimeInMs=_priorityShowExposureTimeInMs;
@property(nonatomic) _Bool priorityShowSwitch; // @synthesize priorityShowSwitch=_priorityShowSwitch;
- (_Bool)checkShouldShowPriorityBrandNotificationMsgWithExposureTimeInMs:(unsigned int)arg1 andExposureCount:(unsigned int)arg2 andUnreadCount:(unsigned int)arg3;

@end

