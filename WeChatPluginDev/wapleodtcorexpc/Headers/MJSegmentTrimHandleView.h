//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMUIView, NSString, UIImageView;

@interface MJSegmentTrimHandleView
{
    _Bool _isLeftExpandable;
    _Bool _isRightExpandable;
    MMUIView *_backgroundView;
    MMUIView *_contentView;
    CAShapeLayer *_maskLayer;
    UIImageView *_leftTrimHandleImageView;
    UIImageView *_rightTrimHandleImageView;
    struct UIEdgeInsets _trimHandleViewInsets;
    struct UIEdgeInsets _leftHitInsets;
    struct UIEdgeInsets _rightHitInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *rightTrimHandleImageView; // @synthesize rightTrimHandleImageView=_rightTrimHandleImageView;
@property(retain, nonatomic) UIImageView *leftTrimHandleImageView; // @synthesize leftTrimHandleImageView=_leftTrimHandleImageView;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isRightExpandable; // @synthesize isRightExpandable=_isRightExpandable;
@property(nonatomic) _Bool isLeftExpandable; // @synthesize isLeftExpandable=_isLeftExpandable;
@property(nonatomic) struct UIEdgeInsets rightHitInsets; // @synthesize rightHitInsets=_rightHitInsets;
@property(nonatomic) struct UIEdgeInsets leftHitInsets; // @synthesize leftHitInsets=_leftHitInsets;
@property(nonatomic) struct UIEdgeInsets trimHandleViewInsets; // @synthesize trimHandleViewInsets=_trimHandleViewInsets;
- (struct CGRect)rightTrimHandleHitRect;
- (struct CGRect)leftTrimHandleHitRect;
- (unsigned long long)trimmingEdgeForPanGesture:(id)arg1;
- (_Bool)respondsToPanGesture:(id)arg1;
- (void)layoutSubviews;
- (void)layoutInsetsRelatedViews;
- (void)layoutViews;
- (void)setupLayers;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

