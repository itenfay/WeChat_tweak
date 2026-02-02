//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveRewardWishView;

@protocol MMFinderLiveRewardWishViewDelegate <NSObject>

@optional
- (void)onClearCurrentLiveRewardWish:(MMFinderLiveRewardWishView *)arg1;
- (void)onUpdateTargetRewardCount:(MMFinderLiveRewardWishView *)arg1;
- (void)onAddTargetRewardGift:(MMFinderLiveRewardWishView *)arg1;
@end

