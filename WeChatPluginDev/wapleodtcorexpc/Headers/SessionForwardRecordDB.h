//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface SessionForwardRecordDB : NSObject
{
    WCTDatabase *_database;
    WCTTable *_forwardRecordTable;
    WCTTable *_forwardRecordItemTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *forwardRecordItemTable; // @synthesize forwardRecordItemTable=_forwardRecordItemTable;
@property(retain, nonatomic) WCTTable *forwardRecordTable; // @synthesize forwardRecordTable=_forwardRecordTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (id)recentForwardRecords;
- (void)setHidden:(_Bool)arg1 forUsername:(id)arg2;
- (void)updateSessionScene:(id)arg1 scene:(unsigned long long)arg2;
- (void)insertSession:(id)arg1 scene:(unsigned long long)arg2;
- (void)deleteExpiredSessionForwardRecord;
- (void)deleteSession:(id)arg1;
- (void)didRecoverDatabase;
- (void)reloadDataBase;
- (void)dealloc;
- (id)init;

@end

