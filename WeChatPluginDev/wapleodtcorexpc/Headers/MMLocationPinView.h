//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnnotationSelectContentView, MMUIActivityIndicatorView, ThreeWayExpandImageView, UIImageView, UILabel, UIView;

@interface MMLocationPinView
{
    AnnotationSelectContentView *m_pinView;
    UIImageView *m_shadowView;
    UIImageView *m_pointView;
    ThreeWayExpandImageView *m_calloutView;
    MMUIActivityIndicatorView *m_loadingView;
    UILabel *m_labelLocation;
    UILabel *m_labelPOIName;
    _Bool m_bCallOutViewEnable;
    UIView *m_extraContentView;
}

+ (double)pinViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *m_extraContentView; // @synthesize m_extraContentView;
@property(nonatomic) _Bool m_bCallOutViewEnable; // @synthesize m_bCallOutViewEnable;
- (void)applyPinViewScale:(double)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)init;
- (void)initView;
- (void)hideCallOutViewAnimated:(_Bool)arg1 Duration:(double)arg2;
- (void)showCallOutViewAnimated:(_Bool)arg1 Duration:(double)arg2;
- (void)updatePinView;
- (void)setContainerFrame:(struct CGRect)arg1;
- (void)setLoadingStatus;
- (void)setLocationText:(id)arg1 POIName:(id)arg2;
- (void)doUpAnimation;
- (void)doDownAnimation;
- (void)onAnimationFinish;
- (void)stopAllAnimation;
@property(readonly, nonatomic) _Bool m_bIsCalloutHidden;
- (void)setDownFrame;
- (void)setUpFrame;

@end

