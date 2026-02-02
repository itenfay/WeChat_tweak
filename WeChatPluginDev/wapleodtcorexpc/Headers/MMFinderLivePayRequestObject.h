//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSData, NSError, NSString;
@protocol MMFinderLivePayMgrExt, MMPageSheetProvider;

@interface MMFinderLivePayRequestObject : NSObject
{
    _Bool _skipBuyCoinConfirmation;
    _Bool _performBalanceCheck;
    _Bool _differentialTopUp;
    unsigned int _wecoinAmount;
    int _rechargeScene;
    MMFinderLiveTaskId *_taskId;
    NSString *_requestId;
    unsigned long long _sendRequestTime;
    NSString *_requestBillNo;
    NSData *_requestBuffer;
    NSData *_rewardExtInfo;
    NSError *_requestError;
    NSString *_comboId;
    CDUnknownBlockType _completionBlock;
    id <MMFinderLivePayMgrExt> _logicOberver;
    id <MMPageSheetProvider> _buyCoinFromPage;
    id <MMPageSheetProvider> _consumeFromPage;
    NSString *_referenceId;
}

- (void).cxx_destruct;
@property(nonatomic) int rechargeScene; // @synthesize rechargeScene=_rechargeScene;
@property(nonatomic) _Bool differentialTopUp; // @synthesize differentialTopUp=_differentialTopUp;
@property(retain, nonatomic) NSString *referenceId; // @synthesize referenceId=_referenceId;
@property(nonatomic) _Bool performBalanceCheck; // @synthesize performBalanceCheck=_performBalanceCheck;
@property(nonatomic) _Bool skipBuyCoinConfirmation; // @synthesize skipBuyCoinConfirmation=_skipBuyCoinConfirmation;
@property(nonatomic) __weak id <MMPageSheetProvider> consumeFromPage; // @synthesize consumeFromPage=_consumeFromPage;
@property(nonatomic) __weak id <MMPageSheetProvider> buyCoinFromPage; // @synthesize buyCoinFromPage=_buyCoinFromPage;
@property(nonatomic) __weak id <MMFinderLivePayMgrExt> logicOberver; // @synthesize logicOberver=_logicOberver;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *comboId; // @synthesize comboId=_comboId;
@property(nonatomic) unsigned int wecoinAmount; // @synthesize wecoinAmount=_wecoinAmount;
@property(retain, nonatomic) NSError *requestError; // @synthesize requestError=_requestError;
@property(retain, nonatomic) NSData *rewardExtInfo; // @synthesize rewardExtInfo=_rewardExtInfo;
@property(retain, nonatomic) NSData *requestBuffer; // @synthesize requestBuffer=_requestBuffer;
@property(retain, nonatomic) NSString *requestBillNo; // @synthesize requestBillNo=_requestBillNo;
@property(nonatomic) unsigned long long sendRequestTime; // @synthesize sendRequestTime=_sendRequestTime;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, copy) NSString *description;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeCoinWithProductId:(id)arg1 billNo:(id)arg2 respBuff:(id)arg3;
- (void)retrieveBillToPayWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long buyCoinBusinessId;
- (void)start;
- (void)initDefaultData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

