//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, CAShapeLayer, NSString;

@interface WCEditImageMosaicTraceView
{
    _Bool _highLight;
    CALayer *_contentLayer;
    CAShapeLayer *_highLightLayer;
    CAShapeLayer *_shapeLayer;
}

+ (id)copyLayer:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isHighLight) _Bool highLight; // @synthesize highLight=_highLight;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CAShapeLayer *highLightLayer; // @synthesize highLightLayer=_highLightLayer;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isPenTraceViewHighLight;
- (void)setPenTraceViewHighLight:(_Bool)arg1;
- (_Bool)highLightPenTraceAtPointIfNeeded:(struct CGPoint)arg1;
- (_Bool)isViewPathContainPoint:(struct CGPoint)arg1;
- (void)updateWithPath:(struct CGPath *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mosaicImage:(id)arg2 shapeLayer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

