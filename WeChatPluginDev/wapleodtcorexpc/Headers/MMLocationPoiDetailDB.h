//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MMLocationPoiDetailDB : NSObject
{
    WCTDatabase *_database;
    WCTTable *_table;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *table; // @synthesize table=_table;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (void)clearData;
- (_Bool)insertOrReplace:(id)arg1;
- (id)getPoiDetail:(id)arg1;
- (void)closeDB;
- (id)pathForDatabase;
- (void)setupDatabase;
- (id)init;

@end

