//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface WCFinderProgressView : UIView
{
    double _progress;
    UIColor *_bottomStrokeColor;
    UIColor *_lineStrokeColor;
    CAShapeLayer *_bottomShapeLayer;
    CAShapeLayer *_shpreLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *shpreLayer; // @synthesize shpreLayer=_shpreLayer;
@property(retain, nonatomic) CAShapeLayer *bottomShapeLayer; // @synthesize bottomShapeLayer=_bottomShapeLayer;
@property(retain, nonatomic) UIColor *lineStrokeColor; // @synthesize lineStrokeColor=_lineStrokeColor;
@property(retain, nonatomic) UIColor *bottomStrokeColor; // @synthesize bottomStrokeColor=_bottomStrokeColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)setupProgress:(double)arg1 animated:(_Bool)arg2;
- (void)createLayer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

