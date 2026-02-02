//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface GameLifeDb : NSObject
{
    WCTDatabase *_dataBase;
    WCTTable *_gameLifeContactTable;
    WCTTable *_gameLifeSessionInfoTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *gameLifeSessionInfoTable; // @synthesize gameLifeSessionInfoTable=_gameLifeSessionInfoTable;
@property(retain, nonatomic) WCTTable *gameLifeContactTable; // @synthesize gameLifeContactTable=_gameLifeContactTable;
@property(retain, nonatomic) WCTDatabase *dataBase; // @synthesize dataBase=_dataBase;
- (id)getSessionInfoTable;
- (id)getContactTable;
- (id)createTableWithTableName:(id)arg1 objectClass:(Class)arg2;
- (_Bool)createGameLifeSessionInfoTable;
- (_Bool)createGameLifeContactTable;
- (id)getDbPath;
- (void)testClearDB;
- (void)setupDbBase;
- (void)dealloc;
- (id)init;

@end

