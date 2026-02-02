//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, CAShapeLayer;

@interface EditImageCropOverlayView
{
    unsigned long long _overlayLevel;
    long long _cropOverlayViewStyle;
    CALayer *_blackLayer;
    CAShapeLayer *_shapeLayer;
    struct CGRect _brightFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CALayer *blackLayer; // @synthesize blackLayer=_blackLayer;
@property(nonatomic) long long cropOverlayViewStyle; // @synthesize cropOverlayViewStyle=_cropOverlayViewStyle;
@property(nonatomic) unsigned long long _overlayLevel; // @synthesize _overlayLevel;
@property(nonatomic) struct CGRect _brightFrame; // @synthesize _brightFrame;
- (void)setFrame:(struct CGRect)arg1;
- (void)initLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

