//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WePkgRegularConfigExt;

@interface WePkgRegularConfigTable
{
    unsigned int _pkgType;
    NSString *_pkgId;
    NSString *_appId;
    NSString *_entranceDomain;
    WePkgRegularConfigExt *_ext;
}

+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_ext;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)ext;
+ (id)swift_entranceDomain;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)entranceDomain;
+ (id)swift_pkgType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)pkgType;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)appId;
+ (id)swift_pkgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)pkgId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WePkgRegularConfigExt *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *entranceDomain; // @synthesize entranceDomain=_entranceDomain;
@property(nonatomic) unsigned int pkgType; // @synthesize pkgType=_pkgType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
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

