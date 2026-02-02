//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSContactDB, FTSContactIndexInfo, NSMutableSet;

@interface FTSContactIndexMgr
{
    NSMutableSet *m_invalidUsernames;
    int *m_unIndexContactCount;
    _Bool m_isIndexing;
    _Bool m_hasCheckIndex;
    _Bool m_shouldUseFTS;
    _Bool *m_indexingType;
    _Bool m_contactHasLoad;
    FTSContactIndexInfo *m_contactIndexInfo;
    _Bool _hasCheckIndexCount;
    FTSContactDB *_ftsContactDB;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasCheckIndexCount; // @synthesize hasCheckIndexCount=_hasCheckIndexCount;
@property(retain, nonatomic) FTSContactDB *ftsContactDB; // @synthesize ftsContactDB=_ftsContactDB;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void)deleteIndexOfContact:(id)arg1;
- (id)getAllIndexRecord;
- (_Bool)existValidIndexOfContact:(id)arg1;
- (void)checkDeleteInvalidIndex;
- (void)markIndexInvalid:(id)arg1;
- (void)checkMissingIndex;
- (void)checkInvalidIndex;
- (void)fireIndexingTaskLoop;
- (id)pathForIndexiInfo;
- (void)markIndexingFinish;
- (void)markIndexingStart;
- (void)updateIndexCount:(id)arg1;
- (void)freeIndexStatus;
- (void)captureIndexStatus;
- (_Bool)hasIndexTask;
- (void)iFTSClearIndex;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)clearIndexRecordWhenRecoverDB;
- (void)iFTSIndexingInit;
- (_Bool)contactShouldUseFTS;
- (_Bool)shouldFireTask;
- (void)dealloc;
- (id)initWithFTSDB:(id)arg1;

@end

