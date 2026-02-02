//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface MsgSolitaireDB
{
    WCTDatabase *_database;
    WCTTable *_analysistable;
    WCTTable *_foldTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *foldTable; // @synthesize foldTable=_foldTable;
@property(retain, nonatomic) WCTTable *analysistable; // @synthesize analysistable=_analysistable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (void)deleteFoldInfosWithMsgWrap:(id)arg1;
- (void)deleteFoldInfosWithChatName:(id)arg1;
- (id)getSolitaireFoldInfoWithChatName:(id)arg1 localId:(unsigned int)arg2 createTime:(unsigned int)arg3;
- (void)insertFoldInfo:(id)arg1;
- (_Bool)createFoldInfoTable;
- (_Bool)deleteSolitaireAnalysisWithObj:(id)arg1;
- (id)getSolitairesAnalysisWithChatName:(id)arg1;
- (_Bool)addSolitaireAnalysisWithChatName:(id)arg1 LocalId:(unsigned int)arg2;
- (_Bool)createAnalysisTable;
- (_Bool)reloadDataBase;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

