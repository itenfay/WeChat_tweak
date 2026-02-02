//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveRewardGiftExtInfo, MMFinderLiveRewardGiftItem, NSArray, NSString, WCFinderContact;

@protocol MMFinderLiveRewardSendingExt <NSObject>

@optional
- (void)onSendingFreeGiftFailed:(MMFinderLiveRewardGiftItem *)arg1 giftIdsToReadd:(NSArray *)arg2;
- (void)onSendingFreeGiftSuccess:(MMFinderLiveRewardGiftItem *)arg1 count:(unsigned long long)arg2;
- (void)onSendingGiftBatchFinish:(MMFinderLiveRewardGiftItem *)arg1 rewardRecipientContact:(WCFinderContact *)arg2 sendingComboId:(NSString *)arg3 comboGiftCount:(unsigned long long)arg4 extInfo:(FinderLiveRewardGiftExtInfo *)arg5;
@end

