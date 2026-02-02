//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveTask, NSMutableDictionary, NSString;

@interface MMFinderLiveGlobalRankSignMgr
{
    unsigned long long _currAnimatedRankSignCnt;
    NSMutableDictionary *_animatingRankSignDict;
    NSMutableDictionary *_pendingRankSignDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pendingRankSignDict; // @synthesize pendingRankSignDict=_pendingRankSignDict;
@property(retain, nonatomic) NSMutableDictionary *animatingRankSignDict; // @synthesize animatingRankSignDict=_animatingRankSignDict;
@property(nonatomic) unsigned long long currAnimatedRankSignCnt; // @synthesize currAnimatedRankSignCnt=_currAnimatedRankSignCnt;
- (void)invokeMonitor;
- (void)contineMonitor;
- (void)stopMonitor;
- (void)startMonitor;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onLiveTaskEnterLive:(id)arg1;
@property(readonly, nonatomic) MMLiveTask *currentLiveTask;
@property(readonly, nonatomic) unsigned long long maxAnimationInvokeCnt;
- (id)getPendingRankSignListWithTaskId:(id)arg1 autoCreate:(_Bool)arg2;
- (id)getAnimatingRankSignListWithTaskId:(id)arg1 autoCreate:(_Bool)arg2;
- (void)checkCurrentRankSignRecordsValid:(id)arg1;
- (void)removeRankSignViewFromPendingList:(id)arg1 taskId:(id)arg2;
- (void)removeRankSignViewFromAnimatingList:(id)arg1 taskId:(id)arg2;
- (_Bool)isAnimatingRankSignListOverMaxLimit:(id)arg1;
- (void)tryToInvokeNextAnimationWithTaskId:(id)arg1;
- (void)innerApplyToInvokeAnimation:(id)arg1 maxDuration:(double)arg2 taskId:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (_Bool)checkRankSignViewIsAnimating:(id)arg1 taskId:(id)arg2;
- (void)decreaseAnimatedRankSignCnt;
- (void)increaseAnimatedRankSignCnt;
- (void)cancelApplyAndInvoke:(id)arg1 taskId:(id)arg2;
- (void)applyToInvokeAnimation:(id)arg1 maxDuration:(double)arg2 taskId:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)unRegisterExtension;
- (void)registerExtension;
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

