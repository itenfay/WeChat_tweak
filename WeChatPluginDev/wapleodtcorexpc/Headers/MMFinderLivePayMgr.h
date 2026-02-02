//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePayRequestObject, NSMutableDictionary, NSString;

@interface MMFinderLivePayMgr
{
    NSMutableDictionary *_requestId2PayRequests;
    MMFinderLivePayRequestObject *_currentBuyCoinPayRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePayRequestObject *currentBuyCoinPayRequest; // @synthesize currentBuyCoinPayRequest=_currentBuyCoinPayRequest;
@property(retain, nonatomic) NSMutableDictionary *requestId2PayRequests; // @synthesize requestId2PayRequests=_requestId2PayRequests;
- (id)getLiveTask:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)buyCoinWithPayRequest:(id)arg1 shortage:(unsigned int)arg2;
- (void)payForPaidBarrageWithTaskId:(id)arg1 productId:(id)arg2 rewardProductCount:(unsigned int)arg3 rewardAmountInWecoin:(unsigned int)arg4 clientMsgId:(id)arg5 logicOberver:(id)arg6;
- (void)prepayLiveWithRewardType:(unsigned int)arg1 rewardExtInfo:(id)arg2 taskId:(id)arg3 referenceId:(id)arg4 logicOberver:(id)arg5;
- (void)purchaseChargeableLiveWith:(id)arg1 wecoinAmount:(unsigned int)arg2 logicOberver:(id)arg3;
- (id)deliveryGiftWith:(id)arg1 rewardExtInfo:(id)arg2 logicOberver:(id)arg3;
- (void)purchaseGameTeamupWith:(id)arg1 rewardExtInfo:(id)arg2 logicOberver:(id)arg3;
- (void)joinFanClubWith:(id)arg1 rewardExtInfo:(id)arg2 logicOberver:(id)arg3 pageSheetProvider:(id)arg4;
- (void)startRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

