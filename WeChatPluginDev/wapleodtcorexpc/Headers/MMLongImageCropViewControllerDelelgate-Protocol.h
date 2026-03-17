//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLongImageCropResult, UIImageView;

@protocol MMLongImageCropViewControllerDelelgate <NSObject>
- (void)onCropViewControllerPopTransitionEnd;
- (void)onCropViewControllerPopTransitionInAnimateDuration;
- (void)onCropViewControllerPopTransitionBegan;
- (void)onCropViewControllerPushTransitionEnd;
- (void)onCropViewControllerPushTransitionInAnimateDuration;
- (UIImageView *)onGetImageViewForTransition;
- (void)onFinishCropImage:(MMLongImageCropResult *)arg1;
@end

