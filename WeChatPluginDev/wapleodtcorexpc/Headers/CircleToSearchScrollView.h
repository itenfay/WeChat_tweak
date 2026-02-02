//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CircleToSearchPreviewView, NSString;

@interface CircleToSearchScrollView
{
    double _bottomInset;
    double _maxBottomInset;
    CircleToSearchPreviewView *_previewView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CircleToSearchPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) double maxBottomInset; // @synthesize maxBottomInset=_maxBottomInset;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
- (void)hideFakeOverlayView;
- (void)showFakeOverlayView;
- (void)centerOnFocusAnimated:(_Bool)arg1;
- (void)focusOn:(struct CGRect)arg1 andAnimationDuration:(double)arg2;
- (void)updatePreviewImageFrame:(struct CGRect)arg1 andAnimated:(_Bool)arg2;
- (void)loadPreviewImage:(id)arg1 andFrame:(struct CGRect)arg2;
@property(readonly, nonatomic) struct CGRect normalizedFocusFrame;
- (void)updateScrollContentInset;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

