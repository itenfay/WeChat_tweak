//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIView;
@protocol MJSegmentCropGestureCaptureViewDelegate;

@interface MJSegmentCropGestureCaptureView
{
    id <MJSegmentCropGestureCaptureViewDelegate> _delegate;
    UIView *_leftCropMaskView;
    UIView *_rightCropMaskView;
    UIView *_topCropMaskView;
    UIView *_bottomCropMaskView;
    UIPanGestureRecognizer *_panGR;
    UIPinchGestureRecognizer *_pinchGR;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGR; // @synthesize pinchGR=_pinchGR;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGR; // @synthesize panGR=_panGR;
@property(retain, nonatomic) UIView *bottomCropMaskView; // @synthesize bottomCropMaskView=_bottomCropMaskView;
@property(retain, nonatomic) UIView *topCropMaskView; // @synthesize topCropMaskView=_topCropMaskView;
@property(retain, nonatomic) UIView *rightCropMaskView; // @synthesize rightCropMaskView=_rightCropMaskView;
@property(retain, nonatomic) UIView *leftCropMaskView; // @synthesize leftCropMaskView=_leftCropMaskView;
@property(nonatomic) __weak id <MJSegmentCropGestureCaptureViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)layoutWithCenterBoxView:(id)arg1;
- (void)setupGestures;
- (void)setupViews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

