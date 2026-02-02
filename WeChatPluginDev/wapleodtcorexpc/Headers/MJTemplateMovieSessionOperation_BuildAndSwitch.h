//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OMJMovieOptions, OMJMovieOutroInfo, OMJTemplateBuildResult;

@interface MJTemplateMovieSessionOperation_BuildAndSwitch
{
    NSString *_templateID;
    NSString *_musicID;
    OMJMovieOptions *_options;
    OMJMovieOutroInfo *_outroInfo;
    CDUnknownBlockType _progressHandler;
    OMJTemplateBuildResult *_buildResult;
    CDUnknownBlockType _buildCompletionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType buildCompletionHandler; // @synthesize buildCompletionHandler=_buildCompletionHandler;
@property(retain, nonatomic) OMJTemplateBuildResult *buildResult; // @synthesize buildResult=_buildResult;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) OMJMovieOutroInfo *outroInfo; // @synthesize outroInfo=_outroInfo;
@property(readonly, nonatomic) OMJMovieOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(readonly, copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (void)_switchTemplateWithBuildResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_buildWithProgressHandler:(CDUnknownBlockType)arg1 buildCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)boundTemplateId;
- (void)start;
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 templateID:(id)arg3 musicID:(id)arg4 options:(id)arg5 outroInfo:(id)arg6 buildResult:(id)arg7 buildCompletionHandler:(CDUnknownBlockType)arg8 progressHandler:(CDUnknownBlockType)arg9 completionHandler:(CDUnknownBlockType)arg10;

@end

