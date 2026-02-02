//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OMJMovieOptions;

@interface MJTemplateMovieSessionOperation_Update
{
    OMJMovieOptions *_movieOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMJMovieOptions *movieOptions; // @synthesize movieOptions=_movieOptions;
- (void)_didCompleteWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateMovieOptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)boundTemplateId;
- (void)start;
- (id)initWithMaasSession:(id)arg1 sessionKey:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

