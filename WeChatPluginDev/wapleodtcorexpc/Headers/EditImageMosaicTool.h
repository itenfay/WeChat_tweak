//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageUIView, NSString, UIColor;
@protocol MosaicToolDelegate;

@interface EditImageMosaicTool
{
    struct CGPoint _initialPoint;
    _Bool _initial;
    struct CGPath *_path;
    EditImageUIView *tView;
    id <MosaicToolDelegate> _delegate;
    UIColor *lineColor;
    double lineWidth;
    unsigned long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long _style; // @synthesize _style;
@property(nonatomic) double lineWidth; // @synthesize lineWidth;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor;
@property(nonatomic) __weak id <MosaicToolDelegate> _delegate; // @synthesize _delegate;
- (void)dealloc;
- (id)getTraceView;
- (void)drawLayer;
- (id)getCurrentShapeLayer;
- (struct CGRect)addPathWithP2Point:(struct CGPoint)arg1 withP1Point:(struct CGPoint)arg2 withCPoint:(struct CGPoint)arg3;
- (void)setInitialPoint:(struct CGPoint)arg1;
- (id)createView:(struct CGRect)arg1;
- (id)createShapeLayer:(struct CGRect)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

