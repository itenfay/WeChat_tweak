//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPublisher, NSString;

@interface LiteAppJsapiOpenFinderMovieEditor
{
    MJPublisher *_mjPublisher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJPublisher *mjPublisher; // @synthesize mjPublisher=_mjPublisher;
- (unsigned long long)currentTimeInMilliseconds;
- (id)saveCachePath;
- (int)getVideoDuration:(id)arg1;
- (id)createImageLocalId:(id)arg1;
- (id)createVideoLocalId:(id)arg1 videoSize:(unsigned int)arg2;
- (void)successCallback:(id)arg1 videoPath:(id)arg2 thumbImage:(id)arg3 duration:(double)arg4 videoSize:(unsigned int)arg5 sizeVideo:(struct CGSize)arg6;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)handleMJAppProducedVideoWithPostSession:(id)arg1 composingVC:(id)arg2;
- (void)postProcess:(id)arg1;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)presentMJMovieComposingViewControllerWithFilePaths:(id)arg1 mediaType:(long long)arg2 configuration:(id)arg3 delegate:(id)arg4 mjPublisher:(id)arg5;
- (void)showMovieComposingWithDraft:(id)arg1;
- (void)showMovieComposing:(id)arg1 disableDraft:(unsigned char)arg2 entryScene:(long long)arg3 mediaType:(long long)arg4;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

