//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class UIImage, UIImageView, UITapGestureRecognizer, UIView;
@protocol MMLongImageCropSliderBarViewDelegate;

@interface MMLongImageCropSliderBarView : UIControl
{
    _Bool _onTopEdgeActive;
    _Bool _onBottomEdgeActive;
    UIImageView *_imageView;
    id <MMLongImageCropSliderBarViewDelegate> _delegate;
    UIImage *_image;
    UIView *_topEdgeView;
    UIImageView *_topIconFlagView;
    UIView *_bottomEdgeView;
    UIImageView *_bottomIconFlagView;
    double _topCroppedRatio;
    double _bottomCroppedRatio;
    UIView *_sliderView;
    UITapGestureRecognizer *_tapGest;
    struct CGSize _sliderFrameMaxSize;
}

+ (struct CGSize)calBarSizeWithContentSize:(struct CGSize)arg1;
+ (struct CGSize)calContentSizeWithBarSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGest; // @synthesize tapGest=_tapGest;
@property(nonatomic) struct CGSize sliderFrameMaxSize; // @synthesize sliderFrameMaxSize=_sliderFrameMaxSize;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property(nonatomic) double bottomCroppedRatio; // @synthesize bottomCroppedRatio=_bottomCroppedRatio;
@property(nonatomic) double topCroppedRatio; // @synthesize topCroppedRatio=_topCroppedRatio;
@property(nonatomic) _Bool onBottomEdgeActive; // @synthesize onBottomEdgeActive=_onBottomEdgeActive;
@property(nonatomic) _Bool onTopEdgeActive; // @synthesize onTopEdgeActive=_onTopEdgeActive;
@property(retain, nonatomic) UIImageView *bottomIconFlagView; // @synthesize bottomIconFlagView=_bottomIconFlagView;
@property(retain, nonatomic) UIView *bottomEdgeView; // @synthesize bottomEdgeView=_bottomEdgeView;
@property(retain, nonatomic) UIImageView *topIconFlagView; // @synthesize topIconFlagView=_topIconFlagView;
@property(retain, nonatomic) UIView *topEdgeView; // @synthesize topEdgeView=_topEdgeView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak id <MMLongImageCropSliderBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)calBottomCroppedRatio;
- (double)calTopCroppedRatio;
- (struct CGRect)getImageCropRect;
- (struct CGRect)imageViewFrame;
- (void)callbackPreviewPosChangeWithActionType:(unsigned int)arg1;
- (void)resetPreviewFramePos;
- (_Bool)checkPreviewFrameOriginYValid:(double)arg1;
- (void)updatePreviewFrameWithTouchCenterY:(double)arg1 actionType:(unsigned int)arg2;
- (void)onTapAction:(id)arg1;
- (void)handlePreviewFramePan:(id)arg1;
- (void)updateFrameHeightWithCropRect:(struct CGRect)arg1;
- (void)updatePreviewFrameByCropRectUpdate:(unsigned int)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)addCornerToView:(id)arg1 corners:(unsigned long long)arg2 radii:(double)arg3;
- (void)resetCropState;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)getImageCropFrameToWindow;
- (struct CGRect)getImgaeCropFrame;
- (void)resetCropStateWithImage:(id)arg1;
- (void)updateCropStateWithTopRatio:(double)arg1 bottomRatio:(double)arg2;
- (void)setSliderCurAspectRatio:(double)arg1 maxAspectRatio:(double)arg2;
- (void)initSubviews;
- (struct CGSize)barSizeWithFixWidth:(double)arg1 flexHeight:(double)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;

@end

