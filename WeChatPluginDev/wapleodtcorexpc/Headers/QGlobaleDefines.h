//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QBussinessSetting;

@interface QGlobaleDefines : NSObject
{
    _Bool _worldmapPrevilege;
    NSString *_documentRootPath;
    NSString *_cacheRootPath;
    NSString *_tileOverlayCacheRootPath;
    NSString *_offlineMapCacheRootPath;
    NSString *_dataEngineVersion;
    NSString *_miniProgramID;
    NSString *_businessKey;
    NSString *_suid;
    NSString *_vendorDeviceId;
    QBussinessSetting *_serverSetting;
}

+ (long long)clientType;
+ (id)singleton;
- (void).cxx_destruct;
@property(retain, nonatomic) QBussinessSetting *serverSetting; // @synthesize serverSetting=_serverSetting;
@property(copy) NSString *vendorDeviceId; // @synthesize vendorDeviceId=_vendorDeviceId;
@property(copy) NSString *suid; // @synthesize suid=_suid;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(copy, nonatomic) NSString *miniProgramID; // @synthesize miniProgramID=_miniProgramID;
@property(copy, nonatomic) NSString *dataEngineVersion; // @synthesize dataEngineVersion=_dataEngineVersion;
@property(readonly, copy, nonatomic) NSString *offlineMapCacheRootPath; // @synthesize offlineMapCacheRootPath=_offlineMapCacheRootPath;
@property(readonly, copy, nonatomic) NSString *tileOverlayCacheRootPath; // @synthesize tileOverlayCacheRootPath=_tileOverlayCacheRootPath;
@property(readonly, copy, nonatomic) NSString *cacheRootPath; // @synthesize cacheRootPath=_cacheRootPath;
@property(readonly, copy, nonatomic) NSString *documentRootPath; // @synthesize documentRootPath=_documentRootPath;
@property(nonatomic) _Bool worldmapPrevilege; // @synthesize worldmapPrevilege=_worldmapPrevilege;
- (id)imageNamed:(id)arg1;
- (void)updateHandDrawMapVersion:(id)arg1;
- (id)handDrawMapVersion;
- (id)URLEncodedString:(id)arg1;
- (id)translateUrlParamWithString:(id)arg1;
- (id)appendCommonUrlStatisticParamatersFor:(id)arg1;
- (id)constructURLStringWithArguments:(id)arg1 forUrl:(id)arg2;
- (id)percentString:(id)arg1;
- (id)netType;
- (id)constructCommonArguments;
- (id)sdkVersion;
- (_Bool)shouldClearAllLocalConfigFiles;
- (void)saveSDKVersion;
- (id)init;
- (id)generateDataSafetyRuls;
- (void)registerDataSafetyRuls;
- (id)deviceType;
- (id)getVendorId;
- (id)getRandomDeviceID;
- (id)appName;
- (id)getAppIdentifier;
- (id)DPI;
- (id)getAppVersion;
- (id)constructSensitiveCommonArguments;
- (id)getDomainByKey:(id)arg1;
- (void)updateServerProtocolData:(id)arg1;
- (void)updateServerProtocolDict:(id)arg1;
- (void)updateServerProtocolJsonString:(id)arg1;
- (void)loadSeverDomain:(_Bool)arg1 withJson:(id)arg2;
- (void)clearServerProtocol;
@property(readonly, nonatomic, getter=isNoStatisticParames) _Bool noStatisticParames; // @dynamic noStatisticParames;
@property(readonly, copy, nonatomic) NSString *brandLogoDataDomain;
@property(readonly, copy, nonatomic) NSString *visualLayerDataDomain; // @dynamic visualLayerDataDomain;
@property(readonly, copy, nonatomic) NSString *overseaTileDomain; // @dynamic overseaTileDomain;
@property(readonly, copy, nonatomic) NSString *statisticDomain; // @dynamic statisticDomain;
@property(readonly, copy, nonatomic) NSString *satellitedataDomain; // @dynamic satellitedataDomain;
@property(readonly, copy, nonatomic) NSString *sketchTileDomain; // @dynamic sketchTileDomain;
@property(readonly, copy, nonatomic) NSString *sketchdataDomain; // @dynamic sketchdataDomain;
@property(readonly, copy, nonatomic) NSString *rttdataDomain; // @dynamic rttdataDomain;
@property(readonly, copy, nonatomic) NSString *mapstyleDomain; // @dynamic mapstyleDomain;
@property(readonly, copy, nonatomic) NSString *mapdataDomain; // @dynamic mapdataDomain;
@property(readonly, copy, nonatomic) NSString *overseadataDomain; // @dynamic overseadataDomain;
@property(readonly, copy, nonatomic) NSString *indoordataDomain; // @dynamic indoordataDomain;
@property(readonly, copy, nonatomic) NSString *authorizationDomain; // @dynamic authorizationDomain;
- (id)mapBeaconRules;
- (void)setupNetworkStatsRules;

@end

