//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, StoreEmotionRewardAskForRewardCgi, WCPayPayMoneyLogic;

@interface LiteAppJsApiEmoticonReward
{
    NSString *_productId;
    StoreEmotionRewardAskForRewardCgi *_rewardCgi;
    WCPayPayMoneyLogic *_payLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayPayMoneyLogic *payLogic; // @synthesize payLogic=_payLogic;
@property(retain, nonatomic) StoreEmotionRewardAskForRewardCgi *rewardCgi; // @synthesize rewardCgi=_rewardCgi;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void)endWithCancel;
- (void)endWithOK;
- (id)getViewController;
- (void)call:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onAskForRewardCgiFailWithPid:(id)arg1;
- (void)onAskForRewardCgiOkWithPid:(id)arg1 AndReqKey:(id)arg2;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

