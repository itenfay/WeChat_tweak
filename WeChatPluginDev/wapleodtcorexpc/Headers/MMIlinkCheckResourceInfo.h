//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface MMIlinkCheckResourceInfo
{
    NSString *projectId;
    NSString *resourceName;
    unsigned long long resourceVersion;
    unsigned long long resourceSize;
    NSString *md5;
    NSString *url;
    unsigned long long createTime;
    unsigned long long baseVersion;
    unsigned long long diffAlgo;
    unsigned long long diffSize;
    NSString *diffMd5;
    NSString *diffUrl;
    long long resourceRet;
    unsigned long long resourceType;
    unsigned long long resourceExpireTime;
    NSArray *_extInfo;
}

+ (void)__wcdb_table_constraint_17:(void *)arg1;
+ (void)__wcdb_table_constraint_16:(void *)arg1;
+ (void)__wcdb_table_constraint_15:(void *)arg1;
+ (id)swift_resourceExpireTime;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)resourceExpireTime;
+ (id)swift_resourceType;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)resourceType;
+ (id)swift_resourceRet;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)resourceRet;
+ (id)swift_diffUrl;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)diffUrl;
+ (id)swift_diffMd5;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)diffMd5;
+ (id)swift_diffSize;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)diffSize;
+ (id)swift_diffAlgo;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)diffAlgo;
+ (id)swift_baseVersion;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)baseVersion;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_url;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)url;
+ (id)swift_md5;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)md5;
+ (id)swift_resourceSize;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)resourceSize;
+ (id)swift_resourceVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)resourceVersion;
+ (id)swift_resourceName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)resourceName;
+ (id)swift_projectId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)projectId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned long long resourceExpireTime; // @synthesize resourceExpireTime;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType;
@property(nonatomic) long long resourceRet; // @synthesize resourceRet;
@property(retain, nonatomic) NSString *diffUrl; // @synthesize diffUrl;
@property(retain, nonatomic) NSString *diffMd5; // @synthesize diffMd5;
@property(nonatomic) unsigned long long diffSize; // @synthesize diffSize;
@property(nonatomic) unsigned long long diffAlgo; // @synthesize diffAlgo;
@property(nonatomic) unsigned long long baseVersion; // @synthesize baseVersion;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) unsigned long long resourceSize; // @synthesize resourceSize;
@property(nonatomic) unsigned long long resourceVersion; // @synthesize resourceVersion;
@property(retain, nonatomic) NSString *resourceName; // @synthesize resourceName;
@property(retain, nonatomic) NSString *projectId; // @synthesize projectId;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

