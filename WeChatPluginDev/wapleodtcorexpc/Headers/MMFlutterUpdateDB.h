//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface MMFlutterUpdateDB
{
    WCTDatabase *_db;
    WCTTable *_tableFlutterUpdateInfo;
}

- (void).cxx_destruct;
@property(retain) WCTTable *tableFlutterUpdateInfo; // @synthesize tableFlutterUpdateInfo=_tableFlutterUpdateInfo;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void)willRecoverDatabase;
- (id)dbPath;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)closeDB;
- (void)openDB;
- (_Bool)updateInfo:(id)arg1;
- (id)getInfoById:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

