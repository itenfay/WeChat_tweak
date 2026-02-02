//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSString;
@protocol WCFinderPinchLogicScrollViewDelegate;

@interface WCFinderPinchLogicScrollView : UIScrollView
{
    id <WCFinderPinchLogicScrollViewDelegate> _finderDelegate;
    struct CGRect _pinchContentDefaultRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect pinchContentDefaultRect; // @synthesize pinchContentDefaultRect=_pinchContentDefaultRect;
@property(nonatomic) __weak id <WCFinderPinchLogicScrollViewDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (unsigned long long)_checkMediaViewBouncingResultWithOffset:(struct CGPoint)arg1;
- (unsigned long long)_checkMediaViewBouncingResult;
- (id)pinchContentView;
- (void)resetToInitialZoomScale;
- (void)setScrollViewCanPinch:(_Bool)arg1;
- (_Bool)isInPinchState;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

