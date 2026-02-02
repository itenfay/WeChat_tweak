//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMCVocalAdjustmentParams : NSObject
{
    float _loudness;
    float _duration;
    float _defaultLoudness;
    float _minLoudness;
    float _maxLoudness;
}

@property(nonatomic) float maxLoudness; // @synthesize maxLoudness=_maxLoudness;
@property(nonatomic) float minLoudness; // @synthesize minLoudness=_minLoudness;
@property(nonatomic) float defaultLoudness; // @synthesize defaultLoudness=_defaultLoudness;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) float loudness; // @synthesize loudness=_loudness;
- (id)description;
- (id)init;

@end

