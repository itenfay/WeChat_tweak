//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIImage, UIImageView;

@interface EditImageMosaicBrushView
{
    UIImage *_img;
    UIImageView *_imageView;
    double _lineWidth;
    _Bool _initial;
    double _minDis;
    NSMutableArray *_pointArray;
    UIImage *_cacheImg;
    _Bool _highLight;
    struct CGPath *_path;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isHighLight) _Bool highLight; // @synthesize highLight=_highLight;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
- (_Bool)isPenTraceViewHighLight;
- (void)setPenTraceViewHighLight:(_Bool)arg1;
- (_Bool)highLightPenTraceAtPointIfNeeded:(struct CGPoint)arg1;
- (_Bool)isViewPathContainPoint:(struct CGPoint)arg1;
- (void)updateCachedImage;
- (void)draw;
- (void)updateDrawPathWithPoint:(struct CGPoint)arg1;
- (void)drawMosaicAtPoint:(struct CGPoint)arg1 withColor:(id)arg2 withRotation:(double)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withToolType:(int)arg2 lineWidth:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

