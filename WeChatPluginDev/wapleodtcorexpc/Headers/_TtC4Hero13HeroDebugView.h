//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC4Hero13HeroDebugView : UIView
{
    MISSING_TYPE *backgroundView;
    MISSING_TYPE *debugSlider;
    MISSING_TYPE *perspectiveButton;
    MISSING_TYPE *doneButton;
    MISSING_TYPE *arcCurveButton;
    MISSING_TYPE *delegate;
    MISSING_TYPE *panGR;
    MISSING_TYPE *pinchGR;
    MISSING_TYPE *showControls;
    MISSING_TYPE *showOnTop;
    MISSING_TYPE *rotation;
    MISSING_TYPE *scale;
    MISSING_TYPE *translation;
    MISSING_TYPE *startRotation;
    MISSING_TYPE *startLocation;
    MISSING_TYPE *startTranslation;
    MISSING_TYPE *startScale;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onSlide;
- (void)onDisplayArcCurve;
- (void)onPerspective;
- (void)onDone;
- (void)pinch;
- (void)pan;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

@end

