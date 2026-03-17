//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveRewardGiftItem, MMFinderLiveWishListDetailForAudiencePanel;

@protocol MMFinderLiveWishListDetailForAudiencePanelDelegate <NSObject>

@optional
- (void)onSendAnchorWishGiftWithGiftItem:(MMFinderLiveWishListDetailForAudiencePanel *)arg1 giftItem:(MMFinderLiveRewardGiftItem *)arg2;
@end

