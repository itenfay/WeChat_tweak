//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmotionReward, NSArray, NSString;

@protocol StoreEmotionRewardGetRewardCgiDelegate <NSObject>

@optional
- (void)onGetRewardCgiFailedForUnrewardableWithPid:(NSString *)arg1;
- (void)onGetRewardCgiFailedWithPid:(NSString *)arg1;
- (void)onGetRewardCgiOkWithPid:(NSString *)arg1 Prices:(NSArray *)arg2 EmotionReward:(EmotionReward *)arg3;
- (void)onGetRewardCgiOkWithPid:(NSString *)arg1 Prices:(NSArray *)arg2 DonorNum:(unsigned int)arg3 Donors:(NSArray *)arg4 EmotionReward:(EmotionReward *)arg5;
@end

