//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface WCDurationLogDB
{
    NSString *_filePath;
    WCTDatabase *_dataBase;
    WCTTable *_table;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *table; // @synthesize table=_table;
@property(retain, nonatomic) WCTDatabase *dataBase; // @synthesize dataBase=_dataBase;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)close;
- (_Bool)deleteAllItems;
- (id)getAllItems;
- (_Bool)insertItem:(id)arg1;

@end

