//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer;

@interface CircleToSearchOverlayView
{
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_focusBoxLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *focusBoxLayer; // @synthesize focusBoxLayer=_focusBoxLayer;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
- (void)setFocusFrame:(struct CGRect)arg1 andAnimationDuration:(double)arg2;
@property(nonatomic) struct CGRect focusFrame;
- (void)updateFocusFrameDirectly:(struct CGRect)arg1;
- (id)maskPathForFocusFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

