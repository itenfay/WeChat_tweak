//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditVideoMusicController, MJPublisherContext, MMBGMSelectedConfig, NSMutableArray;
@protocol MMBGMSelectedMusicDataProtocol;

@interface MJMusicPickingViewModel : NSObject
{
    _Bool _shouldChangeComposingState;
    _Bool _isActive;
    _Bool _isMusicDownloadCancelled;
    NSMutableArray *_bgmPanelTabModels;
    MMBGMSelectedConfig *_bgmPanelConfig;
    EditVideoMusicController *_musicController;
    id <MMBGMSelectedMusicDataProtocol> _followMusicData;
    MJPublisherContext *_publisherContext;
    CDUnknownBlockType _musicDownloadCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType musicDownloadCompletion; // @synthesize musicDownloadCompletion=_musicDownloadCompletion;
@property(nonatomic) _Bool isMusicDownloadCancelled; // @synthesize isMusicDownloadCancelled=_isMusicDownloadCancelled;
@property(retain, nonatomic) MJPublisherContext *publisherContext; // @synthesize publisherContext=_publisherContext;
@property(retain, nonatomic) id <MMBGMSelectedMusicDataProtocol> followMusicData; // @synthesize followMusicData=_followMusicData;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool shouldChangeComposingState; // @synthesize shouldChangeComposingState=_shouldChangeComposingState;
@property(readonly, nonatomic) EditVideoMusicController *musicController; // @synthesize musicController=_musicController;
@property(readonly, nonatomic) MMBGMSelectedConfig *bgmPanelConfig; // @synthesize bgmPanelConfig=_bgmPanelConfig;
@property(readonly, nonatomic) NSMutableArray *bgmPanelTabModels; // @synthesize bgmPanelTabModels=_bgmPanelTabModels;
- (void)callCompletionWithDownloadSucceed:(_Bool)arg1 musicID:(id)arg2;
- (void)cancelMusicDownload:(id)arg1;
- (void)downloadMusic:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)convertMusicLyricInfos:(id)arg1;
- (void)handleApplicationWillEnterForeground:(id)arg1;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (void)replayMusic;
- (void)pauseMusic;
- (void)loadAndPlayMusic:(id)arg1;
- (id)initWithFollowMusicInfo:(id)arg1 assetClassfyResult:(id)arg2;

@end

