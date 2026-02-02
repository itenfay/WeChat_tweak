//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface MMLiveGradientView : UIView
{
    struct CGAffineTransform _transform;
    CDStruct_25202d3c _gradient;
    CDStruct_25202d3c _lgradient;
    _Bool _reverse;
    _Bool _changed;
    _Bool _isLandscape;
    CAGradientLayer *_gradientLayer;
}

+ (double)bottomShadowHeight:(_Bool)arg1;
+ (double)topShadowHeight:(_Bool)arg1;
+ (id)bottomShadowWithFrame:(struct CGRect)arg1;
+ (id)topShadowWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)layoutSubviews;
- (void)doChange;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 gradient:(CDStruct_25202d3c)arg2 lGradient:(CDStruct_25202d3c)arg3 transform:(struct CGAffineTransform)arg4 reverse:(_Bool)arg5;

@end

