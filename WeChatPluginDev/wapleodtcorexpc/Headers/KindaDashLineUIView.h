//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface KindaDashLineUIView : UIView
{
    _Bool _vertical;
    UIColor *_strokeColor;
    double _lineWidth;
    CAShapeLayer *_shapePayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *shapePayer; // @synthesize shapePayer=_shapePayer;
@property(nonatomic) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

