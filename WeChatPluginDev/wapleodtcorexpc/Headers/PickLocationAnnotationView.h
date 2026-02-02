//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnnotationSelectContentView, AnnotationUnSelectContentView, CADisplayLink, RoundRingView, UIView;

@interface PickLocationAnnotationView
{
    _Bool _isUnSelectContentDisplay;
    _Bool _isSelectContentDisplay;
    _Bool _isAnimateViewDisplay;
    long long _annotationState;
    AnnotationUnSelectContentView *_unSelectContentView;
    AnnotationSelectContentView *_selectContentView;
    RoundRingView *_roundView;
    UIView *_lineView;
    double _lastWidth;
    double _lastHeight;
    CADisplayLink *_animateDisplayLink;
}

+ (double)annotationHeightSelect;
+ (double)annotationHeightUnSelect;
+ (double)annotationWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *animateDisplayLink; // @synthesize animateDisplayLink=_animateDisplayLink;
@property(nonatomic) double lastHeight; // @synthesize lastHeight=_lastHeight;
@property(nonatomic) double lastWidth; // @synthesize lastWidth=_lastWidth;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) RoundRingView *roundView; // @synthesize roundView=_roundView;
@property(retain, nonatomic) AnnotationSelectContentView *selectContentView; // @synthesize selectContentView=_selectContentView;
@property(retain, nonatomic) AnnotationUnSelectContentView *unSelectContentView; // @synthesize unSelectContentView=_unSelectContentView;
@property(nonatomic) _Bool isAnimateViewDisplay; // @synthesize isAnimateViewDisplay=_isAnimateViewDisplay;
@property(nonatomic) _Bool isSelectContentDisplay; // @synthesize isSelectContentDisplay=_isSelectContentDisplay;
@property(nonatomic) _Bool isUnSelectContentDisplay; // @synthesize isUnSelectContentDisplay=_isUnSelectContentDisplay;
@property(nonatomic) long long annotationState; // @synthesize annotationState=_annotationState;
- (void)onUpdateAnimateValue;
- (void)removeDisplayLink;
- (void)addDisplayLink;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)startAnimateFromSelectToUnSelect;
- (void)startAnimateFromUnSelectToSelect;
- (void)removeAllAnimations;
- (void)updateSelectContent:(_Bool)arg1;
- (void)updateUnSelectContent:(_Bool)arg1;
- (void)updateAnimateViews:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

