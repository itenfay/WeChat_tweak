//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveDropGiftViewModel, MMFinderLiveRewardGiftItem, NSData, NSError, NSString;

@protocol MMFinderLiveDropGiftViewModelDelegate <NSObject>
- (void)onSendDeliveryProcess:(MMFinderLiveDropGiftViewModel *)arg1 error:(NSError *)arg2 isLocalSuccess:(_Bool)arg3;
- (void)onGetGiftDetail:(NSString *)arg1 giftItem:(MMFinderLiveRewardGiftItem *)arg2 rewardExtInfo:(NSData *)arg3 error:(NSError *)arg4;
- (void)onDropGiftViewDisplayStatusChange:(MMFinderLiveDropGiftViewModel *)arg1 needShow:(_Bool)arg2;
@end

