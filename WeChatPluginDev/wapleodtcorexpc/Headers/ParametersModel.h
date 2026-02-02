//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface ParametersModel : NSObject
{
    long long _Frequency;
    long long _Intensity;
    NSArray *_Curve;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *Curve; // @synthesize Curve=_Curve;
@property(nonatomic) long long Intensity; // @synthesize Intensity=_Intensity;
@property(nonatomic) long long Frequency; // @synthesize Frequency=_Frequency;

@end

