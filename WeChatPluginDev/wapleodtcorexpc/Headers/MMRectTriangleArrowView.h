//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface MMRectTriangleArrowView
{
    UIView *_baseContentView;
    unsigned long long _displayState;
    unsigned long long _dataState;
    long long _orientation;
    CDUnknownBlockType _dismissCallback;
    double _triangePosOriginX;
    double _triangePosOriginY;
}

+ (id)createMaskPathInRect:(struct CGRect)arg1 cornerRadius:(double)arg2 triangleWidth:(double)arg3 triangleHeight:(double)arg4 orientation:(long long)arg5 triangleX:(double)arg6 triangleY:(double)arg7;
- (void).cxx_destruct;
@property(nonatomic) double triangePosOriginY; // @synthesize triangePosOriginY=_triangePosOriginY;
@property(nonatomic) double triangePosOriginX; // @synthesize triangePosOriginX=_triangePosOriginX;
@property(copy, nonatomic) CDUnknownBlockType dismissCallback; // @synthesize dismissCallback=_dismissCallback;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) unsigned long long dataState; // @synthesize dataState=_dataState;
@property(nonatomic) unsigned long long displayState; // @synthesize displayState=_displayState;
@property(retain, nonatomic) UIView *baseContentView; // @synthesize baseContentView=_baseContentView;
- (void)onDismissed;
- (void)onShowed;
- (void)dismissWithAnimation;
- (void)dismissWithAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithoutAnimation;
- (void)dismissWithAnimationFromPosition:(struct CGPoint)arg1 toPosition:(struct CGPoint)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissWithAnimationToCenterY:(double)arg1 toScale:(double)arg2 xAnchor:(double)arg3 xAnchorStartPosition:(double)arg4 duration:(double)arg5 animating:(CDUnknownBlockType)arg6 waiting:(CDUnknownBlockType)arg7;
- (void)dismissWithAnimationToBottom:(double)arg1 horizontalExtendCenter:(double)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showWithAnimationFromPosition:(struct CGPoint)arg1 toPosition:(struct CGPoint)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showWithoutAnimation;
- (void)showWithAnimationToBottom:(double)arg1 fromScale:(double)arg2 xAnchor:(double)arg3 xAnchorStartPosition:(double)arg4 duration:(double)arg5 beforeAnimating:(CDUnknownBlockType)arg6 animating:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)showWithAnimationToBottom:(double)arg1 horizontalExtendCenter:(double)arg2 beforeAnimating:(CDUnknownBlockType)arg3 animating:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dismissWithAnimationFromPositionX:(double)arg1 toPositionX:(double)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showWithAnimationFromPositionX:(double)arg1 toPositionX:(double)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissWithAnimationFromPositionY:(double)arg1 toPositionY:(double)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showWithAnimationFromPositionY:(double)arg1 toPositionY:(double)arg2 animating:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateShapeLayer;
- (id)triangeColor;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateTriangePosBottom:(double)arg1;
- (void)updateTriangePosTop:(double)arg1;
- (void)updateTriangePosRight:(double)arg1;
- (void)updateTriangePosLeft:(double)arg1;
- (void)updateSizeWithContentSize:(struct CGSize)arg1;
- (double)selfCornerRadius;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
@property(nonatomic) struct CGPoint arrow;
- (void)layoutSubviews;
- (void)addBaseContentView;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2;

@end

