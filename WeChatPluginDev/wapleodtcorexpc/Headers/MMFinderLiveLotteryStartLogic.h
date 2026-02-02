//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSString;

@interface MMFinderLiveLotteryStartLogic : NSObject
{
    _Bool _saveToLotteryPanel;
    CDUnknownBlockType _loadingBlock;
    CDUnknownBlockType _stopLoadingBlock;
    MMFinderLiveTaskId *_taskId;
    NSString *_billNo;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) _Bool saveToLotteryPanel; // @synthesize saveToLotteryPanel=_saveToLotteryPanel;
@property(retain, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType stopLoadingBlock; // @synthesize stopLoadingBlock=_stopLoadingBlock;
@property(copy, nonatomic) CDUnknownBlockType loadingBlock; // @synthesize loadingBlock=_loadingBlock;
- (void)pollingLotteryGiftPackageOrderBillStatus;
- (id)liveTask;
- (void)consumeDidCancel:(id)arg1;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeCoinWithBillNo:(id)arg1 respBuff:(id)arg2 totalWecoinAmount:(long long)arg3;
- (void)startLotteryWithCreateInfo:(id)arg1 saveToLotteryPanel:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

