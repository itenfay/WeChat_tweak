//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, NSData, NSError, NSMutableArray, NSString, PackageResourceInfo_ProductBatchInfo, WCFinderContact;

@interface MMFinderLiveRewardRequestObject : NSObject
{
    _Bool _comboFinished;
    unsigned int _rewardProductCount;
    unsigned int _rewardAmountInWecoin;
    MMFinderLiveTaskId *_taskId;
    WCFinderContact *_rewardRecipientContact;
    MMFinderLiveRewardGiftItem *_rewardGiftItem;
    NSString *_requestId;
    NSString *_rewardComboId;
    NSString *_rewardProductId;
    NSString *_styleId;
    unsigned long long _sendRequestTime;
    NSString *_rewardBillNo;
    NSData *_rewardRequestBuffer;
    NSData *_rewardExtInfo;
    NSError *_requestError;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _successCompletion;
    CDUnknownBlockType _freeGiftFailedBlock;
    NSMutableArray *_rewardPrepareBuff;
    PackageResourceInfo_ProductBatchInfo *_batchInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PackageResourceInfo_ProductBatchInfo *batchInfo; // @synthesize batchInfo=_batchInfo;
@property(retain, nonatomic) NSMutableArray *rewardPrepareBuff; // @synthesize rewardPrepareBuff=_rewardPrepareBuff;
@property(copy, nonatomic) CDUnknownBlockType freeGiftFailedBlock; // @synthesize freeGiftFailedBlock=_freeGiftFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType successCompletion; // @synthesize successCompletion=_successCompletion;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSError *requestError; // @synthesize requestError=_requestError;
@property(retain, nonatomic) NSData *rewardExtInfo; // @synthesize rewardExtInfo=_rewardExtInfo;
@property(retain, nonatomic) NSData *rewardRequestBuffer; // @synthesize rewardRequestBuffer=_rewardRequestBuffer;
@property(retain, nonatomic) NSString *rewardBillNo; // @synthesize rewardBillNo=_rewardBillNo;
@property(nonatomic) _Bool comboFinished; // @synthesize comboFinished=_comboFinished;
@property(nonatomic) unsigned long long sendRequestTime; // @synthesize sendRequestTime=_sendRequestTime;
@property(nonatomic) unsigned int rewardAmountInWecoin; // @synthesize rewardAmountInWecoin=_rewardAmountInWecoin;
@property(nonatomic) unsigned int rewardProductCount; // @synthesize rewardProductCount=_rewardProductCount;
@property(retain, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;
@property(retain, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId=_rewardProductId;
@property(retain, nonatomic) NSString *rewardComboId; // @synthesize rewardComboId=_rewardComboId;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *rewardGiftItem; // @synthesize rewardGiftItem=_rewardGiftItem;
@property(retain, nonatomic) WCFinderContact *rewardRecipientContact; // @synthesize rewardRecipientContact=_rewardRecipientContact;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, copy) NSString *description;
- (void)consumeDidCancel:(id)arg1;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeCoinWithProductId:(id)arg1 billNo:(id)arg2 respBuff:(id)arg3;
- (void)startRewardRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

