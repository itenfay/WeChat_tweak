//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DynamicBackgroundSystemConfig, NSMutableArray, NSString;
@protocol DynamicBackgroundSystemDelegate;

@interface WADynamicBackgroundSystem
{
    unsigned int colorStep;
    float colorRatio;
    _Bool _currentInDarkMode;
    unsigned int _framePerSecond;
    DynamicBackgroundSystemConfig *_config;
    NSMutableArray *_activeParticles;
    double _backgroundDuration;
    id <DynamicBackgroundSystemDelegate> _delegate;
}

+ (union _GLKVector4)getVector4ColorFromHex:(int)arg1 alpha:(double)arg2;
+ (id)getDefaultDynamicSystemConfigForWidth:(double)arg1 height:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool currentInDarkMode; // @synthesize currentInDarkMode=_currentInDarkMode;
@property(nonatomic) __weak id <DynamicBackgroundSystemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double backgroundDuration; // @synthesize backgroundDuration=_backgroundDuration;
@property(nonatomic) unsigned int framePerSecond; // @synthesize framePerSecond=_framePerSecond;
@property(retain, nonatomic) NSMutableArray *activeParticles; // @synthesize activeParticles=_activeParticles;
@property(retain, nonatomic) DynamicBackgroundSystemConfig *config; // @synthesize config=_config;
- (void)mm_onColorAppearanceDidChange;
- (double)uniform2NormalDistribution;
- (double)getNumberInNormalDistributionWithMean:(double)arg1 stdDev:(double)arg2;
- (union _GLKVector3)randVector3:(union _GLKVector3)arg1 end:(union _GLKVector3)arg2;
- (float)randFloat:(float)arg1 end:(float)arg2;
- (void)draw:(id)arg1;
- (union _GLKVector4)mixColorWithA:(union _GLKVector4)arg1 b:(union _GLKVector4)arg2 portion:(double)arg3;
- (union _GLKVector4)getBGColorFromStartConfig:(id)arg1 endConfig:(id)arg2 bgIndex:(unsigned int)arg3 portion:(double)arg4;
- (union _GLKVector4)getColorFromStartConfig:(id)arg1 endConfig:(id)arg2 index:(unsigned int)arg3 portion:(double)arg4;
- (void)update:(double)arg1;
- (void)resetParticle:(id)arg1;
- (void)newParticle;
- (void)fillParticles;
- (void)detectDarkMode;
- (id)initWithGLContext:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

