//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveMilestoneLotteryInfo, FinderLiveMilestoneLotteryMetaInfo, MMFinderLiveMilestoneLotteryCouponInfo, NSString;

@protocol MMFinderLiveMilestoneLotteryViewModelExt <NSObject>

@optional
- (void)onWinnerRedPacketStatusUpdated:(NSString *)arg1;
- (void)onWinnerCouponInfoUpdated:(MMFinderLiveMilestoneLotteryCouponInfo *)arg1 prevInfo:(MMFinderLiveMilestoneLotteryCouponInfo *)arg2 lotteryId:(NSString *)arg3;
- (void)onMilestoneLotteryInfoChanged:(FinderLiveMilestoneLotteryInfo *)arg1 lotteryId:(NSString *)arg2;
- (void)onOngoingLotteryCountdown:(FinderLiveMilestoneLotteryInfo *)arg1 remainingSeconds:(unsigned int)arg2;
- (void)onOngoingMilestoneLotteryInfoUpdated:(FinderLiveMilestoneLotteryInfo *)arg1;
- (void)onOngoingMilestoneLotteryInfoChanged:(FinderLiveMilestoneLotteryInfo *)arg1 prevInfo:(FinderLiveMilestoneLotteryInfo *)arg2;
- (void)onCurrentMilestoneLotteryMetaInfoUpdated:(FinderLiveMilestoneLotteryMetaInfo *)arg1;
- (void)onCurrentMilestoneLotteryMetaInfoChanged:(FinderLiveMilestoneLotteryMetaInfo *)arg1 prevInfo:(FinderLiveMilestoneLotteryMetaInfo *)arg2;
@end

