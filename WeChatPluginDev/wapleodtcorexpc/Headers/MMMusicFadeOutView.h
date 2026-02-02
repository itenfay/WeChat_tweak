//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicFadeOutLayer, NSString;

@interface MMMusicFadeOutView : UIView
{
    MMMusicFadeOutLayer *_gradientMaskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicFadeOutLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
- (void)setFrame:(struct CGRect)arg1;
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

