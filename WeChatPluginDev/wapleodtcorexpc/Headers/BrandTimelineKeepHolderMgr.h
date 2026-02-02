//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OrderedDictionary;

@interface BrandTimelineKeepHolderMgr
{
    OrderedDictionary *_cachedWebVCDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *cachedWebVCDict; // @synthesize cachedWebVCDict=_cachedWebVCDict;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)shouldRecoverWebVCInCache:(id)arg1;
- (void)removeWebVCInCacheWithTaskKey:(id)arg1;
- (void)safeSetWebVCToCache:(id)arg1 forKey:(id)arg2;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRecoverTaskData:(id)arg1;
- (_Bool)isViewControllerCached:(id)arg1;
- (_Bool)isViewControllerMinimized:(id)arg1;
- (void)doMinimizeAnimationWithTaskData:(id)arg1 animationView:(id)arg2 fromViewFrame:(struct CGRect)arg3 completion:(CDUnknownBlockType)arg4;
- (void)doMinimizeAnimationWithTaskData:(id)arg1 animationView:(id)arg2 fromViewFrame:(struct CGRect)arg3;
- (_Bool)isTimelineBizName:(id)arg1;
- (id)getBizNameFromWebVC:(id)arg1;
- (_Bool)tryUpdateMinimizeTaskSnapshotWithWebVC:(id)arg1 setVCCache:(_Bool)arg2;
- (_Bool)tryAddMinimizeTaskAndMinimize:(id)arg1;
- (id)minimizeTaskDataWithContact:(id)arg1 recMsgData:(id)arg2 accountData:(id)arg3 appMsg:(id)arg4;
- (id)minimizeTaskDataWithContact:(id)arg1 msgWrap:(id)arg2 andReaderWrap:(id)arg3 andTaskBizName:(id)arg4;
- (id)minimizeTaskDataWithContact:(id)arg1 msgWrap:(id)arg2 andReaderWrap:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

