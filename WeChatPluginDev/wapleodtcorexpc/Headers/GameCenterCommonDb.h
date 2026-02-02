//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCTDatabase;

@interface GameCenterCommonDb
{
    WCTDatabase *_dataBase;
    NSMutableDictionary *_tableDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tableDict; // @synthesize tableDict=_tableDict;
@property(retain, nonatomic) WCTDatabase *dataBase; // @synthesize dataBase=_dataBase;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (id)createTableWithTableName:(id)arg1 objectClass:(Class)arg2;
- (id)getTableOfObjectClass:(Class)arg1 customPrefix:(id)arg2;
- (id)getTableOfObjectClass:(Class)arg1;
- (id)getDbPath;
- (void)setupDbBase;
- (void)dealloc;
- (void)deleteChatRoomDB;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

