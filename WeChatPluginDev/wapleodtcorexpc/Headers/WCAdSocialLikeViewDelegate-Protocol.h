//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDataItem;

@protocol WCAdSocialLikeViewDelegate <NSObject>

@optional
- (void)onAdFireworkCheerCommentAnimationStarted:(WCDataItem *)arg1;
- (void)onAdLikeButtonSizeChanged:(WCDataItem *)arg1;
- (void)onAdLikeButtonAnimationFinished:(WCDataItem *)arg1;
- (void)onAdLikeButtonAnimationStarted:(WCDataItem *)arg1;
- (void)onAdCommentButtonClicked:(WCDataItem *)arg1;
- (void)onAdLikeButtonClicked:(WCDataItem *)arg1;
- (void)onAdLikeButtonTouched:(WCDataItem *)arg1;
@end

