//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (ViewFrameGeometry)
- (void)frameIntegral;
- (void)ceilAllSubviews;
- (void)fitTheSubviews;
- (void)fitInSize:(struct CGSize)arg1;
- (void)scaleBy:(double)arg1;
- (void)moveBy:(struct CGPoint)arg1;
- (void)setX:(double)arg1 andY:(double)arg2;
- (struct UIEdgeInsets)realSafeAreaInsets;
@property double right;
@property double bottom;
@property double left;
@property double top;
@property double width;
@property double height;
- (void)setPixelAlignedCenter:(struct CGPoint)arg1;
@property double centerY;
@property double centerX;
@property double y;
@property double x;
@property(readonly) struct CGPoint topRight;
@property(readonly) struct CGPoint bottomLeft;
@property(readonly) struct CGPoint bottomRight;
@property struct CGSize size;
@property struct CGPoint wcOrigin;
@end

