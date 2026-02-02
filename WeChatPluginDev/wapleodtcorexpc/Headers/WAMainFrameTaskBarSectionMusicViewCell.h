//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageView, MMMusicInfo, MMMusicPlayerContoller;

@interface WAMainFrameTaskBarSectionMusicViewCell
{
    MMImageView *_playIcon;
    MMMusicInfo *_curMusicInfo;
    MMMusicPlayerContoller *_musicPlayerController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicPlayerContoller *musicPlayerController; // @synthesize musicPlayerController=_musicPlayerController;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)getCurLeftImage;
- (void)updateWithListInfo:(id)arg1;
- (id)defaultImage;
- (_Bool)supportAddToMinimize;
- (void)layoutSubviews;
- (void)initView;
- (void)dealloc;

@end

