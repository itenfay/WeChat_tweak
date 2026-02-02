//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCFinderRedPacketCropSliderPanView;
@protocol WCFinderRedPacketCropFrameViewDelegate;

@interface WCFinderRedPacketCropFrameView
{
    WCFinderRedPacketCropSliderPanView *_leftPanView;
    WCFinderRedPacketCropSliderPanView *_rightPanView;
    id <WCFinderRedPacketCropFrameViewDelegate> _delegate;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIView *_leftMaskView;
    UIView *_rightMaskView;
    double _minDistance;
    double _maxDistance;
    double _leftRightMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double leftRightMargin; // @synthesize leftRightMargin=_leftRightMargin;
@property(nonatomic) double maxDistance; // @synthesize maxDistance=_maxDistance;
@property(nonatomic) double minDistance; // @synthesize minDistance=_minDistance;
@property(retain, nonatomic) UIView *rightMaskView; // @synthesize rightMaskView=_rightMaskView;
@property(retain, nonatomic) UIView *leftMaskView; // @synthesize leftMaskView=_leftMaskView;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) __weak id <WCFinderRedPacketCropFrameViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderRedPacketCropSliderPanView *rightPanView; // @synthesize rightPanView=_rightPanView;
@property(retain, nonatomic) WCFinderRedPacketCropSliderPanView *leftPanView; // @synthesize leftPanView=_leftPanView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onPanViewGes:(id)arg1;
- (void)layoutLineSubviews;
- (void)setUpView;
- (id)buildLineView;
- (id)buildMaskView;
- (id)initWithFrame:(struct CGRect)arg1 leftRightMargin:(double)arg2 minDistance:(double)arg3 maxDistance:(double)arg4;

@end

