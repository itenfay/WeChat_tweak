//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMImageScrollViewHelper, NSArray, UIGestureRecognizer, UIScrollView, UIView;

@protocol MMImageScrollViewHelperDelegate <NSObject>

@optional
@property(copy, nonatomic) NSArray *gestureRecognizers;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,C,N

@property(nonatomic) double maximumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) double minimumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) double zoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) struct CGRect frame;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGRect={CGPoint=dd}{CGSize=dd}},?,N

- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
- (void)removeGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)addGestureRecognizer:(UIGestureRecognizer *)arg1;
- (_Bool)imageScrollViewHelper:(MMImageScrollViewHelper *)arg1 shouldIgnoreDoubleTap:(UIGestureRecognizer *)arg2;
- (_Bool)bBanDoubleTap;
- (void)onDoubleTap:(UIGestureRecognizer *)arg1;
- (void)onSingleTap:(UIGestureRecognizer *)arg1;
- (UIScrollView *)getScrollView;
- (UIView *)viewForZooming;
@end

