//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicInfo, TingLiteMediaView;

@interface ShakeMusicResultMediaView
{
    MMMusicInfo *_musicInfo;
    TingLiteMediaView *_mediaView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingLiteMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
- (void)fillMusicShareItemWithMVPlayerData:(id)arg1;
- (void)clearPlayer;
- (void)layoutMediaViewWithFrame:(struct CGRect)arg1 openScene:(unsigned long long)arg2;
- (void)enterPlayerWithOpenScene:(unsigned long long)arg1 musicInfo:(id)arg2 qqMusicInfo:(id)arg3 shareItem:(id)arg4 viewController:(id)arg5;
- (void)loadData:(id)arg1 musicInfo:(id)arg2 mvModel:(id)arg3 openScene:(unsigned long long)arg4;
- (void)stop;
- (void)setupSubviews;
- (id)initWithMusicInfo:(id)arg1;

@end

