//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveRewardGiftNotificationContainerView;

@protocol MMLiveRewardGiftNotificationContainerViewDelegate <NSObject>

@optional
- (void)onLiveRewardGiftNotificationContainerViewNeedUpdateLayout:(MMLiveRewardGiftNotificationContainerView *)arg1;
- (void)onLiveRewardGiftNotificationContainerViewDidHideGift:(MMLiveRewardGiftNotificationContainerView *)arg1;
- (void)onLiveRewardGiftNotificationContainerViewWillShowGift:(MMLiveRewardGiftNotificationContainerView *)arg1;
@end

