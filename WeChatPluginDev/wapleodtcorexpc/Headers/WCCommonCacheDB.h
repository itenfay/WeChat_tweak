//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface WCCommonCacheDB : NSObject
{
    long long _cacheLimitCount;
    WCTDatabase *_database;
    WCTTable *_cacheTable;
}

+ (id)GetDBPath;
+ (id)GetDBConfigPath;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *cacheTable; // @synthesize cacheTable=_cacheTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
@property(nonatomic) long long cacheLimitCount; // @synthesize cacheLimitCount=_cacheLimitCount;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (void)removeCacheByLRU;
- (void)updateLastUseTime:(id)arg1;
- (void)removeCachesWithAggregateName:(id)arg1;
- (void)removeCachesWithFilePath:(id)arg1;
- (void)removeCachesWithFileMd5:(id)arg1;
- (id)getCacheWithFileMd5:(id)arg1;
- (_Bool)addCommonCacheObj:(id)arg1;
- (_Bool)createCacheTable;
- (void)changeToRelativePath;
- (_Bool)reloadDataBase;
- (id)init;

@end

