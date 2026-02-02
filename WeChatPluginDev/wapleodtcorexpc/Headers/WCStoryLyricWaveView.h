//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, UIColor;

@interface WCStoryLyricWaveView
{
    NSArray *_animationLayers;
    UIColor *_waveColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *waveColor; // @synthesize waveColor=_waveColor;
@property(retain, nonatomic) NSArray *animationLayers; // @synthesize animationLayers=_animationLayers;
- (id)createDurationArray;
- (id)createFrameValue;
- (void)setupAnimationLayer:(id)arg1 withIndex:(unsigned long long)arg2 userForCompose:(_Bool)arg3;
- (id)exportAnimatedLayer;
- (void)stopAnimation;
- (void)addAnimationInLayerArray:(id)arg1 usedForCompose:(_Bool)arg2;
- (void)startAnimation;
- (void)setupView;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

