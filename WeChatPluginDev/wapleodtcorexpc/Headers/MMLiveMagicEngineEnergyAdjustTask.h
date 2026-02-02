//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class _TtC6WeChat15MagicRewardView;

@interface MMLiveMagicEngineEnergyAdjustTask : NSObject
{
    _TtC6WeChat15MagicRewardView *_magicRewardView;
    CDUnknownBlockType _onQuailtyLevelChangedCallback;
    CDUnknownBlockType _onFrameRateChangedCallback;
    long long _currQuailtyLevel;
    double _currPixelRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double currPixelRatio; // @synthesize currPixelRatio=_currPixelRatio;
@property(nonatomic) long long currQuailtyLevel; // @synthesize currQuailtyLevel=_currQuailtyLevel;
@property(copy, nonatomic) CDUnknownBlockType onFrameRateChangedCallback; // @synthesize onFrameRateChangedCallback=_onFrameRateChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType onQuailtyLevelChangedCallback; // @synthesize onQuailtyLevelChangedCallback=_onQuailtyLevelChangedCallback;
@property(nonatomic) __weak _TtC6WeChat15MagicRewardView *magicRewardView; // @synthesize magicRewardView=_magicRewardView;
- (void)onAnimationTimeoutWithView:(id)arg1;
- (void)onAnimationRepeatWithView:(id)arg1;
- (void)onAnimationEndWithView:(id)arg1;
- (void)onAnimationCancelWithView:(id)arg1;
- (void)onAnimationStartWithView:(id)arg1;
- (void)delayCheckStatsAfter:(double)arg1;
- (void)adjustFrameRate:(unsigned int)arg1;
- (void)updateQualityLevel;
- (void)adjustQuailtyLevel:(long long)arg1;
- (void)initSettingPixelRatio:(double)arg1;
- (void)initSettingQualityLevel:(long long)arg1;
- (_Bool)isActive;
- (void)configListeners;
- (id)initWithRewardView:(id)arg1;

@end

