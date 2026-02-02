//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableDictionary, NSString, WAInfoData;

@interface MMWebJsBasePkgInfo
{
    _Bool _isDebug;
    NSDictionary *_dicMetaInfo;
    void *_unpackLib;
    WAInfoData *_waInfoData;
    NSString *_md5;
    NSDictionary *_dicVersionJsonInfo;
    NSDictionary *_dicCacheFileInfo;
    NSDictionary *_dicAppConfigInfo;
    NSMutableDictionary *_dicTaskConfig2Path;
}

+ (_Bool)isVersion:(id)arg1 largerThanVersion:(id)arg2;
+ (id)getDicCacheFileInfoFromUnpackLib:(void *)arg1;
+ (id)dataWithFileName:(id)arg1 unpackPkg:(void *)arg2;
+ (id)pkgWithFilePath:(id)arg1;
+ (id)pkgMetaInfoKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicTaskConfig2Path; // @synthesize dicTaskConfig2Path=_dicTaskConfig2Path;
@property(retain, nonatomic) NSDictionary *dicAppConfigInfo; // @synthesize dicAppConfigInfo=_dicAppConfigInfo;
@property(retain, nonatomic) NSDictionary *dicCacheFileInfo; // @synthesize dicCacheFileInfo=_dicCacheFileInfo;
@property(retain, nonatomic) NSDictionary *dicVersionJsonInfo; // @synthesize dicVersionJsonInfo=_dicVersionJsonInfo;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) WAInfoData *waInfoData; // @synthesize waInfoData=_waInfoData;
@property(nonatomic) void *unpackLib; // @synthesize unpackLib=_unpackLib;
@property(retain, nonatomic) NSDictionary *dicMetaInfo; // @synthesize dicMetaInfo=_dicMetaInfo;
- (long long)pubLibMaxClientVersion;
- (long long)pubLibMinClientVersion;
- (id)pubLibVersionStr;
- (id)minPubLibVersionRequired;
- (id)appConfigVersionStr;
- (long long)minClientVersionRequired;
- (long long)version;
- (id)getFileStrWithPath:(id)arg1;
- (id)getFileDataWithPath:(id)arg1;
- (_Bool)isFileExistWithPath:(id)arg1;
- (id)JSONDictionaryWithFileInfo:(id)arg1;
- (_Bool)initFromFilePath:(id)arg1;
- (void)dealloc;
- (id)appConfigArrTaskConfig;
- (void)setupConfigForPath:(id)arg1;
- (_Bool)isAppSupportFrameSetWithRegexp:(id)arg1 path:(id)arg2;
- (_Bool)isAppSupportFrameSet:(id)arg1 path:(id)arg2;

@end

