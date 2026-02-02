//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, NSString, UIColor, UIImageView;

@interface EditImagePenTool
{
    struct CGPath *_path;
    struct CGPoint _initialPoint;
    _Bool _initial;
    CAShapeLayer *slayer;
    UIImageView *tView;
    struct CGPath *_subpath;
    CAShapeLayer *_tmpLayer;
    UIColor *lineColor;
    double lineWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double lineWidth; // @synthesize lineWidth;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor;
- (void)dealloc;
- (id)getCurrentShapeLayer;
- (void)drawLayer;
- (struct CGRect)addPathWithP2Point:(struct CGPoint)arg1 withP1Point:(struct CGPoint)arg2 withCPoint:(struct CGPoint)arg3;
- (void)setInitialPoint:(struct CGPoint)arg1;
- (id)createView:(struct CGRect)arg1;
- (id)createLayer:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

