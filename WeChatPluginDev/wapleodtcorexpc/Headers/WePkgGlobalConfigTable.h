//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WePkgGlobalConfigTable
{
    unsigned int _lastCheckUpdateTimestamp;
    NSString *_pkgId;
    NSString *_lastCheckUpdateVersion;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_lastCheckUpdateVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)lastCheckUpdateVersion;
+ (id)swift_lastCheckUpdateTimestamp;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)lastCheckUpdateTimestamp;
+ (id)swift_pkgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)pkgId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastCheckUpdateVersion; // @synthesize lastCheckUpdateVersion=_lastCheckUpdateVersion;
@property(nonatomic) unsigned int lastCheckUpdateTimestamp; // @synthesize lastCheckUpdateTimestamp=_lastCheckUpdateTimestamp;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;

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

