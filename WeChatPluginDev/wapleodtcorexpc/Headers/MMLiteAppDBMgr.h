//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface MMLiteAppDBMgr
{
    WCTDatabase *_db;
    WCTTable *_tableLiteAppInfo;
    WCTTable *_tableLiteAppAuthInfo;
    WCTTable *_tableLiteAppBaseLibInfo;
    WCTTable *_tableIlinkCheckResourceInfo;
    WCTTable *_tableLiteAppConfigInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *tableLiteAppConfigInfo; // @synthesize tableLiteAppConfigInfo=_tableLiteAppConfigInfo;
@property(retain, nonatomic) WCTTable *tableIlinkCheckResourceInfo; // @synthesize tableIlinkCheckResourceInfo=_tableIlinkCheckResourceInfo;
@property(retain, nonatomic) WCTTable *tableLiteAppBaseLibInfo; // @synthesize tableLiteAppBaseLibInfo=_tableLiteAppBaseLibInfo;
@property(retain, nonatomic) WCTTable *tableLiteAppAuthInfo; // @synthesize tableLiteAppAuthInfo=_tableLiteAppAuthInfo;
@property(retain, nonatomic) WCTTable *tableLiteAppInfo; // @synthesize tableLiteAppInfo=_tableLiteAppInfo;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void)willRecoverDatabase;
- (id)dbPath;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)closeDB;
- (void)openDB;
- (_Bool)deleteLiteAppConfigInfo:(id)arg1;
- (id)getLiteAppConfigInfoList;
- (id)getLiteAppGlobalConfigInfo;
- (id)getLiteAppConfigInfo:(id)arg1;
- (_Bool)insertLiteAppConfigInfo:(id)arg1;
- (id)getIlinkCheckResourceInfoList;
- (id)getIlinkCheckResourceInfoList:(id)arg1;
- (_Bool)insertIlinkCheckResourceInfo:(id)arg1;
- (_Bool)deleteIlinkCheckResourceInfo:(id)arg1 resourceName:(id)arg2 resourceVersion:(unsigned long long)arg3;
- (id)getIlinkCheckResourceInfo:(id)arg1 resourceName:(id)arg2 resourceVersion:(unsigned long long)arg3;
- (_Bool)deleteLiteAppBaseLibInfo:(id)arg1;
- (id)getLiteAppBaseLibInfo:(id)arg1;
- (id)getLiteAppBundleBaseLibInfo;
- (id)getLatestLiteAppBaseLibInfo;
- (id)getLiteAppBaseLibList;
- (_Bool)insertLiteAppBaseLibInfo:(id)arg1;
- (id)getLiteAppAuthInfoItemByUrl:(id)arg1;
- (_Bool)insertLiteAppAuthInfoDBItem:(id)arg1;
- (id)getLiteAppList;
- (_Bool)insertLiteAppInfoDBItme:(id)arg1;
- (_Bool)deleteLiteAppInfoItemByAppId:(id)arg1;
- (id)getLiteAppInfoItemByAppId:(id)arg1 forOpen:(_Bool)arg2 reporter:(id)arg3;
- (id)getLiteAppInfoItemByAppId:(id)arg1 forOpen:(_Bool)arg2;
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

