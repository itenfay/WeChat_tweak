//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionRewardResponseInfo, NSString;

@protocol IStoreEmotionRewardExt

@optional
- (void)onStoreEmotionRewardCompleteOkWithPid:(NSString *)arg1 RewardInfo:(EmotionRewardResponseInfo *)arg2;
- (void)onGetEmotionRewardFinishedWithPid:(NSString *)arg1 RewardInfo:(EmotionRewardResponseInfo *)arg2;
@end

