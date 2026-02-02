//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMResSignatureDataInfos, NSData, NSString;

@interface MMResInfo
{
    _Bool isAutoIncrement;
    _Bool _isEncrypt;
    _Bool _isCompress;
    _Bool _isTemp;
    unsigned int _resInfoId;
    unsigned int _resType;
    unsigned int _accessTime;
    unsigned int _resSubType;
    unsigned int _eid;
    unsigned int _fileId;
    unsigned int _createTime;
    unsigned int _expireTime;
    unsigned int _crc32;
    unsigned int _supportVersion;
    unsigned int _reportId;
    unsigned int _clientVersion;
    unsigned int _consumeTime;
    long long lastInsertedRowID;
    NSString *_resUrlMd5;
    NSString *_appId;
    NSString *_version;
    NSString *_domain;
    NSString *_resMd5;
    NSString *_resOriginalMd5;
    NSString *_resOriginalSha1;
    unsigned long long _size;
    long long _offset;
    long long _chunkLength;
    NSString *_sampleId;
    NSData *_signatureData;
    MMResSignatureDataInfos *_arrSignatureDataInfo;
    unsigned long long _cacheStatus;
}

+ (void)__wcdb_column_constraint_30:(void *)arg1;
+ (id)swift_arrSignatureDataInfo;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (const void *)arrSignatureDataInfo;
+ (id)swift_consumeTime;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (const void *)consumeTime;
+ (id)swift_cacheStatus;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (const void *)cacheStatus;
+ (id)swift_resOriginalSha1;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (const void *)resOriginalSha1;
+ (id)swift_clientVersion;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)clientVersion;
+ (id)swift_resOriginalMd5;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)resOriginalMd5;
+ (id)swift_signatureData;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)signatureData;
+ (id)swift_reportId;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)reportId;
+ (id)swift_sampleId;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)sampleId;
+ (id)swift_eid;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)eid;
+ (id)swift_isTemp;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)isTemp;
+ (id)swift_supportVersion;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)supportVersion;
+ (id)swift_fileId;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)fileId;
+ (id)swift_resSubType;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)resSubType;
+ (id)swift_isCompress;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)isCompress;
+ (id)swift_isEncrypt;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)isEncrypt;
+ (id)swift_chunkLength;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)chunkLength;
+ (id)swift_resType;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)resType;
+ (id)swift_crc32;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)crc32;
+ (id)swift_offset;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)offset;
+ (id)swift_size;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)size;
+ (id)swift_accessTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)accessTime;
+ (id)swift_expireTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)expireTime;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)version;
+ (id)swift_domain;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)domain;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)appId;
+ (id)swift_resMd5;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)resMd5;
+ (id)swift_resUrlMd5;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)resUrlMd5;
+ (id)swift_resInfoId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)resInfoId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int consumeTime; // @synthesize consumeTime=_consumeTime;
@property(nonatomic) unsigned long long cacheStatus; // @synthesize cacheStatus=_cacheStatus;
@property(nonatomic) unsigned int clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) MMResSignatureDataInfos *arrSignatureDataInfo; // @synthesize arrSignatureDataInfo=_arrSignatureDataInfo;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId=_sampleId;
@property(nonatomic) _Bool isTemp; // @synthesize isTemp=_isTemp;
@property(nonatomic) unsigned int supportVersion; // @synthesize supportVersion=_supportVersion;
@property(nonatomic) _Bool isCompress; // @synthesize isCompress=_isCompress;
@property(nonatomic) _Bool isEncrypt; // @synthesize isEncrypt=_isEncrypt;
@property(nonatomic) long long chunkLength; // @synthesize chunkLength=_chunkLength;
@property(nonatomic) unsigned int crc32; // @synthesize crc32=_crc32;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *resOriginalSha1; // @synthesize resOriginalSha1=_resOriginalSha1;
@property(retain, nonatomic) NSString *resOriginalMd5; // @synthesize resOriginalMd5=_resOriginalMd5;
@property(retain, nonatomic) NSString *resMd5; // @synthesize resMd5=_resMd5;
@property(nonatomic) unsigned int fileId; // @synthesize fileId=_fileId;
@property(nonatomic) unsigned int eid; // @synthesize eid=_eid;
@property(nonatomic) unsigned int resSubType; // @synthesize resSubType=_resSubType;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned int accessTime; // @synthesize accessTime=_accessTime;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) unsigned int resType; // @synthesize resType=_resType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *resUrlMd5; // @synthesize resUrlMd5=_resUrlMd5;
@property(nonatomic) unsigned int resInfoId; // @synthesize resInfoId=_resInfoId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSString *localSubPath;
- (void)deleteSelf;
- (_Bool)insertDB;
- (long long)compareAccessTimeByResInfo:(id)arg1;
- (id)initWithDownloadInfo:(id)arg1 dataSize:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

