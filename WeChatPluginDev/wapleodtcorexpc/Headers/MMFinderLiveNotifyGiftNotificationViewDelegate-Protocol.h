//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo, FinderLiveAppMsgLiveRewardInfo, MMFinderLiveNotifyGiftNotificationView;

@protocol MMFinderLiveNotifyGiftNotificationViewDelegate <NSObject>

@optional
- (void)onNotifyGiftNotificationView:(MMFinderLiveNotifyGiftNotificationView *)arg1 didClickNotifyBanner:(FinderJumpInfo *)arg2 rewardInfo:(FinderLiveAppMsgLiveRewardInfo *)arg3;
@end

