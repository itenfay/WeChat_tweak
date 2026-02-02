//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface MMFinderLiveOlyBarragePubbleDataMgr
{
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onFinderLiveOlyBarrageDataUpdate:(id)arg1 taskId:(id)arg2;
- (void)updateFinderLiveBarrageDataWithResponse:(id)arg1 andTaskId:(id)arg2;
- (id)convertToCommentDataItemList:(id)arg1 withTaskId:(id)arg2;
- (id)convertToBarrageDataItemList:(id)arg1;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

