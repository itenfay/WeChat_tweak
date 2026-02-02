//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, StoreEmotionRewardTipsStatisticsLogicObject;

@interface StoreEmotionRewardMgr
{
    StoreEmotionRewardTipsStatisticsLogicObject *m_rewardTipsStatisticsLogic;
    NSMutableDictionary *_getAllRewardInfoCgiDic;
    NSMutableDictionary *_getPriceOnlyRewardInfoCgiDic;
    NSMutableDictionary *_rewardInfoCacheDic;
}

+ (_Bool)isHideStopShowRewardTipsButton;
+ (_Bool)isCloseReward;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *rewardInfoCacheDic; // @synthesize rewardInfoCacheDic=_rewardInfoCacheDic;
@property(retain, nonatomic) NSMutableDictionary *getPriceOnlyRewardInfoCgiDic; // @synthesize getPriceOnlyRewardInfoCgiDic=_getPriceOnlyRewardInfoCgiDic;
@property(retain, nonatomic) NSMutableDictionary *getAllRewardInfoCgiDic; // @synthesize getAllRewardInfoCgiDic=_getAllRewardInfoCgiDic;
- (void)onGetRewardCgiFailedForUnrewardableWithPid:(id)arg1;
- (void)onGetRewardCgiFailedWithPid:(id)arg1;
- (void)onGetRewardCgiOkWithPid:(id)arg1 Prices:(id)arg2 EmotionReward:(id)arg3;
- (void)onGetRewardCgiOkWithPid:(id)arg1 Prices:(id)arg2 DonorNum:(unsigned int)arg3 Donors:(id)arg4 EmotionReward:(id)arg5;
- (void)setCanShowRewardTips:(_Bool)arg1;
- (void)checkIsNeedShowRewardTipsWithWrap:(id)arg1;
- (void)removeRewardInfoCacheForPid:(id)arg1;
- (void)saveRewardInfo:(id)arg1 toFileWithPid:(id)arg2;
- (id)prepareForRewardWithPid:(id)arg1 needAllInfo:(_Bool)arg2;
- (id)rewardInfoCacheForPid:(id)arg1;
- (void)onServiceInit;
- (_Bool)isCloseRewardTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

