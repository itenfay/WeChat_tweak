//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WARenderCacheInfo
{
    unsigned int _debugType;
    unsigned int _appVersion;
    unsigned int _lastAccessTime;
    NSString *_username;
    NSString *_pagePath;
    NSString *_pubVersion;
    unsigned long long _cacheSize;
}

+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (id)swift_lastAccessTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)lastAccessTime;
+ (id)swift_cacheSize;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)cacheSize;
+ (id)swift_pubVersion;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)pubVersion;
+ (id)swift_pagePath;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)pagePath;
+ (id)swift_appVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)appVersion;
+ (id)swift_debugType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)debugType;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastAccessTime; // @synthesize lastAccessTime=_lastAccessTime;
@property(nonatomic) unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property(retain, nonatomic) NSString *pubVersion; // @synthesize pubVersion=_pubVersion;
@property(retain, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned int debugType; // @synthesize debugType=_debugType;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

