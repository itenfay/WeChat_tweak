//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveHapticsDynamicParameter : NSObject
{
    unsigned long long _parameterType;
    double _effectiveTimeOffset;
    double _value;
}

+ (id)releaseTimeDynamicParameter;
+ (id)decayTimeDynamicParameter;
+ (id)attackTimeDynamicParameter;
+ (id)sharpnessDynamicParameter;
+ (id)intensityDynamicParameter;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double effectiveTimeOffset; // @synthesize effectiveTimeOffset=_effectiveTimeOffset;
@property(nonatomic) unsigned long long parameterType; // @synthesize parameterType=_parameterType;
- (id)coreHapticsDynamicParameter;
- (id)initWithParameterType:(unsigned long long)arg1;

@end

