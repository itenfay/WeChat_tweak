//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJAIAssetProcessor, NSArray, NSMutableDictionary, OMJMovieSession;

@interface MJTemplateMovieSession
{
    _Bool _usesBuildAndSwitchOperation;
    OMJMovieSession *_maasMovieSession;
    double _AIGeneratorTimeoutInterval;
    NSArray *_assetInfos;
    MJAIAssetProcessor *_AIAssetProcessor;
    NSMutableDictionary *_AIModelTypeCache;
    NSMutableDictionary *_templateBuildResultCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *templateBuildResultCache; // @synthesize templateBuildResultCache=_templateBuildResultCache;
@property(retain, nonatomic) NSMutableDictionary *AIModelTypeCache; // @synthesize AIModelTypeCache=_AIModelTypeCache;
@property(retain, nonatomic) MJAIAssetProcessor *AIAssetProcessor; // @synthesize AIAssetProcessor=_AIAssetProcessor;
@property(copy, nonatomic) NSArray *assetInfos; // @synthesize assetInfos=_assetInfos;
@property(nonatomic) double AIGeneratorTimeoutInterval; // @synthesize AIGeneratorTimeoutInterval=_AIGeneratorTimeoutInterval;
@property(nonatomic) _Bool usesBuildAndSwitchOperation; // @synthesize usesBuildAndSwitchOperation=_usesBuildAndSwitchOperation;
@property(retain, nonatomic) OMJMovieSession *maasMovieSession; // @synthesize maasMovieSession=_maasMovieSession;
- (void)startExportingCreationAsynchronouslyWithTimeRange:(CDStruct_e83c9415)arg1 outputFilePath:(id)arg2 exportMovieOptions:(id)arg3 exportSettings:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (void)startExportingCreationWithTimeRange:(CDStruct_e83c9415)arg1 outputFilePath:(id)arg2 exportMovieOptions:(id)arg3 exportSettings:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (void)updateMovieOptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopAssetClippingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAssetClippingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_stopPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startPlayingWithTimeRange:(CDStruct_e83c9415)arg1 specificSegmentId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startPlayingSegmentWithId:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 firstStop:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startPlayingWithTimeRange:(CDStruct_e83c9415)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)_requestMusicRecommendWithTemplateID:(id)arg1 clientRequestID:(unsigned long long)arg2 recommendCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)requestMusicRecommendWithTemplateID:(id)arg1 clientRequestID:(unsigned long long)arg2 recommendCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_requestRecommendWithPageCtx:(id)arg1 shouldRecommendBGM:(_Bool)arg2 additionTemplateIDs:(id)arg3 recommendCompletionHandler:(CDUnknownBlockType)arg4;
- (void)requestRecommendWithPageCtx:(id)arg1 shouldRecommendBGM:(_Bool)arg2 additionTemplateIDs:(id)arg3 recommendCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_cancelAIBuildIfNeeded;
- (void)_cancelBuildIfNeeded;
- (void)_cancelRecreationIfNeeded;
- (void)cancelRecreationIfNeeded;
- (void)cancelAIAssetProcessor;
- (void)startAIAssetProcessorIfNeeded;
- (id)templateBuildResultCacheKeyWithTemplateID:(id)arg1 musicID:(id)arg2;
- (_Bool)cacheTemplateBuildResult:(id)arg1 templateID:(id)arg2 musicID:(id)arg3;
- (id)templateBuildResultCacheWithTemplateID:(id)arg1 musicID:(id)arg2;
- (void)_restartCreationWithTemplateID:(id)arg1 musicID:(id)arg2 AIModelType:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 options:(id)arg5 outroInfo:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)restartCreationWithMusicID:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 options:(id)arg3 outroInfo:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)restartCreationWithVideoTemplate:(id)arg1 musicID:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 options:(id)arg4 outroInfo:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)restartCreationWithTemplateID:(id)arg1 musicID:(id)arg2 AIModelType:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 options:(id)arg5 outroInfo:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_cacheTemplateList:(id)arg1;
- (void)_startCreationWithTemplateID:(id)arg1 musicIDs:(id)arg2 assetInfos:(id)arg3 options:(id)arg4 outroInfo:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7 recommendationOptions:(id)arg8 preprocCompletionHandler:(CDUnknownBlockType)arg9;
- (void)startCreationWithTemplateID:(id)arg1 musicIDs:(id)arg2 assetInfos:(id)arg3 options:(id)arg4 outroInfo:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7 recommendationOptions:(id)arg8 preprocCompletionHandler:(CDUnknownBlockType)arg9;
- (void)_cleanUpMaasSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_tearDownMaasSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cleanUpMaasSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_createMaasMovieSession;
- (_Bool)createMaasSession;

@end

