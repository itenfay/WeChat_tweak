//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface ForwardMsgSpamDb : NSObject
{
    WCTDatabase *_db;
    WCTTable *_table;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *table; // @synthesize table=_table;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (_Bool)saveToDb:(id)arg1;
- (id)queryByMsgId:(id)arg1;
- (_Bool)createTable;
- (id)getDbPath;
- (void)closeDb;
- (_Bool)initDb;

@end

