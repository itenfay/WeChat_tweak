//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class MMImageScrollViewHelper, NSArray, NSString, UIView;
@protocol MMContentScrollViewDelegate;

@interface MMContentScrollView : UIScrollView
{
    id <MMContentScrollViewDelegate> _customDelegate;
    MMImageScrollViewHelper *_scrollViewHelper;
    UIView *_contentView;
    struct CGSize _customContentSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CGSize customContentSize; // @synthesize customContentSize=_customContentSize;
@property(retain, nonatomic) MMImageScrollViewHelper *scrollViewHelper; // @synthesize scrollViewHelper=_scrollViewHelper;
@property(nonatomic) __weak id <MMContentScrollViewDelegate> customDelegate; // @synthesize customDelegate=_customDelegate;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (_Bool)imageScrollViewHelper:(id)arg1 shouldIgnoreDoubleTap:(id)arg2;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGRect frame;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGRect={CGPoint=dd}{CGSize=dd}},?,N

- (id)initWithContentView:(id)arg1;

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

