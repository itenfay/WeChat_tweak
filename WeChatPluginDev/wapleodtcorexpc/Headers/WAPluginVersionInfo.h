//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAPluginVersionInfo
{
    NSString *_appId;
    unsigned long long _version;
    NSString *_customVersion;
    NSString *_packageCheckSum;
}

+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (id)swift_packageCheckSum;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)packageCheckSum;
+ (id)swift_customVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)customVersion;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)version;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *packageCheckSum; // @synthesize packageCheckSum=_packageCheckSum;
@property(retain, nonatomic) NSString *customVersion; // @synthesize customVersion=_customVersion;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
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

