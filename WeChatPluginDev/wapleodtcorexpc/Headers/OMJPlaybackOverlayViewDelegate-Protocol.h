//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class OMJHandleBoxShadowView, OMJPlaybackOverlayView;

@protocol OMJPlaybackOverlayViewDelegate <NSObject>

@optional
- (void)overlayViewDidEndUpdatingPosition:(OMJPlaybackOverlayView *)arg1;
- (void)overlayView:(OMJPlaybackOverlayView *)arg1 didUpdatePosition:(struct CGPoint)arg2;
- (void)overlayViewWillUpdatePosition:(OMJPlaybackOverlayView *)arg1;
- (void)overlayViewDidEndUpdatingRotationByControlHandle:(OMJPlaybackOverlayView *)arg1;
- (void)overlayViewDidEndUpdatingRotationByGesture:(OMJPlaybackOverlayView *)arg1;
- (void)overlayViewDidEndUpdatingRotation:(OMJPlaybackOverlayView *)arg1;
- (void)overlayView:(OMJPlaybackOverlayView *)arg1 didUpdateRotation:(double)arg2;
- (void)overlayViewWillUpdateRotationByControlHandle:(OMJPlaybackOverlayView *)arg1;
- (void)overlayViewWillUpdateRotationByGesture:(OMJPlaybackOverlayView *)arg1;
- (void)overlayViewWillUpdateRotation:(OMJPlaybackOverlayView *)arg1;
- (void)overlayViewDidEndUpdatingScaleByControlHandle:(OMJPlaybackOverlayView *)arg1;
- (void)overlayViewDidEndUpdatingScaleByGesture:(OMJPlaybackOverlayView *)arg1;
- (void)overlayViewDidEndUpdatingScale:(OMJPlaybackOverlayView *)arg1;
- (void)overlayView:(OMJPlaybackOverlayView *)arg1 didUpdateScale:(double)arg2;
- (void)overlayViewWillUpdateScaleByControlHandle:(OMJPlaybackOverlayView *)arg1;
- (void)overlayViewWillUpdateScaleByGesture:(OMJPlaybackOverlayView *)arg1;
- (void)overlayViewWillUpdateScale:(OMJPlaybackOverlayView *)arg1;
- (void)overlayView:(OMJPlaybackOverlayView *)arg1 didDoubleTapOnHandleBox:(OMJHandleBoxShadowView *)arg2 atPoint:(struct CGPoint)arg3;
- (void)overlayView:(OMJPlaybackOverlayView *)arg1 didTapCanvasAtPoint:(struct CGPoint)arg2;
- (void)handleBoxFlipButtonDidTouchUpInsideInOverlayView:(OMJPlaybackOverlayView *)arg1;
- (void)handleBoxDeleteButtonDidTouchUpInsideInOverlayView:(OMJPlaybackOverlayView *)arg1;
@end

