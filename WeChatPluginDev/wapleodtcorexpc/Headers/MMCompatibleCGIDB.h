//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface MMCompatibleCGIDB
{
    WCTDatabase *m_compatibleCGIDB;
    WCTTable *_m_tableCompatibleCGI;
}

- (void).cxx_destruct;
@property(retain) WCTTable *m_tableCompatibleCGI; // @synthesize m_tableCompatibleCGI=_m_tableCompatibleCGI;
- (_Bool)insertOrReplaceCompatibleCGIData:(id)arg1;
- (_Bool)DeleteCompatibleCGIDataById:(id)arg1;
- (id)GetCompatibleCGIDataById:(id)arg1;
- (id)GetCompatibleCGIDBPath;
- (id)GetCompatibleCGIDBRootDir;
- (id)CreateTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)ReloadDatabase;
- (void)CreateTables;

@end

