//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CurveModel : NSObject
{
    float _Intensity;
    long long _Time;
    long long _Frequency;
}

@property(nonatomic) long long Frequency; // @synthesize Frequency=_Frequency;
@property(nonatomic) float Intensity; // @synthesize Intensity=_Intensity;
@property(nonatomic) long long Time; // @synthesize Time=_Time;

@end

