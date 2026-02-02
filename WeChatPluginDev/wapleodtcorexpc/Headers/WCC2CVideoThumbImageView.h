//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class MMImageScrollViewHelper, NSArray, NSString, UIImageView;
@protocol WCC2CVideoThumbImageViewDelegate;

@interface WCC2CVideoThumbImageView : UIScrollView
{
    _Bool _zoomEnabled;
    UIImageView *_imageView;
    id <WCC2CVideoThumbImageViewDelegate> _uiDelegate;
    MMImageScrollViewHelper *_scrollViewHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImageScrollViewHelper *scrollViewHelper; // @synthesize scrollViewHelper=_scrollViewHelper;
@property(nonatomic) __weak id <WCC2CVideoThumbImageViewDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
- (void)updateZoomInfo:(struct CGSize)arg1;
- (void)onDoubleTap:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setImage:(id)arg1;
@property(nonatomic) struct CGRect frame;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGRect={CGPoint=dd}{CGSize=dd}},?,N

- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *gestureRecognizers;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,C,N

@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) double minimumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N


@end

