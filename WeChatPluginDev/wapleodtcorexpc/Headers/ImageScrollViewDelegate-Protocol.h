//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetInfo, UIGestureRecognizer, UIScrollView, UIView;

@protocol ImageScrollViewDelegate <NSObject>

@optional
- (void)onUpdateLivePhotoIconDisplayStatus:(MMAssetInfo *)arg1;
- (void)handleLivePhotoLongPress:(long long)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)ImageScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)ImageScrollViewWillBeginDecelerating:(UIScrollView *)arg1;
- (void)ImageScrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)ImageScrollViewWillBeginZooming:(UIScrollView *)arg1 withView:(UIView *)arg2;
- (void)OnLongPressBegin:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onDoubleTap:(UIGestureRecognizer *)arg1;
- (void)onSingleTap:(UIGestureRecognizer *)arg1;
@end

