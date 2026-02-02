//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, OrderedDictionary;

@interface WCMomentsPredictMgr
{
    OrderedDictionary *_pendingTasks;
    OrderedDictionary *_runningTasks;
    NSMutableDictionary *_cachedPredictedResults;
}

- (void).cxx_destruct;
- (void)handleVideoSourcePredictTaskDidComplete:(id)arg1;
- (id)predictVideoSourceWithDataItems:(id)arg1;
- (_Bool)predictVideoSourceWithDataItem:(id)arg1;
- (_Bool)predictVideoSourceWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (id)getCachedOrCreatePredictedResultWithTid:(id)arg1 mid:(id)arg2;
- (id)getCachedPredictedResultWithTid:(id)arg1 mid:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)_checkNextTask;
- (void)checkTasks;
- (void)taskDidComplete:(id)arg1;
- (void)addTask:(id)arg1;
- (void)initPredictor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

