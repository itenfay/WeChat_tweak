//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveEnergyAdjuster, MMLiveEnergyRule, MMLiveTask, NSArray, NSRecursiveLock;
@protocol MMLiveEnergyControllerDelegate;

@interface MMLiveEnergyController : NSObject
{
    NSArray *_lowPowerModeRules;
    NSRecursiveLock *_lock;
    long long _energyMode;
    MMLiveEnergyRule *_hitRule;
    MMLiveEnergyAdjuster *_adjuster;
    MMLiveTask<MMLiveEnergyControllerDelegate> *_liveTaskDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak MMLiveTask<MMLiveEnergyControllerDelegate> *liveTaskDelegate; // @synthesize liveTaskDelegate=_liveTaskDelegate;
- (void)BlurPowerMode_evaluateAdjustParamLevel:(int *)arg1;
- (void)Gift_evaluateFullScreenGiftDisplaySpacingTimeInterval:(double *)arg1;
- (void)Gift_evaluatePAGFrameRate:(float *)arg1;
- (void)_WeEffect_evaluteOcclusionSegmentSettings:(void *)arg1 withHitRule:(id)arg2;
- (void)_WeEffect_evaluteFaceAlignmentSettings:(void *)arg1 withHitRule:(id)arg2;
- (void)WeEffect_evaluteSettings:(void *)arg1;
- (void)VideoEncode_evaluateVideoBitrate:(int *)arg1;
- (void)VideoEncode_evaluateEncodeResolution:(long long *)arg1;
- (void)VideoEncode_evaluateEncodeFPS:(int *)arg1;
- (void)VideoEncode_evaluateEncodeParams:(id)arg1;
- (void)CameraCapture_evaluateCaptureResolution:(long long *)arg1;
- (void)CameraCapture_evaluateCaptureFPS:(int *)arg1;
- (id)_getHitRuleForEvaluating;
- (void)_changeEnergyModeWithRule:(id)arg1;
- (void)checkMetricsInfo:(id)arg1;
@property(readonly, nonatomic) MMLiveEnergyRule *hitRule;
@property(readonly, nonatomic) long long energyMode;
@property(readonly, nonatomic) _Bool lowPowerModeAvailable;
- (void)dealloc;
- (id)initWithLiveTaskDelegate:(id)arg1;

@end

