//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OMJMovieOptions, OMJMovieOutroInfo;

@interface MJTemplateMovieSessionOperation_Recreate
{
    NSString *_templateID;
    NSString *_musicID;
    OMJMovieOptions *_options;
    OMJMovieOutroInfo *_outroInfo;
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) OMJMovieOutroInfo *outroInfo; // @synthesize outroInfo=_outroInfo;
@property(readonly, nonatomic) OMJMovieOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(readonly, copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (void)_recreateWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelPreviousRecreationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_stopPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasFinishedPreparing;
- (id)boundTemplateId;
- (void)start;
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 templateID:(id)arg3 musicID:(id)arg4 options:(id)arg5 outroInfo:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;

@end

