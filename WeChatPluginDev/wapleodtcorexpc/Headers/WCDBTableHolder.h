//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCTDatabase, WCTTable;

@interface WCDBTableHolder : NSObject
{
    WCTDatabase *_database;
    WCTTable *_table;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WCTTable *table; // @synthesize table=_table;
@property(readonly, nonatomic) WCTDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) int dbTag;
- (_Bool)createWithError:(id *)arg1;
- (id)initWithPath:(id)arg1 tableName:(id)arg2 tableClass:(Class)arg3;

@end

