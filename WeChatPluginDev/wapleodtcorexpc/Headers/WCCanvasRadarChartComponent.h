//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView;

@interface WCCanvasRadarChartComponent
{
    UIImageView *_bgImageView;
    UIImageView *_maskImageView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (long long)dimensions;
- (id)coverColor;
- (void)resizeBorderImageView;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)vertexesForCenterPoint:(struct CGPoint)arg1 radius:(double)arg2;
- (void)drawAtCenter:(struct CGPoint)arg1 vertexes:(id)arg2 values:(id)arg3 fillColor:(id)arg4 withCenterLine:(_Bool)arg5 isTargetPoints:(_Bool)arg6;
- (void)drawBackgroundAtCenterPoint:(struct CGPoint)arg1 radius:(double)arg2;
- (void)drawItemsAtCenterPoint:(struct CGPoint)arg1 radius:(double)arg2;
- (double)calcRadiusInsideRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

