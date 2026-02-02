//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTrimHandle, MMUIView, NSString;

@interface MJAnotherSegmentTrimHandleView
{
    _Bool _isLeftExpandable;
    _Bool _isRightExpandable;
    MMUIView *_foregroundView;
    MJTrimHandle *_leftHandle;
    MJTrimHandle *_rightHandle;
    struct UIEdgeInsets _trimHandleViewInsets;
    struct UIEdgeInsets _leftHitInsets;
    struct UIEdgeInsets _rightHitInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJTrimHandle *rightHandle; // @synthesize rightHandle=_rightHandle;
@property(retain, nonatomic) MJTrimHandle *leftHandle; // @synthesize leftHandle=_leftHandle;
@property(retain, nonatomic) MMUIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(nonatomic) _Bool isRightExpandable; // @synthesize isRightExpandable=_isRightExpandable;
@property(nonatomic) _Bool isLeftExpandable; // @synthesize isLeftExpandable=_isLeftExpandable;
@property(nonatomic) struct UIEdgeInsets rightHitInsets; // @synthesize rightHitInsets=_rightHitInsets;
@property(nonatomic) struct UIEdgeInsets leftHitInsets; // @synthesize leftHitInsets=_leftHitInsets;
@property(nonatomic) struct UIEdgeInsets trimHandleViewInsets; // @synthesize trimHandleViewInsets=_trimHandleViewInsets;
- (struct CGRect)rightTrimHandleHitRect;
- (struct CGRect)leftTrimHandleHitRect;
- (void)hideSnapIndicatorDot;
- (void)showSnapIndicatorDotWithEdge:(unsigned long long)arg1;
- (void)hideSnapIndicatorLine;
- (void)showSnapIndicatorLineWithEdge:(unsigned long long)arg1;
- (unsigned long long)trimmingEdgeForPanGesture:(id)arg1;
- (_Bool)respondsToPanGesture:(id)arg1;
- (void)layoutViews;
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

