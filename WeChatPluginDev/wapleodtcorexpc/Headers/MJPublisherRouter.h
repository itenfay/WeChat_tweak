//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJPublisherRouter : NSObject
{
}

+ (void)pauseCellIfNeeded:(id)arg1;
+ (void)fixWCTimelinePlaybackIssueIfNeededWithFromVC:(id)arg1;
+ (void)enterMovieComposingInActionSheetWithFromVC:(id)arg1 mjPublisher:(id)arg2 composingDelegate:(id)arg3 showPickerCompletion:(CDUnknownBlockType)arg4;
+ (void)_presentMovieTemplateWithAssetInfos:(id)arg1 publisher:(id)arg2 createSameTemplateId:(id)arg3 createSameMusicId:(id)arg4 delegate:(id)arg5 fromAssetPicker:(id)arg6 isJumpMJAppEnabled:(_Bool)arg7 templateScene:(unsigned long long)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (void)presentMovieTemplateWithAssetInfos:(id)arg1 publisher:(id)arg2 createSameTemplateId:(id)arg3 createSameMusicId:(id)arg4 delegate:(id)arg5 fromAssetPicker:(id)arg6 showRegularGuideIfNeeded:(_Bool)arg7 isJumpMJAppEnabled:(_Bool)arg8 templateScene:(unsigned long long)arg9 startHandler:(CDUnknownBlockType)arg10 completionHandler:(CDUnknownBlockType)arg11;
+ (void)presentMovieTemplateWithAssetInfos:(id)arg1 publisher:(id)arg2 delegate:(id)arg3 fromAssetPicker:(id)arg4 showRegularGuideIfNeeded:(_Bool)arg5 startHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)removeMovieComposingDraftWithEntryScene:(long long)arg1 publisherContext:(id)arg2;
+ (void)checkMovieComposingDraftWithEntryScene:(long long)arg1 publisherContext:(id)arg2 publisherSessionMetrics:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)showMovieComposingDraftTipsIfExists:(id)arg1 publisherSessionMetrics:(id)arg2 fromVC:(id)arg3 didSkipDraftHandler:(CDUnknownBlockType)arg4 didOpenDraftHandler:(CDUnknownBlockType)arg5;
+ (id)_getUsername;
+ (void)_presentFinderPostViewControllerWithPostSession:(id)arg1 publisher:(id)arg2 fromVC:(id)arg3 postDelegate:(id)arg4;
+ (void)_processWithSightDraft:(id)arg1 finderTask:(id)arg2 appliedMusicInfo:(id)arg3 publisher:(id)arg4 fromVC:(id)arg5 postDelegate:(id)arg6;
+ (void)presentFinderPostVCWithPostSession:(id)arg1 composingVC:(id)arg2 publisher:(id)arg3 fromVC:(id)arg4 postDelegate:(id)arg5;
+ (void)presentFinderPostVCWithSightDraft:(id)arg1 composingVC:(id)arg2 publisher:(id)arg3 fromVC:(id)arg4 postDelegate:(id)arg5;
+ (void)presentFinderPostVCWithActionFlow:(id)arg1 composingVC:(id)arg2 publisher:(id)arg3 fromVC:(id)arg4 postDelegate:(id)arg5;
+ (void)presentFinderPostVCWithImageAttr:(id)arg1 composingVC:(id)arg2 publisher:(id)arg3 fromVC:(id)arg4 postDelegate:(id)arg5;
+ (void)presentFinderPostVCWithSightDraft:(id)arg1 isAsyncComposite:(_Bool)arg2 composingVC:(id)arg3 publisher:(id)arg4 fromVC:(id)arg5 postDelegate:(id)arg6;
+ (void)presentFinderPostVCWithActionFlow:(id)arg1 movieComposingVC:(id)arg2 publisher:(id)arg3 fromVC:(id)arg4 postDelegate:(id)arg5;
+ (void)presentFinderPostVCWithVideoFileURL:(id)arg1 userInfo:(id)arg2 composingVC:(id)arg3 publisher:(id)arg4 fromVC:(id)arg5 postDelegate:(id)arg6;
+ (void)presentFinderPostVCWithVideoFilePath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4 composingVC:(id)arg5 publisher:(id)arg6 fromVC:(id)arg7 postDelegate:(id)arg8;
+ (void)presentFinderPostVCWithImage:(id)arg1 imageData:(id)arg2 frontCamera:(_Bool)arg3 editImageAttr:(id)arg4 composingVC:(id)arg5 publisher:(id)arg6 fromVC:(id)arg7 postDelegate:(id)arg8;
+ (void)presentMovieComposingVCWithPublisher:(id)arg1 delegate:(id)arg2 assetInfos:(id)arg3 fromVC:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)presentShootComposingVCWithPublisher:(id)arg1 fromVC:(id)arg2 delegate:(id)arg3;

@end

