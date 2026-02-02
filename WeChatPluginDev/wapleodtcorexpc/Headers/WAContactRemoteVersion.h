//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAContactRemoteVersion
{
    unsigned int _lastVersion;
    unsigned int _launchFallbackDirectlyMinVersion;
    unsigned int _reportId;
    NSString *_userName;
}

+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_launchFallbackDirectlyMinVersion;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)launchFallbackDirectlyMinVersion;
+ (id)swift_reportId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)reportId;
+ (id)swift_lastVersion;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)lastVersion;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(nonatomic) unsigned int launchFallbackDirectlyMinVersion; // @synthesize launchFallbackDirectlyMinVersion=_launchFallbackDirectlyMinVersion;
@property(nonatomic) unsigned int lastVersion; // @synthesize lastVersion=_lastVersion;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
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

