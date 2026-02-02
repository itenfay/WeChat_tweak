//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface MJSlantedLinesView : UIView
{
    _Bool _isMaskEnabled;
    UIColor *_lineColor;
    double _lineWidth;
    double _lineSpacing;
    UIColor *_maskBorderColor;
    double _maskBorderWidth;
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_maskBorderLayer;
    struct CGRect _normalizedMaskRect;
    struct CGRect _lastBounds;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *maskBorderLayer; // @synthesize maskBorderLayer=_maskBorderLayer;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) struct CGRect lastBounds; // @synthesize lastBounds=_lastBounds;
@property(nonatomic) double maskBorderWidth; // @synthesize maskBorderWidth=_maskBorderWidth;
@property(retain, nonatomic) UIColor *maskBorderColor; // @synthesize maskBorderColor=_maskBorderColor;
@property(nonatomic) struct CGRect normalizedMaskRect; // @synthesize normalizedMaskRect=_normalizedMaskRect;
@property(nonatomic) _Bool isMaskEnabled; // @synthesize isMaskEnabled=_isMaskEnabled;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void)setupLayers;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

