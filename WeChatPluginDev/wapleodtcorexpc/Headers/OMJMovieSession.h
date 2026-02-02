//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OMJMovieSessionComposingDelegate, OMJMovieSessionDataSource, OMJMovieSessionDelegate;

@interface OMJMovieSession : NSObject
{
    struct {
        _Bool contentForTextTemplate;
    } _dataSourceFlags;
    struct XSigConnHelper _sigConnHelper;
    id <OMJMovieSessionDelegate> _delegate;
    id <OMJMovieSessionDataSource> _dataSource;
    id <OMJMovieSessionComposingDelegate> _composingDelegate;
    SharedPtr_4dc38317 _backingSession;
    shared_ptr_85cde1ea _backingRenderView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_85cde1ea backingRenderView; // @synthesize backingRenderView=_backingRenderView;
@property(nonatomic) SharedPtr_4dc38317 backingSession; // @synthesize backingSession=_backingSession;
@property(nonatomic) __weak id <OMJMovieSessionComposingDelegate> composingDelegate; // @synthesize composingDelegate=_composingDelegate;
@property(nonatomic) __weak id <OMJMovieSessionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <OMJMovieSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)makeCoverAndExportClipbundleWithSnapshotOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)makeCoverAndExportClipbundleWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)exportClipBundleWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)templateAnalysisPbData;
- (id)commitChangesAndNotifyRenderUpdateWithPreviewTime:(CDStruct_1b6d18a9)arg1 isFullUpdate:(_Bool)arg2;
- (id)commitChangesAndNotifyRenderUpdateWithIsFullUpdate:(_Bool)arg1;
- (_Bool)leaveFocusModeWithError:(id *)arg1;
- (_Bool)enterFocusModeWithSegmentID:(id)arg1 error:(id *)arg2;
- (struct CGPoint)convertCanvasPointToViewPoint:(struct CGPoint)arg1 inViewBounds:(struct CGRect)arg2 error:(id *)arg3;
- (struct CGPoint)convertViewPointToCanvasPoint:(struct CGPoint)arg1 inViewBounds:(struct CGRect)arg2 error:(id *)arg3;
- (void)endClippingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginClippingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)stickerSegmentWithID:(id)arg1 error:(id *)arg2;
- (id)textSegmentWithID:(id)arg1 error:(id *)arg2;
- (id)storylineClipSegments;
- (_Bool)removeSegmentWithID:(id)arg1 shouldCommit:(_Bool)arg2 error:(id *)arg3;
- (id)addTextSegmentWithText:(id)arg1 spatialInfo:(id)arg2 textStyles:(id)arg3 layerStyles:(id)arg4 normalizedMaximumWidth:(float)arg5 shouldCommit:(_Bool)arg6 error:(id *)arg7;
- (id)addStickerSegmentWithFileAtPath:(id)arg1 shouldCommit:(_Bool)arg2 error:(id *)arg3;
- (void)notifyDidUpdatePosition:(const void *)arg1 forSegment:(const void *)arg2;
- (void)notifyDidEndUpdatingPositionForSegment:(const void *)arg1;
- (void)notifyWillUpdatePositionForSegment:(const void *)arg1;
- (void)notifyDidRemoveSegment:(const void *)arg1;
- (void)notifyDidEndDisplayingHandleBoxForSegment:(const void *)arg1;
- (void)notifyDidSelectSegment:(const void *)arg1 withHints:(const void *)arg2;
- (void)removeHandleBox;
- (void)showHandleBoxForSegment:(id)arg1 withItems:(id)arg2 edgeInsets:(struct UIEdgeInsets)arg3 borderStyle:(id)arg4 guideLineStyle:(id)arg5;
- (void)showHandleBoxForSegment:(id)arg1 withBorderStyle:(id)arg2;
- (void)cancelMusicRecommend:(long long)arg1;
- (long long)requestMusicRecommendWithTemplateID:(id)arg1 clientRequestID:(unsigned long long)arg2 recommendCompletionHandler:(CDUnknownBlockType)arg3;
- (void)cancelTemplateRecommend:(long long)arg1;
- (long long)requestTemplateRecommendWithPagingContext:(id)arg1 shouldRecommendBGM:(_Bool)arg2 additionTemplateIDs:(id)arg3 recommendCompletionHandler:(CDUnknownBlockType)arg4;
- (long long)requestTemplateRecommendWithPagingContext:(id)arg1 shouldRecommendBGM:(_Bool)arg2 recommendCompletionHandler:(CDUnknownBlockType)arg3;
- (void)syncDataSourceToBackingSession;
- (double)videoAspectRatio;
- (id)getCurrentLyricInfosWithError:(id *)arg1;
- (id)getCurrentMovieOptionsWithError:(id *)arg1;
- (id)getRecommendedMusicInfosWithError:(id *)arg1;
- (id)getCurrentTemplateBuiltinMusicInfosWithError:(id *)arg1;
- (id)getCurrentTemplateMusicInfosWithError:(id *)arg1;
- (id)getCurrentMusicOptionsWithError:(id *)arg1;
- (id)getCurrentMusicInfoWithError:(id *)arg1;
- (id)getCurrentTemplateInfoWithError:(id *)arg1;
- (id)switchTemplateWithBuildResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cancelBuildTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)buildBlankTemplateWithMusicID:(id)arg1 movieOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)buildTemplateWithMusicID:(id)arg1 movieOptions:(id)arg2 movieOutroInfo:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)buildTemplateWithTemplateID:(id)arg1 musicID:(id)arg2 movieOptions:(id)arg3 movieOutroInfo:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)updateWithMovieOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cancelRecreationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)recreateUsingBlankTemplateWithMusicID:(id)arg1 movieOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)recreateWithMusicID:(id)arg1 movieOptions:(id)arg2 movieOutroInfo:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)recreateWithTemplateID:(id)arg1 musicID:(id)arg2 movieOptions:(id)arg3 movieOutroInfo:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)cancelExportingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)startExportingWithTimeRange:(CDStruct_e83c9415)arg1 outputFilePath:(id)arg2 exportSettings:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)skimToSegmentWithID:(id)arg1 atTimeInClip:(CDStruct_1b6d18a9)arg2;
- (id)skimTo:(CDStruct_1b6d18a9)arg1;
- (id)stopPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)startPlayingWithSegmentID:(id)arg1 timeRangeInClip:(CDStruct_e83c9415)arg2 loopCount:(int)arg3 isAudioEnabled:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)startPlayingWithTimeRange:(CDStruct_e83c9415)arg1 startTime:(CDStruct_1b6d18a9)arg2 loopCount:(int)arg3 isAudioEnabled:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)teardownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)cancelMovieCreationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)setAssetsWithAIModelType:(id)arg1 assetInfos:(id)arg2;
- (id)startMovieCreationWithComposingDesc:(id)arg1 templateID:(id)arg2 movieOptions:(id)arg3 recommendOptions:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 movieCompletionHandler:(CDUnknownBlockType)arg6 preprocCompletionHandler:(CDUnknownBlockType)arg7;
- (id)startMovieCreationUsingBlankTemplateWithAssetInfos:(id)arg1 musicID:(id)arg2 movieOptions:(id)arg3 recommendOptions:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 movieCompletionHandler:(CDUnknownBlockType)arg6 preprocCompletionHandler:(CDUnknownBlockType)arg7;
- (id)startMovieCreationAutoRecommendTemplateWithAssetInfos:(id)arg1 movieOptions:(id)arg2 recommendOptions:(id)arg3 movieOutroInfo:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)startMovieCreationWithTemplateID:(id)arg1 musicIDs:(id)arg2 assetInfos:(id)arg3 movieOptions:(id)arg4 recommendOptions:(id)arg5 movieOutroInfo:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8 preprocCompletionHandler:(CDUnknownBlockType)arg9;
- (id)startMovieCreationWithTemplateID:(id)arg1 musicID:(id)arg2 assetInfos:(id)arg3 movieOptions:(id)arg4 recommendOptions:(id)arg5 movieOutroInfo:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8 preprocCompletionHandler:(CDUnknownBlockType)arg9;
- (id)renderView;
- (CDStruct_1b6d18a9)playbackDuration;
- (CDStruct_1b6d18a9)currentPlaybackTime;
- (void)setupPlaybackTimeDidChangeCallback;
- (_Bool)connectToRenderView:(const void *)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long state;
- (id)initWithBackingSession:(const void *)arg1;
- (void)dealloc;

@end

