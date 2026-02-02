//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMCProjectManager, OMJCamResourceManager, OMJCamSession, OMJCamoSession, OMJExportManager, OMJMaterialManager, OMJMovieComposingSession, OMJMoviePlayer, OMJMovieSession, OMJResourcePreloader, OMJServiceManager, OMJSpeechManager;
@protocol OMJMaasCoreReportDelegate, OMJMaasCoreSettingsDataSource;

@interface OMJMaasCore : NSObject
{
    id <OMJMaasCoreReportDelegate> _reportDelegate;
    id <OMJMaasCoreSettingsDataSource> _settingsDataSource;
    OMJMovieSession *_movieSession;
    OMJCamSession *_camSession;
    OMJCamResourceManager *_camResourceManager;
    OMJCamoSession *_camoSession;
    OMJResourcePreloader *_resourcePreloader;
    OMJServiceManager *_serviceManager;
    OMJExportManager *_exportManager;
    OMJMaterialManager *_materialManager;
    OMJSpeechManager *_speechManager;
    OMCProjectManager *_projectManager;
    OMJMoviePlayer *_moviePlayer;
    OMJMovieComposingSession *_movieComposingSession;
    shared_ptr_32a93604 _backingMaasCore;
}

+ (id)MaasSDKBuildNumber;
+ (unsigned long long)MaasSDKVersionNumberIntValue;
+ (id)MaasSDKVersionNumber;
+ (id)MaasSDKShortVersion;
+ (id)MaasSDKVersion;
+ (void)setUseNativeDispatcher:(_Bool)arg1;
+ (void)setLogLevel:(long long)arg1;
+ (void)disableLogging;
+ (void)enableLoggingWithParams:(id)arg1;
+ (id)createPublisherSessionMetricsWithEntryType:(id)arg1 enterScene:(unsigned long long)arg2 parentEnterScene:(unsigned long long)arg3 startupOptions:(id)arg4;
+ (id)createPublisherSessionMetricsWithEntryType:(id)arg1 enterScene:(unsigned long long)arg2 parentEnterScene:(unsigned long long)arg3;
+ (id)createPublisherSessionMetricsWithEntryType:(id)arg1;
+ (void)initMetricsReportingWithLogPath:(id)arg1 metricsReportingHandler:(CDUnknownBlockType)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_32a93604 backingMaasCore; // @synthesize backingMaasCore=_backingMaasCore;
@property(retain, nonatomic) OMJMovieComposingSession *movieComposingSession; // @synthesize movieComposingSession=_movieComposingSession;
@property(retain, nonatomic) OMJMoviePlayer *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
@property(retain, nonatomic) OMCProjectManager *projectManager; // @synthesize projectManager=_projectManager;
@property(retain, nonatomic) OMJSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) OMJMaterialManager *materialManager; // @synthesize materialManager=_materialManager;
@property(retain, nonatomic) OMJExportManager *exportManager; // @synthesize exportManager=_exportManager;
@property(retain, nonatomic) OMJServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property(retain, nonatomic) OMJResourcePreloader *resourcePreloader; // @synthesize resourcePreloader=_resourcePreloader;
@property(retain, nonatomic) OMJCamoSession *camoSession; // @synthesize camoSession=_camoSession;
@property(retain, nonatomic) OMJCamResourceManager *camResourceManager; // @synthesize camResourceManager=_camResourceManager;
@property(retain, nonatomic) OMJCamSession *camSession; // @synthesize camSession=_camSession;
@property(retain, nonatomic) OMJMovieSession *movieSession; // @synthesize movieSession=_movieSession;
@property(nonatomic) __weak id <OMJMaasCoreSettingsDataSource> settingsDataSource; // @synthesize settingsDataSource=_settingsDataSource;
@property(nonatomic) __weak id <OMJMaasCoreReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)resetTextureRegister;
- (void)setTextureRegister:(id)arg1;
- (id)allClipBundleIDs;
- (id)clipBundleCoverImagePathWithID:(id)arg1;
- (id)clipBundleInfoRelativePathWithID:(id)arg1;
- (id)clipBundleInfoAbsolutePathWithID:(id)arg1;
- (id)collectAssetInfosFromClipBundleWithID:(id)arg1 error:(id *)arg2;
- (void)cleanupREResourceCachesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cleanupSDFCachesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cleanupAssetCachesExcludAssetInfos:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cleanupResourceCachesWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createRenderView;
- (void)destroyProjectManager;
- (id)getOrCreateProjectManagerWithError:(id *)arg1;
- (void)destroySpeechManager;
- (id)getOrCreateSpeechManagerWithError:(id *)arg1;
- (void)destroyMaterialManager;
- (id)getOrCreateMaterialManagerWithError:(id *)arg1;
- (void)destroyCamoSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)createCamoSessionWithModelInfos:(id)arg1 error:(id *)arg2;
- (_Bool)registerTemplateResourcesWithFilePath:(id)arg1 resourceID:(id)arg2;
- (void)destroyCamResourceManager;
- (id)getOrCreateCamResourceManagerWithError:(id *)arg1;
- (void)destroyCamSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)createCamSessionWithModelInfos:(id)arg1 error:(id *)arg2;
- (void)destroyMovieComposingSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)createMovieComposingSession;
- (id)destroyMoviePlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)createMoviePlayer;
- (void)destroyResourcePreloader;
- (_Bool)createResourcePreloaderWithError:(id *)arg1;
- (id)destroyMovieSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)createMovieSessionWithModelInfos:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)createMovieSessionWithModelInfos:(id)arg1 error:(id *)arg2;
- (void)queryCamFunTemplateResourcesStatusWithIdentifier:(id)arg1 version:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryInstaMovieTemplateResourcesStatusWithIdentifier:(id)arg1 version:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)teardownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)startupWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct XMJILinkParams)mapILinkParams:(id)arg1;
- (struct XMJILinkAppClientParams)mapAppClientParams:(id)arg1;
- (struct XMJILinkContextParams)mapContextParams:(id)arg1;
- (struct XMJILinkContextParamsExternalManaged)mapContextParamsExternalManaged:(id)arg1;
- (struct XMJILinkContextParamsSelfManaged)mapContextParamsSelfManaged:(id)arg1;
- (void)setupSettingsProvider;
- (void)setupAnalyticsEventCallback;
- (id)init;
- (void)dealloc;
- (_Bool)registerAIModelsWithInfo:(id)arg1 error:(id *)arg2;

@end

