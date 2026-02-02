//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface XMMGPUClarityPreProcess : NSObject
{
    float _mode;
    float _pixel_mapping[256];
    float _param_contrast_enhance_strength;
    float _param_histogram_clipping_relthresh;
    float _param_dynamic_range_extension;
    float _param_nonflat_region_thresh;
    float _param_color_saturation_decay;
    float _param_face_decay_zero;
    float _param_face_decay_one;
}

- (float *)getPixelMapping;
- (void)analyzePixelBuffer:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 stride:(unsigned long long)arg4;
- (void)analyzePixelBuffer:(struct __CVBuffer *)arg1;
- (void)reset;
- (id)initWithMode:(int)arg1;

@end

