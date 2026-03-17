//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIGestureRecognizer, UIImage, UIScrollView, UIView;

@protocol MsgImgFullScreenContainerDelegate <NSObject>
- (UIImage *)imageAtPage:(unsigned int)arg1;
- (UIView *)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;

@optional
- (void)ImageScrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)ImageScrollViewWillBeginZooming:(UIScrollView *)arg1 withView:(UIView *)arg2;
- (NSString *)uuidAtPage:(unsigned int)arg1;
- (NSString *)imagePathAtPage:(unsigned int)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onChangePageEnd;
- (void)onChangePage;
- (void)multiImageScrollViewDidEndScrolling;
- (void)accessibilityScroll;
- (void)multiImageScrollViewDidScroll;
- (void)multiImageScrollViewWillBeginDragging;
- (void)onLongPressBegin:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)onDoubleTap:(UIGestureRecognizer *)arg1;
- (void)onSingleTap:(UIGestureRecognizer *)arg1;
@end

