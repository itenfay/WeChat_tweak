//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableDictionary, NSString;

@interface WCTimelineTrashMgr
{
    _Bool _enable;
    NSMutableDictionary *_trashMap;
    NSMutableDictionary *_idMap;
    NSMutableDictionary *_exposeMap;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *exposeMap; // @synthesize exposeMap=_exposeMap;
@property(retain, nonatomic) NSMutableDictionary *idMap; // @synthesize idMap=_idMap;
@property(retain, nonatomic) NSMutableDictionary *trashMap; // @synthesize trashMap=_trashMap;
- (id)extraImageDraftPaths:(id)arg1;
- (_Bool)isEnable;
- (id)genReportData:(id)arg1;
- (void)clearExpiredDisplayCanReEditItemIfNeeded;
- (void)stopTimerCheck;
- (void)startTimerCheckIfNeeded;
- (void)removeModelWithLocalId:(id)arg1 svrId:(id)arg2 shouldCleanLocalData:(_Bool)arg3;
- (void)clearAllDisplayCanReEditItemAndReloadIfNeeded:(_Bool)arg1 shouldCleanLocalData:(_Bool)arg2;
- (id)clearExpiredRecyclableArchive;
- (void)clearExpiredRecyclableItem:(id)arg1;
- (void)clearAllExpiredRecyclableItem;
- (id)getSessionId:(unsigned long long)arg1;
- (id)getCanReEditModel;
- (void)reportClick:(id)arg1 nextAction:(unsigned int)arg2;
- (void)tryReportExpose;
- (void)recordExpose:(id)arg1;
- (id)getReferenceImageFiles;
- (void)clearTrashWithItemID:(id)arg1;
- (void)clearAllDisplayCanReEditItem;
- (_Bool)updateTrashModelForDataItem:(id)arg1 withSightDraft:(id)arg2;
- (void)updateTrashModelWithLocalItem:(id)arg1 andSvrItem:(id)arg2;
- (id)recoverDraftFromTrash:(id)arg1 forwardItem:(id *)arg2 reportData:(id *)arg3;
- (void)recoverDataForTrashModel:(id)arg1 fromDataItem:(id)arg2;
- (void)copyToTrash:(id)arg1 draftController:(id)arg2 forwardItem:(id)arg3 trashReportData:(id)arg4;
- (void)copyToTrash:(id)arg1 draftController:(id)arg2 trashReportData:(id)arg3;
- (id)getTrashPlaceHolderItem;
- (void)throwIntoTrash:(id)arg1;
- (void)dealloc;
- (void)loadCacheFromFile:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

