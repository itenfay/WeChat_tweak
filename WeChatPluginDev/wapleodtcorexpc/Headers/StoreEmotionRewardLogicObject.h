//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, EmotionRewardExtInfo, EmotionRewardResponseInfo, MMUIViewController, NSString, StoreEmotionRewardAskForRewardCgi, WCPayPayMoneyLogic;

@interface StoreEmotionRewardLogicObject
{
    EmoticonStoreItem *m_storeItem;
    EmotionRewardResponseInfo *m_rewardInfo;
    EmotionRewardExtInfo *m_extInfo;
    MMUIViewController *m_rootViewController;
    MMUIViewController *m_askForRewardViewController;
    StoreEmotionRewardAskForRewardCgi *m_askForRewardCgi;
    WCPayPayMoneyLogic *m_payLogic;
    _Bool m_isAskingForReward;
    unsigned long long m_rewardResult;
}

- (void).cxx_destruct;
- (void)call:(id)arg1;
- (id)getViewController;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onAskForRewardCgiFailWithPid:(id)arg1;
- (void)onAskForRewardCgiOkWithPid:(id)arg1 AndReqKey:(id)arg2;
- (void)presentThanksViewController;
- (void)finishReward;
- (void)cancelReward;
- (_Bool)isOnWeChatPay;
- (_Bool)askForRewardWithPrice:(id)arg1 FromViewController:(id)arg2;
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2 FromRootViewController:(id)arg3 extInfo:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

