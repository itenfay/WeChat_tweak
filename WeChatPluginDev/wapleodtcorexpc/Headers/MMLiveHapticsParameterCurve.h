//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMLiveHapticsParameterCurve : NSObject
{
    unsigned long long _parameterType;
    double _beginTimeOffset;
    NSMutableArray *_controlPoints;
}

+ (id)releaseTimeParameterCurve;
+ (id)decayTimeParameterCurve;
+ (id)attackTimeParameterCurve;
+ (id)sharpnessParameterCurve;
+ (id)intensityParameterCurve;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *controlPoints; // @synthesize controlPoints=_controlPoints;
@property(nonatomic) double beginTimeOffset; // @synthesize beginTimeOffset=_beginTimeOffset;
@property(nonatomic) unsigned long long parameterType; // @synthesize parameterType=_parameterType;
- (id)coreHapticsParameterCurve;
- (id)initWithParameterType:(unsigned long long)arg1;
- (id)init;

@end

