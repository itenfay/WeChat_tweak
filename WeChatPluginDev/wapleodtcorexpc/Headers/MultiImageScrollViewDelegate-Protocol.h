//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetInfo, NSString, UIGestureRecognizer, UIImage, UIScrollView, UIView;

@protocol MultiImageScrollViewDelegate <NSObject>
- (_Bool)ignorePageIndexTitle;
- (UIImage *)imageAtPage:(unsigned int)arg1;
- (UIView *)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;

@optional
- (void)onUpdateLivePhotoIconDisplayStatus:(MMAssetInfo *)arg1;
- (void)handleLivePhotoLongPress:(long long)arg1;
- (void)onScrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)onScrollViewWillBeginZooming:(UIScrollView *)arg1 withView:(UIView *)arg2;
- (void)onFullScreenItemDragCancel;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (NSString *)imagePathAtPage:(unsigned int)arg1;
- (void)onChangePage;
- (void)multiImageScrollViewDidEndDecelerating;
- (void)multiImageScrollViewWillBeginDragging;
- (void)OnLongPressBegin:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onDoubleTap:(UIGestureRecognizer *)arg1;
- (void)onSingleTap:(UIGestureRecognizer *)arg1;
@end

