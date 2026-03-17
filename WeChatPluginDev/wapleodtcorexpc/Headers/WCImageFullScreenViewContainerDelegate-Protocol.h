//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, FavoritesItem, MMUIViewController, NSString, QRCodeInMultiDisplayView, UIImage, UINavigationController, UIViewController, WCDataItem, WCImageFullScreenViewContainer, WCMediaItem;

@protocol WCImageFullScreenViewContainerDelegate <NSObject>
- (UINavigationController *)getPresentedNavigationController;
- (_Bool)imageFullScreenViewContainerIsAppearOnScreen:(WCImageFullScreenViewContainer *)arg1;
- (void)imageFullScreenViewContainerDidClickOriginalArticle:(WCImageFullScreenViewContainer *)arg1;
- (void)onFinishShowMultiQRCodeView;
- (void)onBeginShowMultiQRCodeView:(QRCodeInMultiDisplayView *)arg1;
- (void)onShowTranslateImage:(UIImage *)arg1;
- (void)onFinishAnimatedTranslate;
- (void)onBeginAnimateTranslate;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onShareToOpenSDKWithDataItem:(WCDataItem *)arg1 mediaItem:(WCMediaItem *)arg2;
- (void)onAnimateFadeOut;
- (void)onPresentModalViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)onPushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (MMUIViewController *)onGetViewController;
- (void)onContainerDidZoomWithScale:(double)arg1 andIndex:(unsigned int)arg2;
- (void)onExposeWithDataItem:(WCDataItem *)arg1;
- (void)onLongPressedEditImage:(UIImage *)arg1 atPath:(NSString *)arg2 withFavItem:(FavoritesItem *)arg3 editAtFirst:(_Bool)arg4;
- (void)onLongPressedWithMediaItem:(WCMediaItem *)arg1 contact:(CContact *)arg2;
- (void)onLongPressedAddFav:(FavoritesItem *)arg1;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerCustomShowAnimation;
- (void)onContainerAnimationShowStart;
- (void)animationHideWithRotate;
@end

