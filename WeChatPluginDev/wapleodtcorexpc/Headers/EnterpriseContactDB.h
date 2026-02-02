//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface EnterpriseContactDB
{
    WCTDatabase *m_db;
    WCTTable *m_friendTable;
    WCTTable *m_myTable;
    NSString *_path;
}

- (void).cxx_destruct;
- (id)getTableByName:(id)arg1;
- (void)deleteDB;
- (void)deleteMyContact;
- (_Bool)setMyContact:(id)arg1;
- (id)getMyContact;
- (_Bool)deleteContact:(id)arg1;
- (_Bool)updateContact:(id)arg1;
- (_Bool)batchAddContact:(id)arg1;
- (_Bool)addContact:(id)arg1;
- (id)getAllContacts;
- (id)getContact:(id)arg1;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)closeDB;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

