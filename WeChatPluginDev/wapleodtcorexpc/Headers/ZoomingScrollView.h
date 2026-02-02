//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSString, UIImageView;
@protocol ZoomingScrollViewDelegate;

@interface ZoomingScrollView : UIScrollView
{
    UIImageView *_photoImageView;
    double _doubleTapExpandZoomScale;
    id <ZoomingScrollViewDelegate> _zoomViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ZoomingScrollViewDelegate> zoomViewDelegate; // @synthesize zoomViewDelegate=_zoomViewDelegate;
@property(nonatomic) double doubleTapExpandZoomScale; // @synthesize doubleTapExpandZoomScale=_doubleTapExpandZoomScale;
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)calcuateZoomScaleFillDoubleTapExpandUseCustomZoomScale;
- (void)calcuateZoomScaleFillDoubleTapExpandUseMaximumZoomScale;
- (_Bool)isCurrMaximumZoomScale;
- (void)updateZoomScaleWithTouchPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

