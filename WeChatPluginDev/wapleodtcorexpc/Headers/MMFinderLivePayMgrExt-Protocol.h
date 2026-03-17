//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveTaskId, NSError, NSString;

@protocol MMFinderLivePayMgrExt <NSObject>

@optional
- (void)onBugCoinWithError:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 referenceId:(NSString *)arg3;
- (void)onSendPaidBarrageFailWithError:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 clientMsgId:(NSString *)arg3 rewardAmountInWecoin:(unsigned int)arg4;
- (void)onPrepayForLiveWithError:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 referenceId:(NSString *)arg3;
- (void)onPurchaseChargeableLiveWithError:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onDeliveryGiftWithError:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onPurchaseGameTeamupWithError:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onJoinFanClubWithError:(NSError *)arg1 comboId:(NSString *)arg2 taskId:(MMFinderLiveTaskId *)arg3;
@end

