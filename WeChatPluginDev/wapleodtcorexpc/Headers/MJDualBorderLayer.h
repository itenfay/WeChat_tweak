//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@interface MJDualBorderLayer : CALayer
{
    CALayer *_innerBorderLayer;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGColor *innerBorderColor;
@property(nonatomic) struct CGColor *outerBorderColor;
@property(nonatomic) double innerBorderWidth;
@property(nonatomic) double outerBorderWidth;
- (void)setCornerRadius:(double)arg1;
- (void)setFrame:(struct CGRect)arg1 animationDuration:(double)arg2 timingFunction:(id)arg3;
- (id)init;

@end

