//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveBeautyResourcePackageRecord : NSObject
{
    NSString *_recordId;
    unsigned long long _schemaVersion;
    unsigned long long _packageType;
    NSString *_uri;
    NSString *_md5Hash;
    NSString *_instanceId;
    unsigned long long _lastUpdated;
}

+ (id)packageFromRecord:(id)arg1;
+ (id)recordFromPackage:(id)arg1 scopeId:(id)arg2;
+ (id)recordIdWithScopeId:(id)arg1 packageType:(unsigned long long)arg2;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_lastUpdated;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)lastUpdated;
+ (id)swift_instanceId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)instanceId;
+ (id)swift_md5Hash;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)md5Hash;
+ (id)swift_uri;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)uri;
+ (id)swift_packageType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)packageType;
+ (id)swift_schemaVersion;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)schemaVersion;
+ (id)swift_recordId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)recordId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(retain, nonatomic) NSString *md5Hash; // @synthesize md5Hash=_md5Hash;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(nonatomic) unsigned long long packageType; // @synthesize packageType=_packageType;
@property(nonatomic) unsigned long long schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSString *recordId; // @synthesize recordId=_recordId;

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

