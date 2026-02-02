//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MagicPkgInfoDBMgr : NSObject
{
    WCTDatabase *_db;
    WCTTable *_pkgInfoTable;
}

+ (id)MagicPkgInfoDBPath;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *pkgInfoTable; // @synthesize pkgInfoTable=_pkgInfoTable;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (void)dealloc;
- (void)removePkgInfo:(id)arg1;
- (id)getPkgUpdateInfo:(id)arg1;
- (id)getMagicPkgList;
- (void)insertPkgUpdateInfo:(id)arg1;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)initDB;
- (id)init;

@end

