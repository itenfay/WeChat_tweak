//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class OMJMovieComposingSession;

@interface MJMovieComposingSession : NSObject
{
    OMJMovieComposingSession *_movieComposingSession;
}

+ (void)destroyCamResourceManager;
+ (id)getOrCreateProjectManager;
+ (id)getOrCreateSpeechManager;
+ (id)getOrCreateCamResourceManager;
+ (id)getOrCreateMaterialManager;
+ (id)createRenderView;
@property(retain, nonatomic) OMJMovieComposingSession *movieComposingSession; // @synthesize movieComposingSession=_movieComposingSession;
- (void)_destroyMovieComposingSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_tearDownMovieComposingSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cleanUpMaasSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_createMovieComposingSession;
- (_Bool)createMaasSession;

@end
