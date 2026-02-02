//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface StrangerContactMgr
{
    _Bool m_bMemCacheNeedReload;
    NSMutableDictionary *m_dicContacts;
    NSMutableDictionary *m_dicLastAccessTime;
    NSMutableDictionary *m_lastUpdateTime;
    NSMutableArray *m_arrQueue;
    NSMutableDictionary *m_dicGetingContacts;
    NSMutableArray *m_arrUploading;
    unsigned int m_uiCurEventID;
}

- (void).cxx_destruct;
- (void)onDeleteContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isBrandModContact:(id)arg1;
- (_Bool)hasBrandIconUrlChange:(id)arg1 andModContact:(id)arg2;
- (void)handleNewContact:(id)arg1;
- (_Bool)InternalUpdateContact:(id)arg1;
- (double)updateLimitDuration;
- (_Bool)checkIfForbiddenGetContact:(id)arg1;
- (void)CheckQueue;
- (id)GetUsrArray;
- (void)updateContactFromContact:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)addContact:(id)arg1;
- (id)getContactByName:(id)arg1;
- (void)SetAccessTime:(id)arg1;
- (_Bool)IsInQueue:(id)arg1;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)clearMemoryCache;
- (void)saveData;
- (void)ReduceCache;
- (void)tryLoadData;
- (id)pathForTimeData;
- (id)pathForOldTimeData;
- (id)pathForData;
- (id)pathForOldData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

