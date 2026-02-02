//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GKCropBorderView, UIView;

@interface GKResizeableCropOverlayView
{
    struct CGSize _initialContentSize;
    _Bool _resizingEnabled;
    struct CGPoint _theAnchor;
    struct CGPoint _startPoint;
    struct {
        int widhtMultiplyer;
        int heightMultiplyer;
        int xMultiplyer;
        int yMultiplyer;
    } _resizeMultiplyer;
    UIView *_contentView;
    GKCropBorderView *_cropBorderView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GKCropBorderView *cropBorderView; // @synthesize cropBorderView=_cropBorderView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)drawRect:(struct CGRect)arg1;
- (void)_fillMultiplyer;
- (void)_resetFramesToThisOne:(struct CGRect)arg1;
- (struct CGRect)_preventBorderFrameFromGettingTooSmallOrTooBig:(struct CGRect)arg1;
- (void)_resizeWithTouchPoint:(struct CGPoint)arg1;
- (id)_getAllCurrentHandlePositions;
- (struct CGPoint)_calcuateWhichBorderHandleIsTheAnchorPointFromHere:(struct CGPoint)arg1;
- (void)_addContentViews;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 andInitialContentSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

