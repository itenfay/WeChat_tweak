//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString, OrderedDictionary;

@interface WeNoteMinimizeKeeperMgr
{
    NSRecursiveLock *_lock;
    OrderedDictionary *_vcDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *vcDic; // @synthesize vcDic=_vcDic;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)onMemoryWarning:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)onDirectToNoteViewControllerWithMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3 bFromUsedTask:(_Bool)arg4;
- (void)onEnterRecentUsedTask:(id)arg1;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)presentMinimizeViewController:(id)arg1 key:(id)arg2 openContext:(id)arg3;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRecoverTaskData:(id)arg1;
- (id)minimizePendingTaskContextWithTaskBizKey:(id)arg1 generateType:(unsigned long long)arg2 weNoteVC:(id)arg3;
- (void)tryRemoveRecentHistoryForBizKey:(id)arg1;
- (void)tryRemoveMinimizeTaskForBizKey:(id)arg1;
- (void)updateMinimizedViewController:(id)arg1 ofTaskData:(id)arg2;
- (void)minimizeViewController:(id)arg1 ofTaskData:(id)arg2;
- (id)viewControllerForBizTaskKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

