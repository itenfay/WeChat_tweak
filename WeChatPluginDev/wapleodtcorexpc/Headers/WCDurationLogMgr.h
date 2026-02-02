//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString, WCDurationLogDB, WCDurationLogItem;

@interface WCDurationLogMgr
{
    _Bool _isUserLogoutInThisSession;
    WCDurationLogItem *_currentLogItem;
    WCDurationLogDB *_dataBase;
    MemoryMappedKV *_mmap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mmap; // @synthesize mmap=_mmap;
@property(nonatomic) _Bool isUserLogoutInThisSession; // @synthesize isUserLogoutInThisSession=_isUserLogoutInThisSession;
@property(retain, nonatomic) WCDurationLogDB *dataBase; // @synthesize dataBase=_dataBase;
@property(retain, nonatomic) WCDurationLogItem *currentLogItem; // @synthesize currentLogItem=_currentLogItem;
- (id)getLogItemDescAtIndex:(long long)arg1;
- (id)getFirstLogItemDesc;
- (void)uploadAllItemsInDB;
- (void)tryUploadAllItemInMMap;
- (void)insertLogItemToMMap:(id)arg1;
- (void)report;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

