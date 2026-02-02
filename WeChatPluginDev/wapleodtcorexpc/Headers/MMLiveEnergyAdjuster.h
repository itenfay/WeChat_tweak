//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMLiveEnergyAdjuster : NSObject
{
    NSArray *_cameraCaptureFPSLevels;
    NSArray *_cameraCaptureResolutionLevels;
    NSArray *_videoEncodeFPSLevels;
    NSArray *_videoEncodeResolutionLevels;
    NSArray *_videoEncodeBitrateLevels;
    NSArray *_WeEffect_faceAlignmentSettingsLevels;
    NSArray *_WeEffect_faceAlignmentItemLevels;
    NSArray *_WeEffect_occlusionSegmentItemLevels;
    NSArray *_faceSkinBeautyLevels;
    NSArray *_faceShapeBeautyLevels;
    NSArray *_PAGFrameRateLevels;
    NSArray *_blurPowerModeAdjustParamLevels;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *blurPowerModeAdjustParamLevels; // @synthesize blurPowerModeAdjustParamLevels=_blurPowerModeAdjustParamLevels;
@property(readonly, copy, nonatomic) NSArray *PAGFrameRateLevels; // @synthesize PAGFrameRateLevels=_PAGFrameRateLevels;
@property(readonly, copy, nonatomic) NSArray *faceShapeBeautyLevels; // @synthesize faceShapeBeautyLevels=_faceShapeBeautyLevels;
@property(readonly, copy, nonatomic) NSArray *faceSkinBeautyLevels; // @synthesize faceSkinBeautyLevels=_faceSkinBeautyLevels;
@property(readonly, copy, nonatomic) NSArray *WeEffect_occlusionSegmentItemLevels; // @synthesize WeEffect_occlusionSegmentItemLevels=_WeEffect_occlusionSegmentItemLevels;
@property(readonly, copy, nonatomic) NSArray *WeEffect_faceAlignmentItemLevels; // @synthesize WeEffect_faceAlignmentItemLevels=_WeEffect_faceAlignmentItemLevels;
@property(readonly, copy, nonatomic) NSArray *WeEffect_faceAlignmentSettingsLevels; // @synthesize WeEffect_faceAlignmentSettingsLevels=_WeEffect_faceAlignmentSettingsLevels;
@property(readonly, copy, nonatomic) NSArray *videoEncodeBitrateLevels; // @synthesize videoEncodeBitrateLevels=_videoEncodeBitrateLevels;
@property(readonly, copy, nonatomic) NSArray *videoEncodeResolutionLevels; // @synthesize videoEncodeResolutionLevels=_videoEncodeResolutionLevels;
@property(readonly, copy, nonatomic) NSArray *videoEncodeFPSLevels; // @synthesize videoEncodeFPSLevels=_videoEncodeFPSLevels;
@property(readonly, copy, nonatomic) NSArray *cameraCaptureResolutionLevels; // @synthesize cameraCaptureResolutionLevels=_cameraCaptureResolutionLevels;
@property(readonly, copy, nonatomic) NSArray *cameraCaptureFPSLevels; // @synthesize cameraCaptureFPSLevels=_cameraCaptureFPSLevels;
- (int)adjustBlurPowerModeAdjustParamLevel:(int)arg1 reducedLevel:(long long)arg2;
- (int)adjustPAGFrameRate:(int)arg1 reducedLevel:(long long)arg2;
- (long long)adjustFaceShapeBeautyLevel:(long long)arg1 reducedLevel:(long long)arg2;
- (long long)adjustFaceSkinBeautyLevel:(long long)arg1 reducedLevel:(long long)arg2;
- (long long)WeEffect_adjustOcclusionSegmentItemLevel:(long long)arg1 reducedLevel:(long long)arg2;
- (long long)WeEffect_adjustFaceAlignmentItemLevel:(long long)arg1 reducedLevel:(long long)arg2;
- (long long)WeEffect_adjustFaceAlignmentSettingsLevel:(long long)arg1 reducedLevel:(long long)arg2;
- (int)adjustVideoEncodeBitrate:(int)arg1 reducedLevel:(long long)arg2;
- (long long)adjustVideoEncodeResolution:(long long)arg1 reducedLevel:(long long)arg2;
- (int)adjustVideoEncodeFPS:(int)arg1 reducedLevel:(long long)arg2;
- (long long)adjustCameraCaptureResolution:(long long)arg1 reducedLevel:(long long)arg2;
- (int)adjustCameraCaptureFPS:(int)arg1 reducedLevel:(long long)arg2;
- (_Bool)_adjustIntegerValue:(long long)arg1 toIntegerValue:(long long *)arg2 withRangeLevels:(id)arg3 reducedLevel:(long long)arg4;
- (_Bool)_adjustIntegerValue:(long long)arg1 toIntegerValue:(long long *)arg2 withMatchedLevels:(id)arg3 reducedLevel:(long long)arg4;
- (id)init;

@end

