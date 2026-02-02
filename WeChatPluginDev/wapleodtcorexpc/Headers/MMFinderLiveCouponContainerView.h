//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface MMFinderLiveCouponContainerView : UIView
{
    double _gapRadius;
    double _tailWidth;
    double _lineWidth;
    double _cornerRadius;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double tailWidth; // @synthesize tailWidth=_tailWidth;
@property(nonatomic) double gapRadius; // @synthesize gapRadius=_gapRadius;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGColor *)cgColorOf:(id)arg1;
- (_Bool)shouldUseDarkModeColor;
- (id)bezierPath;
- (void)layoutSubviews;

// Remaining properties
@property(retain, nonatomic) CAShapeLayer *layer; // @dynamic layer;

@end

