//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface MMLiveStrokeLabel : UILabel
{
    UIColor *_strokeColorFrom;
    UIColor *_strokeColorTo;
    UIColor *_fillColor;
    double _strokeWidth;
    struct CGPoint _strokeStartPoint;
    struct CGPoint _strokeEndPoint;
}

- (void).cxx_destruct;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) struct CGPoint strokeEndPoint; // @synthesize strokeEndPoint=_strokeEndPoint;
@property(nonatomic) struct CGPoint strokeStartPoint; // @synthesize strokeStartPoint=_strokeStartPoint;
@property(retain, nonatomic) UIColor *strokeColorTo; // @synthesize strokeColorTo=_strokeColorTo;
@property(retain, nonatomic) UIColor *strokeColorFrom; // @synthesize strokeColorFrom=_strokeColorFrom;
- (void)drawRect:(struct CGRect)arg1;

@end

