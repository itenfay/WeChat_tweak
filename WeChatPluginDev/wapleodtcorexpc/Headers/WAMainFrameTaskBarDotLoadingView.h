//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WAMainFrameTaskBarDotLoadingView
{
    double _zoomOutBeginOffset;
    double _zoomOutEndOffset;
    double _spreadBeginOffset;
    double _spreadEndOffset;
    double _centerDotZoomOutRadius;
    double _dotRadius;
    UIView *_centerDotLayer;
    UIView *_leftDotLayer;
    UIView *_rightDotLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightDotLayer; // @synthesize rightDotLayer=_rightDotLayer;
@property(retain, nonatomic) UIView *leftDotLayer; // @synthesize leftDotLayer=_leftDotLayer;
@property(retain, nonatomic) UIView *centerDotLayer; // @synthesize centerDotLayer=_centerDotLayer;
@property(nonatomic) double dotRadius; // @synthesize dotRadius=_dotRadius;
@property(nonatomic) double centerDotZoomOutRadius; // @synthesize centerDotZoomOutRadius=_centerDotZoomOutRadius;
@property(nonatomic) double spreadEndOffset; // @synthesize spreadEndOffset=_spreadEndOffset;
@property(nonatomic) double spreadBeginOffset; // @synthesize spreadBeginOffset=_spreadBeginOffset;
@property(nonatomic) double zoomOutEndOffset; // @synthesize zoomOutEndOffset=_zoomOutEndOffset;
@property(nonatomic) double zoomOutBeginOffset; // @synthesize zoomOutBeginOffset=_zoomOutBeginOffset;
- (void)updateZoomOutProgress:(double)arg1;
- (void)updateSpreadProgress:(double)arg1;
- (void)updateStepOffset:(double)arg1;
- (id)dot;
- (void)initSubViews;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

