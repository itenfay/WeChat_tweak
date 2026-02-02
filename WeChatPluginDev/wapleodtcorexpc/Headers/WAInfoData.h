//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CommRequestSource, NSArray, NSString;

@interface WAInfoData
{
    _Bool _autoUpdateForPlugin;
    _Bool _semverSatisfied;
    _Bool _ignorePackageCheckSumOnDebugType;
    _Bool _hasDownloadPatchData;
    _Bool _isDownloadUrlFromConcurrentPrefetch;
    _Bool _needForceLatestVersion;
    _Bool _checkShouldDownloadFullPkgByInvalidateCodeCmd;
    unsigned int _updateTime;
    unsigned int _packageSize;
    unsigned int _versionStatus;
    unsigned int _appServiceType;
    unsigned int _templateID;
    unsigned int _debugModeType;
    unsigned int _oldExistVersion;
    unsigned int _downloadDataSize;
    unsigned int _debugDevKey;
    unsigned int _fromScene;
    unsigned int _parentDebugModeType;
    unsigned int _parentAppServiceType;
    NSString *_appID;
    NSString *_username;
    unsigned long long _version;
    NSString *_packageCheckSum;
    NSString *_realAppId;
    NSString *_moduleName;
    unsigned long long _packageType;
    unsigned long long _encryptType;
    NSString *_versionDesc;
    NSString *_withoutLibMd5;
    NSArray *_arrPluginCodeInfo;
    NSString *_prefixPathForPluginCode;
    NSArray *_arrWidgetInfo;
    NSString *_customVersion;
    NSString *_semver;
    NSString *_withoutLibUrl;
    NSString *_downloadUrl;
    NSString *_debugDownloadUrl;
    CommRequestSource *_requestSource;
    unsigned long long _startDownloadTimeStampInMs;
    unsigned long long _endDownloadTimeStampInMs;
    unsigned long long _rawDownloadSize;
    NSString *_parentAppid;
    unsigned long long _parentVersion;
    NSString *_needBackupDomain;
}

