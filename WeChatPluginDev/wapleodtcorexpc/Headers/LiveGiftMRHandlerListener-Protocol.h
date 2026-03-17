//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveGiftMagicRewardActionInfo, MMLiveGiftMagicRewardHandler;

@protocol LiveGiftMRHandlerListener <NSObject>

@optional
- (void)onAnimationTimeoutWithHandler:(MMLiveGiftMagicRewardHandler *)arg1;
- (void)onAnimationRepeatWithHandler:(MMLiveGiftMagicRewardHandler *)arg1;
- (void)onAnimationEndWithWithHandler:(MMLiveGiftMagicRewardHandler *)arg1;
- (void)onAnimationCancelWithHandler:(MMLiveGiftMagicRewardHandler *)arg1;
- (void)onAnimationStartWithHandler:(MMLiveGiftMagicRewardHandler *)arg1;
- (void)onResUnLoadedWithHandler:(MMLiveGiftMagicRewardHandler *)arg1;
- (void)onResLoadedWithHandler:(MMLiveGiftMagicRewardHandler *)arg1;
- (void)onAnimationPrepareEditWithHandler:(MMLiveGiftMagicRewardHandler *)arg1 actionInfo:(MMLiveGiftMagicRewardActionInfo *)arg2;
- (void)onAnimationPreparePlayWithHandler:(MMLiveGiftMagicRewardHandler *)arg1 actionInfo:(MMLiveGiftMagicRewardActionInfo *)arg2;
@end

