//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveHapticsEvent : NSObject
{
    unsigned long long _eventType;
    double _beginTimeOffset;
    double _duration;
    double _intensity;
    double _sharpness;
    double _attackTime;
    double _decayTime;
    double _releaseTime;
    unsigned long long _sustain;
}

+ (id)continuousEvent;
+ (id)transientEvent;
@property(nonatomic) unsigned long long sustain; // @synthesize sustain=_sustain;
@property(nonatomic) double releaseTime; // @synthesize releaseTime=_releaseTime;
@property(nonatomic) double decayTime; // @synthesize decayTime=_decayTime;
@property(nonatomic) double attackTime; // @synthesize attackTime=_attackTime;
@property(nonatomic) double sharpness; // @synthesize sharpness=_sharpness;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double beginTimeOffset; // @synthesize beginTimeOffset=_beginTimeOffset;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)coreHapticsEvent;
- (id)initWithEventType:(unsigned long long)arg1;
- (id)init;

@end

