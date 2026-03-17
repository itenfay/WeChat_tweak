//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJVocalAdjustmentParamsModel : NSObject
{
    double _loudness;
    double _duration;
    double _defaultLoudness;
    double _minLoudness;
    double _maxLoudness;
}

+ (id)modelWithVocalAdjustmentParams:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_maxLoudness;
+ (void)PBArrayAdd_minLoudness;
+ (void)PBArrayAdd_defaultLoudness;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_loudness;
@property(nonatomic) double maxLoudness; // @synthesize maxLoudness=_maxLoudness;
@property(nonatomic) double minLoudness; // @synthesize minLoudness=_minLoudness;
@property(nonatomic) double defaultLoudness; // @synthesize defaultLoudness=_defaultLoudness;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double loudness; // @synthesize loudness=_loudness;
@property(readonly, copy) NSString *description;
- (id)toVocalAdjustmentParams;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

