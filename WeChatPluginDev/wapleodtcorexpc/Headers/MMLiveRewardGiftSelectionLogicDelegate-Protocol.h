//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveRewardGiftExtInfo, MMFinderLiveRewardGiftItem, MMLiveRewardGiftSelectionView;

@protocol MMLiveRewardGiftSelectionLogicDelegate <NSObject>

@optional
- (void)onBuyCoin:(MMLiveRewardGiftSelectionView *)arg1 rechargeScene:(unsigned int)arg2;
- (void)onNeedBuyCoin:(MMLiveRewardGiftSelectionView *)arg1 currentBalance:(long long)arg2;
- (void)onSendingRewardGiftDirectly:(MMFinderLiveRewardGiftItem *)arg1 rewardExtInfo:(FinderLiveRewardGiftExtInfo *)arg2 comboGiftCount:(unsigned int)arg3 currentBalance:(long long)arg4 wecoinBalanceUpdated:(_Bool)arg5 targetSendMoreBubbleHost:(unsigned long long)arg6;
- (_Bool)onSelectRewardGift:(MMFinderLiveRewardGiftItem *)arg1 rewardExtInfo:(FinderLiveRewardGiftExtInfo *)arg2 currentBalance:(long long)arg3 wecoinBalanceUpdated:(_Bool)arg4 skipRewardQuotaCheck:(_Bool)arg5 targetSendMoreBubbleHost:(unsigned long long)arg6;
@end

