//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, NSArray, UIColor;

@interface MJDashLine
{
    _Bool _isVertical;
}

+ (id)horizontalLine;
+ (id)verticalLine;
+ (Class)layerClass;
@property(readonly, nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(retain, nonatomic) UIColor *dashColor;
- (void)setDashColor:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *lineDashPattern;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 isVertical:(_Bool)arg2;

// Remaining properties
@property(readonly, nonatomic) CAShapeLayer *layer; // @dynamic layer;

@end

