//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFullScreenItemView, NSString, SimpleImgInfo, UIView;

@protocol FavImageFullScreenViewContainerDelegate <NSObject>
- (_Bool)needAsyncDoAnimationHideDidStopHandle;
- (struct CGRect)getOriginImageViewRectWithSimpleImgInfo:(SimpleImgInfo *)arg1;
- (void)onFullScreenItemViewShowWithImgInfo:(SimpleImgInfo *)arg1;
- (UIView *)checkOriginImgViewWhenAnimationHideWith:(SimpleImgInfo *)arg1;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (_Bool)isVideoNeedLazyDownload:(NSString *)arg1;
- (void)tryToDownloadVideoWith:(SimpleImgInfo *)arg1;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onWillLongPress:(UIView *)arg1 touchPoint:(struct CGPoint)arg2 onImage:(SimpleImgInfo *)arg3;
- (void)onLongPressEvent:(MMFullScreenItemView *)arg1 onImage:(SimpleImgInfo *)arg2;
- (_Bool)allowAnimationOnLandscape;
- (_Bool)useBackgroundAnimation;
- (double)animationDuration;
- (_Bool)useAlphaAnimation;
- (_Bool)shouldAnimationWhenHide;
- (void)onAnimateFadeOut;
- (void)animationHideWithRotate;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
@end

