//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ParameterCurveModel : NSObject
{
    double _Time;
    NSString *_ParameterID;
    NSArray *_ParameterCurveControlPoints;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *ParameterCurveControlPoints; // @synthesize ParameterCurveControlPoints=_ParameterCurveControlPoints;
@property(copy, nonatomic) NSString *ParameterID; // @synthesize ParameterID=_ParameterID;
@property(nonatomic) double Time; // @synthesize Time=_Time;

@end

