//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFlutterUpdateInfo
{
    NSString *appId;
    NSString *baseId;
    NSString *pId;
    NSString *type;
    NSString *signatrueKey;
    unsigned long long updateTime;
    NSString *md5;
    NSString *path;
}

+ (id)createItem:(id)arg1 baseId:(id)arg2 pId:(id)arg3 md5:(id)arg4 filePath:(id)arg5 signatrueKey:(id)arg6 type:(id)arg7;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_md5;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)md5;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_signatrueKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)signatrueKey;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)type;
+ (id)swift_pId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)pId;
+ (id)swift_baseId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)baseId;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) unsigned long long updateTime; // @synthesize updateTime;
@property(retain, nonatomic) NSString *signatrueKey; // @synthesize signatrueKey;
@property(retain, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSString *pId; // @synthesize pId;
@property(retain, nonatomic) NSString *baseId; // @synthesize baseId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
- (_Bool)isDebug;
- (id)init;
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

