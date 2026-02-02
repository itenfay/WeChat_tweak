//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJAIAssetProcessor, MJAITemplateReporter, NSString, OMJMovieOptions, OMJMovieOutroInfo, OMJTemplateBuildResult;

@interface MJTemplateMovieSessionOperation_BuildAndSwitchAI
{
    unsigned long long _scene;
    NSString *_templateID;
    NSString *_musicID;
    NSString *_AIModelType;
    MJAIAssetProcessor *_AIAssetProcessor;
    OMJMovieOptions *_options;
    OMJMovieOutroInfo *_outroInfo;
    CDUnknownBlockType _progressHandler;
    double _AIAssetProcessorProgress;
    double _templateSwitchingProgress;
    OMJTemplateBuildResult *_buildResult;
    CDUnknownBlockType _buildCompletionHandler;
    MJAITemplateReporter *_AITemplateReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJAITemplateReporter *AITemplateReporter; // @synthesize AITemplateReporter=_AITemplateReporter;
@property(copy, nonatomic) CDUnknownBlockType buildCompletionHandler; // @synthesize buildCompletionHandler=_buildCompletionHandler;
@property(retain, nonatomic) OMJTemplateBuildResult *buildResult; // @synthesize buildResult=_buildResult;
@property(nonatomic) double templateSwitchingProgress; // @synthesize templateSwitchingProgress=_templateSwitchingProgress;
@property(nonatomic) double AIAssetProcessorProgress; // @synthesize AIAssetProcessorProgress=_AIAssetProcessorProgress;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) OMJMovieOutroInfo *outroInfo; // @synthesize outroInfo=_outroInfo;
@property(readonly, nonatomic) OMJMovieOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) MJAIAssetProcessor *AIAssetProcessor; // @synthesize AIAssetProcessor=_AIAssetProcessor;
@property(readonly, copy, nonatomic) NSString *AIModelType; // @synthesize AIModelType=_AIModelType;
@property(readonly, copy, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(readonly, copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(readonly, nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)_switchTemplateWithBuildResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_buildWithProgressHandler:(CDUnknownBlockType)arg1 buildCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_observeAIAssetProcessorWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double progress;
- (id)boundTemplateId;
- (void)start;
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 scene:(unsigned long long)arg3 templateID:(id)arg4 musicID:(id)arg5 AIModelType:(id)arg6 AIAssetProcessor:(id)arg7 options:(id)arg8 outroInfo:(id)arg9 buildResult:(id)arg10 buildCompletionHandler:(CDUnknownBlockType)arg11 progressHandler:(CDUnknownBlockType)arg12 completionHandler:(CDUnknownBlockType)arg13;

@end

