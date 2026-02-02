//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIPanGestureRecognizer, UITapGestureRecognizer, WCPayMaskViewMatrix;
@protocol WCPayImageMaskViewFilledDelegate;

@interface WCPayImageMaskView
{
    unsigned long long _tilesX;
    unsigned long long _tilesY;
    int _tilesFilled;
    struct CGColorSpace *_colorSpace;
    struct CGContext *_imageContext;
    unsigned long long _radius;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    struct CGPoint _nowPoint;
    _Bool _testHits;
    _Bool _isCanScratch;
    id <WCPayImageMaskViewFilledDelegate> _imageMaskFilledDelegate;
    WCPayMaskViewMatrix *_maskedMatrix;
    NSMutableArray *_touchPoints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *touchPoints; // @synthesize touchPoints=_touchPoints;
@property(retain, nonatomic) WCPayMaskViewMatrix *maskedMatrix; // @synthesize maskedMatrix=_maskedMatrix;
@property(nonatomic) _Bool isCanScratch; // @synthesize isCanScratch=_isCanScratch;
@property(nonatomic) id <WCPayImageMaskViewFilledDelegate> imageMaskFilledDelegate; // @synthesize imageMaskFilledDelegate=_imageMaskFilledDelegate;
- (void)fillTileWithTwoPoints:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (void)fillTileWithPoint:(struct CGPoint)arg1;
- (void)handlePanGesture:(id)arg1;
- (struct CGPoint)normalizeVector:(struct CGPoint)arg1;
@property(readonly, nonatomic) double percentsOfImageMasked;
- (void)handleTapGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialize;
- (void)dealloc;
- (void)setImage:(id)arg1 radius:(unsigned long long)arg2;
- (void)updatePercent:(double)arg1;

@end

