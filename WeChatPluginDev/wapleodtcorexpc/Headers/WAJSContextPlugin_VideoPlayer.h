//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAPluginComponent_VideoPlayer;

@interface WAJSContextPlugin_VideoPlayer
{
    WAPluginComponent_VideoPlayer *_sysCoverViewVideoComponent;
    WAPluginComponent_VideoPlayer *_splashAdVideoComponent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPluginComponent_VideoPlayer *splashAdVideoComponent; // @synthesize splashAdVideoComponent=_splashAdVideoComponent;
@property(retain, nonatomic) WAPluginComponent_VideoPlayer *sysCoverViewVideoComponent; // @synthesize sysCoverViewVideoComponent=_sysCoverViewVideoComponent;
- (id)getVideoComponentWithDest:(long long)arg1;
- (_Bool)removeVideoPlayer:(unsigned int)arg1 dest:(long long)arg2;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2 dest:(long long)arg3;
- (void)disableFullScreenWithDest:(long long)arg1;
- (id)getCurrentSnapshotWithDest:(long long)arg1;
- (_Bool)operateVideoPlayer:(id)arg1 videoId:(unsigned int)arg2;
- (id)getVolumeSliderWithDest:(long long)arg1;
- (id)getVideoPlayer:(unsigned int)arg1 dest:(long long)arg2;
- (id)insertVideo:(id)arg1 pos:(struct CGRect)arg2 videoId:(unsigned int)arg3 parentId:(unsigned int)arg4 referrerPolicyType:(unsigned long long)arg5 backgroundColor:(id)arg6 dest:(long long)arg7;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)init;

@end