+ (_Bool)isPackageTypeWithoutMultiPluginPkg:(unsigned long long)arg1;
+ (_Bool)isPackageTypeWithoutSinglePluginPkg:(unsigned long long)arg1;
+ (_Bool)isPackageTypeWithoutPluginPkg:(unsigned long long)arg1;
+ (_Bool)isPackageTypePluginPkg:(unsigned long long)arg1;
+ (_Bool)isPackageTypeModulePkg:(unsigned long long)arg1;
+ (_Bool)isPackageTypeFullPkg:(unsigned long long)arg1;
+ (int)transferLocalPackageTypeToServer:(unsigned long long)arg1;
+ (unsigned long long)transferServerPackageTypeToLocal:(int)arg1;
+ (id)getEncryptTypeString:(unsigned long long)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (id)swift_semver;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)semver;
+ (id)swift_templateID;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)templateID;
+ (id)swift_customVersion;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)customVersion;
+ (id)swift_autoUpdateForPlugin;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)autoUpdateForPlugin;
+ (id)swift_arrWidgetInfo;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)arrWidgetInfo;
+ (id)swift_prefixPathForPluginCode;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)prefixPathForPluginCode;
+ (id)swift_arrPluginCodeInfo;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)arrPluginCodeInfo;
+ (id)swift_withoutLibMd5;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)withoutLibMd5;
+ (id)swift_encryptType;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)encryptType;
+ (id)swift_appServiceType;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)appServiceType;
+ (id)swift_packageType;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)packageType;
+ (id)swift_moduleName;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)moduleName;
+ (id)swift_realAppId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)realAppId;
+ (id)swift_versionStatus;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)versionStatus;
+ (id)swift_packageCheckSum;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)packageCheckSum;
+ (id)swift_packageSize;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)packageSize;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)version;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)username;
+ (id)swift_appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool checkShouldDownloadFullPkgByInvalidateCodeCmd; // @synthesize checkShouldDownloadFullPkgByInvalidateCodeCmd=_checkShouldDownloadFullPkgByInvalidateCodeCmd;
@property(copy, nonatomic) NSString *needBackupDomain; // @synthesize needBackupDomain=_needBackupDomain;
@property(nonatomic) _Bool needForceLatestVersion; // @synthesize needForceLatestVersion=_needForceLatestVersion;
@property(nonatomic) unsigned int parentAppServiceType; // @synthesize parentAppServiceType=_parentAppServiceType;
@property(nonatomic) unsigned int parentDebugModeType; // @synthesize parentDebugModeType=_parentDebugModeType;
@property(nonatomic) unsigned long long parentVersion; // @synthesize parentVersion=_parentVersion;
@property(retain, nonatomic) NSString *parentAppid; // @synthesize parentAppid=_parentAppid;
@property(nonatomic) unsigned long long rawDownloadSize; // @synthesize rawDownloadSize=_rawDownloadSize;
@property(nonatomic) unsigned long long endDownloadTimeStampInMs; // @synthesize endDownloadTimeStampInMs=_endDownloadTimeStampInMs;
@property(nonatomic) unsigned long long startDownloadTimeStampInMs; // @synthesize startDownloadTimeStampInMs=_startDownloadTimeStampInMs;
@property(nonatomic) _Bool isDownloadUrlFromConcurrentPrefetch; // @synthesize isDownloadUrlFromConcurrentPrefetch=_isDownloadUrlFromConcurrentPrefetch;
@property(retain, nonatomic) CommRequestSource *requestSource; // @synthesize requestSource=_requestSource;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) unsigned int debugDevKey; // @synthesize debugDevKey=_debugDevKey;
@property(retain, nonatomic) NSString *debugDownloadUrl; // @synthesize debugDownloadUrl=_debugDownloadUrl;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic) _Bool hasDownloadPatchData; // @synthesize hasDownloadPatchData=_hasDownloadPatchData;
@property(nonatomic) unsigned int downloadDataSize; // @synthesize downloadDataSize=_downloadDataSize;
@property(nonatomic) _Bool ignorePackageCheckSumOnDebugType; // @synthesize ignorePackageCheckSumOnDebugType=_ignorePackageCheckSumOnDebugType;
@property(nonatomic) unsigned int oldExistVersion; // @synthesize oldExistVersion=_oldExistVersion;
@property(nonatomic) unsigned int debugModeType; // @synthesize debugModeType=_debugModeType;
@property(retain, nonatomic) NSString *withoutLibUrl; // @synthesize withoutLibUrl=_withoutLibUrl;
@property(nonatomic) unsigned int templateID; // @synthesize templateID=_templateID;
@property(nonatomic) _Bool semverSatisfied; // @synthesize semverSatisfied=_semverSatisfied;
@property(retain, nonatomic) NSString *semver; // @synthesize semver=_semver;
@property(retain, nonatomic) NSString *customVersion; // @synthesize customVersion=_customVersion;
@property(nonatomic) _Bool autoUpdateForPlugin; // @synthesize autoUpdateForPlugin=_autoUpdateForPlugin;
@property(retain, nonatomic) NSArray *arrWidgetInfo; // @synthesize arrWidgetInfo=_arrWidgetInfo;
@property(retain, nonatomic) NSString *prefixPathForPluginCode; // @synthesize prefixPathForPluginCode=_prefixPathForPluginCode;
@property(retain, nonatomic) NSArray *arrPluginCodeInfo; // @synthesize arrPluginCodeInfo=_arrPluginCodeInfo;
@property(retain, nonatomic) NSString *withoutLibMd5; // @synthesize withoutLibMd5=_withoutLibMd5;
@property(retain, nonatomic) NSString *versionDesc; // @synthesize versionDesc=_versionDesc;
@property(nonatomic) unsigned long long encryptType; // @synthesize encryptType=_encryptType;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(nonatomic) unsigned long long packageType; // @synthesize packageType=_packageType;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(retain, nonatomic) NSString *realAppId; // @synthesize realAppId=_realAppId;
@property(nonatomic) unsigned int versionStatus; // @synthesize versionStatus=_versionStatus;
@property(retain, nonatomic) NSString *packageCheckSum; // @synthesize packageCheckSum=_packageCheckSum;
@property(nonatomic) unsigned int packageSize; // @synthesize packageSize=_packageSize;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)resetOldExistVersionIfFileNotExist;
- (_Bool)autoUpdateOrSemverForPlugin;
- (_Bool)isWeAppExtentedLibPluginPkgCode;
- (_Bool)isWeAppNormalPluginPkgCode;
- (_Bool)shouldAddSubPathPrefixForPluginFile:(id)arg1;
- (id)subPathPrefixForPluginFile:(id)arg1;
- (id)subPathForPluginFile:(id)arg1;
- (id)darkModePluginJsonSubPath;
- (id)pluginJsonSubPath;
- (int)serverPackageType;
- (unsigned long long)localPackageType;
- (_Bool)isWithoutPluginPkg;
- (_Bool)isPluginPkgCode;
- (_Bool)isModulePkgCode;
- (_Bool)isFullPkgCode;
- (_Bool)isPluginCode:(id)arg1;
- (_Bool)isEqualToInfoData:(id)arg1;
- (id)getPluginUnpackPrefixPath;
- (id)initModuleInfoData:(id)arg1;
- (id)initDefaultInfoData;
- (id)init;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;

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

