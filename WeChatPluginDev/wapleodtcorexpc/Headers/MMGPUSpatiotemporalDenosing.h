//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMGPUBilateralSapatialCombineDenosing, MMGPUMotionCheck, MMGPUMultiTemporalFilterRender, MMGPUOneTextureRender, MMGPURGB2YUVRender, MMGPUSpatialRecursiveDenosing, MMGPUStrongBilateralFilter, MMGPUTemporalCacheRender;

@interface MMGPUSpatiotemporalDenosing : NSObject
{
    MMGPUBilateralSapatialCombineDenosing *bilateralSapatialCombineDenosing;
    MMGPUSpatialRecursiveDenosing *spatialRecursiveDenosing;
    MMGPUMotionCheck *motionCheck;
    MMGPUOneTextureRender *frameBufferFilter;
    MMGPUStrongBilateralFilter *strongBilateralFilter;
    MMGPURGB2YUVRender *rgb2yuvFilter;
    MMGPUMultiTemporalFilterRender *multiTemporalFilter;
    MMGPUTemporalCacheRender *temporalCacheRender;
    _Bool useSpatioFilter;
    _Bool mUseMultiTemporalFilter;
}

- (void).cxx_destruct;
- (int)processing:(int)arg1 inputRes:(struct CGSize)arg2;
- (void)setTemporalDenosingSwitch:(int)arg1;
- (void)setNoiseLevel:(float)arg1;
- (void)destroyFrameBuffer;
- (int)updateMMGPUFramebuffer:(struct CGSize)arg1;
- (void)setTemporalDenosingLevel:(int)arg1;
- (void)setBilateralSapatialFilterControl:(int)arg1;
- (void)setSpatialRecursiveFilterControl:(int)arg1;
- (void)setMotionCheckControl:(int)arg1;
- (id)init:(_Bool)arg1;
- (id)init:(_Bool)arg1 useMultiTemporalFilter:(_Bool)arg2;

@end

