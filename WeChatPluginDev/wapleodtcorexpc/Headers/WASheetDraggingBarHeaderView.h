//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WASheetDraggingBarHeaderView : UIView
{
    UIView *_bottomView;
    UIView *_arrowView;
    UIView *_maskView;
    _Bool _isExpanded;
    UIView *_stickView;
    double _initialCornerRadius;
    double _forbidDragUpAnimation;
    double _initialHeight;
    double _maxHeight;
    double _currentDragOffsetUpward;
    double _startDragUpTransitionOffset;
    double _endDragUpTransitionOffset;
    double _startDragDownTransitionOffset;
    double _endDragDownTransitionOffset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) double endDragDownTransitionOffset; // @synthesize endDragDownTransitionOffset=_endDragDownTransitionOffset;
@property(nonatomic) double startDragDownTransitionOffset; // @synthesize startDragDownTransitionOffset=_startDragDownTransitionOffset;
@property(nonatomic) double endDragUpTransitionOffset; // @synthesize endDragUpTransitionOffset=_endDragUpTransitionOffset;
@property(nonatomic) double startDragUpTransitionOffset; // @synthesize startDragUpTransitionOffset=_startDragUpTransitionOffset;
@property(nonatomic) double currentDragOffsetUpward; // @synthesize currentDragOffsetUpward=_currentDragOffsetUpward;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double initialHeight; // @synthesize initialHeight=_initialHeight;
@property(nonatomic) double forbidDragUpAnimation; // @synthesize forbidDragUpAnimation=_forbidDragUpAnimation;
@property(nonatomic) double initialCornerRadius; // @synthesize initialCornerRadius=_initialCornerRadius;
@property(retain, nonatomic) UIView *stickView; // @synthesize stickView=_stickView;
- (void)removeMask;
- (void)addMask;
- (void)hideStick;
- (void)showStick;
- (void)setTransitionalExpandStickAndShowDownArrowProgress:(double)arg1;
- (void)setTransitionalHidingStickAndExpandProgress:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

