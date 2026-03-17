//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CAGradientLayer.h>

@class NSString;

@interface MMMusicFadeOutLayer : CAGradientLayer
{
    struct GradientStep m_gradientStep;
    _Bool m_isVertical;
}

- (void)setBounds:(struct CGRect)arg1;
- (void)updateStepValue:(double)arg1 stepValue2:(double)arg2;
- (id)initWithMidAlpha:(double)arg1 gradientStepValue:(double)arg2 stepValue2:(double)arg3 isVertical:(_Bool)arg4;
- (id)initWithGradientStepValue:(double)arg1 stepValue2:(double)arg2 isVertical:(_Bool)arg3;
- (id)initWithGradientStep:(double)arg1 step2:(double)arg2 isVertical:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

