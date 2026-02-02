//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WebStorageConfigExt;

@interface WebStorageConfigTable
{
    unsigned int _valueSize;
    unsigned int _expireTimestamp;
    unsigned int _lastModifyTime;
    NSString *_appId;
    NSString *_key;
    NSString *_weightStr;
    WebStorageConfigExt *_ext;
}

+ (void)__wcdb_table_constraint_13:(void *)arg1;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (id)swift_ext;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)ext;
+ (id)swift_weightStr;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)weightStr;
+ (id)swift_lastModifyTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)lastModifyTime;
+ (id)swift_expireTimestamp;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)expireTimestamp;
+ (id)swift_valueSize;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)valueSize;
+ (id)swift_key;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)key;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)appId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WebStorageConfigExt *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *weightStr; // @synthesize weightStr=_weightStr;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned int expireTimestamp; // @synthesize expireTimestamp=_expireTimestamp;
@property(nonatomic) unsigned int valueSize; // @synthesize valueSize=_valueSize;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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

