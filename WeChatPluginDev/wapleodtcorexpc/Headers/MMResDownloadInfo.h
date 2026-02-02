//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMResDownloadUrlInfo, NSString;

@interface MMResDownloadInfo
{
    unsigned int resType;
    unsigned int networkType;
    unsigned int scene;
    unsigned int expiredTime;
    unsigned int subType;
    unsigned int retryTime;
    unsigned int reportId;
    unsigned int eid;
    NSString *appId;
    NSString *domain;
    NSString *baseDir;
    NSString *sampleId;
    NSString *packageId;
    MMResDownloadUrlInfo *resUrlInfo;
}

+ (id)swift_eid;
+ (const void *)__wcdb_synthesize_44:(void *)arg1;
+ (const void *)eid;
+ (id)swift_resUrlInfo;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (const void *)resUrlInfo;
+ (id)swift_packageId;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (const void *)packageId;
+ (id)swift_sampleId;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (const void *)sampleId;
+ (id)swift_reportId;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (const void *)reportId;
+ (id)swift_retryTime;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (const void *)retryTime;
+ (id)swift_baseDir;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (const void *)baseDir;
+ (id)swift_domain;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (const void *)domain;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (const void *)appId;
+ (id)swift_subType;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (const void *)subType;
+ (id)swift_expiredTime;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (const void *)expiredTime;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (const void *)scene;
+ (id)swift_networkType;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (const void *)networkType;
+ (id)swift_resType;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (const void *)resType;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int eid; // @synthesize eid;
@property(retain, nonatomic) MMResDownloadUrlInfo *resUrlInfo; // @synthesize resUrlInfo;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId;
@property(nonatomic) unsigned int reportId; // @synthesize reportId;
@property(nonatomic) unsigned int retryTime; // @synthesize retryTime;
@property(retain, nonatomic) NSString *baseDir; // @synthesize baseDir;
@property(retain, nonatomic) NSString *domain; // @synthesize domain;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(nonatomic) unsigned int subType; // @synthesize subType;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(nonatomic) unsigned int networkType; // @synthesize networkType;
@property(nonatomic) unsigned int resType; // @synthesize resType;
- (id)resourceFilePath;
- (id)resourceDirectory;

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

