//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EffectEventModel : NSObject
{
    double _Time;
    NSString *_EventType;
    double _EventDuration;
    NSArray *_EventParameters;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *EventParameters; // @synthesize EventParameters=_EventParameters;
@property(nonatomic) double EventDuration; // @synthesize EventDuration=_EventDuration;
@property(copy, nonatomic) NSString *EventType; // @synthesize EventType=_EventType;
@property(nonatomic) double Time; // @synthesize Time=_Time;

@end

