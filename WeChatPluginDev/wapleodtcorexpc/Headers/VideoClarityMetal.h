//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VideoClarityMetal : NSObject
{
    float _mode;
    float _pixelMapping[256];
    float _param_contrast_enhance_strength;
    float _param_histogram_clipping_relthresh;
    float _param_dynamic_range_extension;
    float _param_nonflat_region_thresh;
    float _param_color_saturation_decay;
    float _param_face_decay_zero;
    float _param_face_decay_one;
}

+ (void)identityMappingToFragment:(id)arg1 atIndex:(int)arg2;
- (void)uploadMappingToFragment:(id)arg1 withFlag:(int)arg2 atIndex:(int)arg3;
- (void)updateParameter:(struct TPFrame *)arg1 withFlag:(int)arg2;
- (void)analyzeBaseAddress:(char *)arg1 withRows:(unsigned long long)arg2 withCols:(unsigned long long)arg3 withStride:(unsigned long long)arg4;
- (void)dealloc;
- (id)initWithMode:(int)arg1;

@end

