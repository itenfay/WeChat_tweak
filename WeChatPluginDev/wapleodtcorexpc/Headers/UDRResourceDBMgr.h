//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface UDRResourceDBMgr : NSObject
{
    WCTDatabase *_db;
    WCTTable *_resourceTable;
}

+ (id)UDRResourceDBPath;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *resourceTable; // @synthesize resourceTable=_resourceTable;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (void)dealloc;
- (void)removeResourceInfo:(id)arg1;
- (id)getResourceInfo:(id)arg1;
- (id)getResourceList:(id)arg1;
- (id)getAllResource;
- (void)insertResourceInfo:(id)arg1;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)initDB;
- (id)init;

@end

