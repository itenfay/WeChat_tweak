//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WADecryptKeyInfo
{
    unsigned int _appVersion;
    unsigned int _encryptType;
    unsigned int _reportId;
    NSString *_appId;
    NSString *_userName;
    NSString *_decryptKey;
    NSString *_md5;
}

+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (id)swift_reportId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)reportId;
+ (id)swift_md5;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)md5;
+ (id)swift_encryptType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)encryptType;
+ (id)swift_decryptKey;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)decryptKey;
+ (id)swift_appVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)appVersion;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)userName;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int encryptType; // @synthesize encryptType=_encryptType;
@property(retain, nonatomic) NSString *decryptKey; // @synthesize decryptKey=_decryptKey;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

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

