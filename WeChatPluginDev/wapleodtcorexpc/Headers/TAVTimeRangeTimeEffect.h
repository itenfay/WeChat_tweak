//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TAVTimeRangeTimeEffect : NSObject
{
    NSArray *_effects;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *effects; // @synthesize effects=_effects;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (CDStruct_1b6d18a9)additionalDurationAfterApplyEffect;
- (id)applyTimeEffectToClips:(id)arg1;
- (void)addLoopEffectWithLoopCount:(unsigned long long)arg1;
- (void)addReverseEffect;
- (void)addSpeedEffectWithSpeed:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

