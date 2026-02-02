//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMGPUClarityFilter
{
    int uniform_location_clarity_flag;
    int uniform_location_pixel_mapping;
    int uniform_location_saturation_decay;
    int uniform_location_face_decay_zero;
    int uniform_location_face_decay_one;
}

- (unsigned int)process:(int)arg1 inputRes:(struct CGSize)arg2;
- (void)setFaceDecayZero:(float)arg1 One:(float)arg2;
- (void)setSaturationDecay:(float)arg1;
- (void)setPixelMapping:(float *)arg1;
- (void)setClarityFlag:(int)arg1;
- (id)initWithMode:(int)arg1;

@end

