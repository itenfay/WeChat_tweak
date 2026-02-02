//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface WCAdDB : NSObject
{
    WCTDatabase *_adDB;
    WCTTable *_pullRecordTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *pullRecordTable; // @synthesize pullRecordTable=_pullRecordTable;
@property(retain, nonatomic) WCTDatabase *adDB; // @synthesize adDB=_adDB;
- (id)getWCDBPath;
- (void)createPullRecordTable;
- (void)createTables;
- (void)initDB;
- (void)dealloc;
- (id)init;
- (void)cleanPullRecordInfo;
- (id)fetchPullRecordList:(unsigned int)arg1;
- (void)setPullRecordInvalid:(id)arg1 isAsync:(_Bool)arg2 snsId:(id)arg3;
- (void)savePullRecordInfo:(id)arg1 sessionKey:(id)arg2 isAsync:(_Bool)arg3;

@end

