//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MAVBlurEffect
{
    float _radius;
    float _sampleFactor;
}

@property(nonatomic) float sampleFactor; // @synthesize sampleFactor=_sampleFactor;
@property(nonatomic) float radius; // @synthesize radius=_radius;
- (long long)type;

@end

