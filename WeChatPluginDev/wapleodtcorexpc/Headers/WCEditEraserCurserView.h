//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer;

@interface WCEditEraserCurserView : NSObject
{
    CAShapeLayer *_shapeLayer;
}

@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
- (void)layoutSubviews;
- (void)setLineScale:(double)arg1;
- (void)updateLayerSize;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

