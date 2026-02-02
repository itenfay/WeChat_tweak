//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonDataDB, NSMutableDictionary, NSRecursiveLock, NSString;

@interface EmoticonSetInfoMgr
{
    NSRecursiveLock *_oLock;
    EmoticonDataDB *_oEmoticonPackageDB;
    NSMutableDictionary *_setInfoDic;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *setInfoDic; // @synthesize setInfoDic=_setInfoDic;
@property(retain, nonatomic) EmoticonDataDB *oEmoticonPackageDB; // @synthesize oEmoticonPackageDB=_oEmoticonPackageDB;
@property(retain, nonatomic) NSRecursiveLock *oLock; // @synthesize oLock=_oLock;
- (id)getImageForSetKey:(id)arg1 withType:(unsigned long long)arg2;
- (id)getPanelImageForSetKey:(id)arg1;
- (id)getIconImageForSetKey:(id)arg1;
- (void)updateCachedSetInfo:(id)arg1;
- (void)cleanAllCachedSetInfos;
- (_Bool)delSetInfoFor:(id)arg1;
- (_Bool)delAllSetInfo;
- (id)getAllSetInfo;
- (id)getSetInfoFor:(id)arg1;
- (_Bool)update:(id)arg1 panelUrl:(id)arg2;
- (_Bool)update:(id)arg1 iconUrl:(id)arg2;
- (_Bool)update:(id)arg1 desc:(id)arg2;
- (_Bool)update:(id)arg1 title:(id)arg2;
- (_Bool)addSetInfoWith:(id)arg1 title:(id)arg2 desc:(id)arg3 iconUrl:(id)arg4 panelUrl:(id)arg5;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

