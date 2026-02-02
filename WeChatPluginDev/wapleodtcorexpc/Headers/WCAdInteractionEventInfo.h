//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCAdInteractionDeviceMotionEventHandlePlugin;

@interface WCAdInteractionEventInfo : NSObject
{
    unsigned long long _eventType;
    unsigned long long _eventSubType;
    NSArray *_actionIds;
    double _triggerTime;
    NSString *_determinationId;
    WCAdInteractionDeviceMotionEventHandlePlugin *_deviceMotionPlugin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdInteractionDeviceMotionEventHandlePlugin *deviceMotionPlugin; // @synthesize deviceMotionPlugin=_deviceMotionPlugin;
@property(retain, nonatomic) NSString *determinationId; // @synthesize determinationId=_determinationId;
@property(nonatomic) double triggerTime; // @synthesize triggerTime=_triggerTime;
@property(retain, nonatomic) NSArray *actionIds; // @synthesize actionIds=_actionIds;
@property(nonatomic) unsigned long long eventSubType; // @synthesize eventSubType=_eventSubType;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

