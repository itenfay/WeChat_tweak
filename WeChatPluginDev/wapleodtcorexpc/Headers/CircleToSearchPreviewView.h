//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CircleToSearchOverlayView, MMUIView;

@interface CircleToSearchPreviewView
{
    CircleToSearchOverlayView *_overlayView;
    MMUIView *_fakeOverlayView;
    struct CGRect _normalizedFocusFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *fakeOverlayView; // @synthesize fakeOverlayView=_fakeOverlayView;
@property(retain, nonatomic) CircleToSearchOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) struct CGRect normalizedFocusFrame; // @synthesize normalizedFocusFrame=_normalizedFocusFrame;
- (void)hideFakeOverlayView;
- (void)showFakeOverlayView;
- (void)focusOn:(struct CGRect)arg1 andAnimationDuration:(double)arg2;
@property(readonly, nonatomic) struct CGRect focusFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

