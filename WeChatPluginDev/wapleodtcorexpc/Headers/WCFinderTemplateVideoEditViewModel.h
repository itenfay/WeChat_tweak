//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJTemplateMovieSession, NSArray, NSMutableArray, NSString, OMJMovieOptions;

@interface WCFinderTemplateVideoEditViewModel : NSObject
{
    _Bool _onlyImageEdit;
    MJTemplateMovieSession *_templateSession;
    NSString *_firstVideoPath;
    OMJMovieOptions *_movieOptions;
    NSMutableArray *_musicInfos;
    NSArray *_assetInfos;
    NSArray *_templateInfos;
}

+ (id)movieOptionsWithLyricEnable:(_Bool)arg1 ostMuted:(_Bool)arg2 bgmMuted:(_Bool)arg3;
+ (id)genOutputParmsWithTemplateInfo:(id)arg1 musicInfo:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool onlyImageEdit; // @synthesize onlyImageEdit=_onlyImageEdit;
@property(retain, nonatomic) NSArray *templateInfos; // @synthesize templateInfos=_templateInfos;
@property(retain, nonatomic) NSArray *assetInfos; // @synthesize assetInfos=_assetInfos;
@property(retain, nonatomic) NSMutableArray *musicInfos; // @synthesize musicInfos=_musicInfos;
@property(retain, nonatomic) OMJMovieOptions *movieOptions; // @synthesize movieOptions=_movieOptions;
@property(copy, nonatomic) NSString *firstVideoPath; // @synthesize firstVideoPath=_firstVideoPath;
@property(retain, nonatomic) MJTemplateMovieSession *templateSession; // @synthesize templateSession=_templateSession;
- (id)assetInfosWithMaterialInfos:(id)arg1;
- (void)changeTemplateWithTemplate:(id)arg1 musicID:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changeTemplateWithTemplate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeMusicInfo:(id)arg1 option:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changeMusicInfo:(id)arg1 isBgmMuted:(_Bool)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changeMusicInfo:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)musicIndexOfMusicId:(id)arg1;
- (id)templateIdAtIndex:(unsigned long long)arg1;
- (id)templateInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)templateCount;
- (void)safeInsertMusicToFront:(id)arg1;
- (id)musicInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)musicCount;
- (id)genMutableArrayWithArray:(id)arg1;
- (_Bool)isBGMMuted;
- (_Bool)isOSTMuted;
- (_Bool)isLyricEnable;
- (void)setStateOfOST:(_Bool)arg1 bgm:(_Bool)arg2 lyricEnable:(_Bool)arg3;
- (void)setBGMMuted:(_Bool)arg1;
- (void)updateMovieOptions:(id)arg1;
- (id)finderDefaultTemplateMovieOptions;
- (id)emptyTemplateMovieOptions;
- (id)currentMovieOptions;
- (void)cleanUpWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stopPlayWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelExportingWithCompletion:(CDUnknownBlockType)arg1;
- (void)startExportingWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startPlayWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)renderView;
- (void)startMoiveCreationWithTemplateId:(id)arg1 musicIds:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)startMoiveCreationWithTemplateId:(id)arg1 musicId:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)hasLoadingTemplate;
- (void)genNotUseVideoTemplateAndLoadingTemplateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startMoiveCreationAndFetchRecTemplateProgressBlock:(CDUnknownBlockType)arg1 recommendTemplateFetchCompletionBlock:(CDUnknownBlockType)arg2;
- (void)startBlankMoiveCreationAndFetchRecTemplateProgressBlock:(CDUnknownBlockType)arg1 movieCompletionBlock:(CDUnknownBlockType)arg2 needRecommendTemplate:(_Bool)arg3 recommendTemplateFetchCompletionBlock:(CDUnknownBlockType)arg4;
- (void)startBlankMoiveCreationAndFetchFromWeChatSvrWithProgressBlock:(CDUnknownBlockType)arg1 movieCompletionBlock:(CDUnknownBlockType)arg2 recommendTemplateFetchCompletionBlock:(CDUnknownBlockType)arg3;
- (void)startUpMaasSessionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasStartUpMaasSession;
- (void)destroyTemplateSession;
- (id)initWithMaterialInfos:(id)arg1 firstVideoPath:(id)arg2;

@end

