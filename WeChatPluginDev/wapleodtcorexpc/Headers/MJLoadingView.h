//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface MJLoadingView : UIView
{
    float _progress;
    UIView *_bgMaskView;
    CAShapeLayer *_bgCircleLayer;
    CAShapeLayer *_foregroundLayer;
}

+ (id)progressLayerWithStrokeColor:(id)arg1 StrokeEnd:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *foregroundLayer; // @synthesize foregroundLayer=_foregroundLayer;
@property(retain, nonatomic) CAShapeLayer *bgCircleLayer; // @synthesize bgCircleLayer=_bgCircleLayer;
@property(retain, nonatomic) UIView *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

