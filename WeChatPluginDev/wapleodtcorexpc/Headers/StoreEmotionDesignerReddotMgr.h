//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmptyDesignerPagePidRecord, NSMutableDictionary, NSRecursiveLock, NSString;

@interface StoreEmotionDesignerReddotMgr
{
    NSMutableDictionary *_modelMap;
    NSRecursiveLock *_lock;
    EmptyDesignerPagePidRecord *_emptyPageRecord;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmptyDesignerPagePidRecord *emptyPageRecord; // @synthesize emptyPageRecord=_emptyPageRecord;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *modelMap; // @synthesize modelMap=_modelMap;
- (void)checkDirtyData:(id)arg1;
- (_Bool)isDesignerPageEmpty:(id)arg1;
- (_Bool)isReddotTimeExpired:(unsigned int)arg1 currentTime:(unsigned int)arg2;
- (void)getPersonDesignerAndReddotStatus:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)getPidsWithReddot:(id)arg1;
- (void)removeEmptyDesignerPageCache;
- (void)recordEmptyDesignerPagePid:(id)arg1;
- (_Bool)validUin:(id)arg1;
- (void)flushDesignerInfoAndPidsToFile:(id)arg1;
- (void)clearExpiredReddot;
- (void)clearReddotWithDesignerUin:(id)arg1 andPid:(id)arg2;
- (void)clearReddotWithDesignerUin:(id)arg1;
- (void)updateDesigner:(id)arg1;
- (void)updatePids:(id)arg1 withDesignerUin:(id)arg2 needDiffPid:(_Bool)arg3;
- (void)loadDesignerEmptyPageCache;
- (void)loadDesignerReddotCache;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

