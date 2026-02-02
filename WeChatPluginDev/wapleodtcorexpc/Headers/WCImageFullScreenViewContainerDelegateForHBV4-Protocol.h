//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, UIViewController, WCDataItem, WCMediaItem;

@protocol WCImageFullScreenViewContainerDelegateForHBV4 <NSObject>
- (void)onAnimateFadeOut;
- (void)onPushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (MMUIViewController *)onGetViewController;
- (void)onExposeWithDataItem:(WCDataItem *)arg1;
- (void)onLongPressedWithMediaItem:(WCMediaItem *)arg1;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
- (void)animationHideWithRotate;
@end

