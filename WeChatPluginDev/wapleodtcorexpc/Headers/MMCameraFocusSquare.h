//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CABasicAnimation;

@interface MMCameraFocusSquare : UIView
{
    CABasicAnimation *_selectionBlink;
    double _widthMax;
    double _widthMin;
    double _borderColorRedComponent;
    double _borderColorGreenComponent;
    double _borderColorBlueComponent;
    double _borderColorAlphaComponent;
}

- (void).cxx_destruct;
@property(nonatomic) double borderColorAlphaComponent; // @synthesize borderColorAlphaComponent=_borderColorAlphaComponent;
@property(nonatomic) double borderColorBlueComponent; // @synthesize borderColorBlueComponent=_borderColorBlueComponent;
@property(nonatomic) double borderColorGreenComponent; // @synthesize borderColorGreenComponent=_borderColorGreenComponent;
@property(nonatomic) double borderColorRedComponent; // @synthesize borderColorRedComponent=_borderColorRedComponent;
@property(nonatomic) double widthMin; // @synthesize widthMin=_widthMin;
@property(nonatomic) double widthMax; // @synthesize widthMax=_widthMax;
- (void)updatePoint:(struct CGPoint)arg1;
- (void)drawRectWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)initBorderColorAndColorComponents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

