//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, MJDashLine, MMUIView;
@protocol MJShootCropGuidelineMaskViewDelegate;

@interface MJShootCropGuidelineMaskView
{
    id <MJShootCropGuidelineMaskViewDelegate> _delegate;
    MMUIView *_guidelineFrameContainerView;
    unsigned long long _snapType;
    CALayer *_topBorder;
    CALayer *_bottomBorder;
    CALayer *_leftBorder;
    CALayer *_rightBorder;
    MJDashLine *_verticalLine;
    MJDashLine *_horizontalLine;
    MMUIView *_topOverlayView;
    MMUIView *_bottomOverlayView;
    MMUIView *_leftOverlayView;
    MMUIView *_rightOverlayView;
    struct CGSize _canvasPointSize;
}

+ (id)snapTypeDescription:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *rightOverlayView; // @synthesize rightOverlayView=_rightOverlayView;
@property(retain, nonatomic) MMUIView *leftOverlayView; // @synthesize leftOverlayView=_leftOverlayView;
@property(retain, nonatomic) MMUIView *bottomOverlayView; // @synthesize bottomOverlayView=_bottomOverlayView;
@property(retain, nonatomic) MMUIView *topOverlayView; // @synthesize topOverlayView=_topOverlayView;
@property(retain, nonatomic) MJDashLine *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) MJDashLine *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) CALayer *rightBorder; // @synthesize rightBorder=_rightBorder;
@property(retain, nonatomic) CALayer *leftBorder; // @synthesize leftBorder=_leftBorder;
@property(retain, nonatomic) CALayer *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) CALayer *topBorder; // @synthesize topBorder=_topBorder;
@property(nonatomic) struct CGSize canvasPointSize; // @synthesize canvasPointSize=_canvasPointSize;
@property(readonly, nonatomic) unsigned long long snapType; // @synthesize snapType=_snapType;
@property(retain, nonatomic) MMUIView *guidelineFrameContainerView; // @synthesize guidelineFrameContainerView=_guidelineFrameContainerView;
@property(nonatomic) __weak id <MJShootCropGuidelineMaskViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setSnapType:(unsigned long long)arg1;
- (void)showOverlayExclusivelyAnimated:(_Bool)arg1;
- (void)dismissOverlayAnimated:(_Bool)arg1;
- (void)showOverlayAnimated:(_Bool)arg1;
- (void)setupOverlays;
- (void)unhighlightRightBorder;
- (void)highlightRightBorder;
- (void)unhighlightBottomBorder;
- (void)highlightBottomBorder;
- (void)unhighlightLeftBorder;
- (void)highlightLeftBorder;
- (void)unhighlightTopBorder;
- (void)highlightTopBorder;
- (void)resetBordersFrame;
- (void)setupBorders;
- (void)dismissHorizontalGuidelineAnimated:(_Bool)arg1;
- (void)showHorizontalGuidelineAnimated:(_Bool)arg1;
- (void)dismissVerticalGuidelineAnimated:(_Bool)arg1;
- (void)showVerticalGuidelineAnimated:(_Bool)arg1;
- (void)setupGuidelines;
- (void)layoutGuidelineFrameContainerView;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCanvasPointSize:(struct CGSize)arg1;

@end

