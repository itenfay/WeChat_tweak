//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicPlayerContoller, NSString, UIImage;

@interface FavRecordMusicNodeView
{
    MMMusicPlayerContoller *m_musicPlayButton;
    UIImage *_mvThumbImage;
}

- (void).cxx_destruct;
@property(nonatomic) UIImage *mvThumbImage; // @synthesize mvThumbImage=_mvThumbImage;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)onLoadImageOK:(id)arg1;
- (void)updateMinimizeThumbImage:(id)arg1;
- (void)setPlayerSource:(long long)arg1;
- (void)updateNodeWithTimePrefix:(int)arg1 headHidden:(_Bool)arg2 bottomLineHidden:(_Bool)arg3;
- (void)addMusicPlayButton;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)addMusicThumbView;
- (void)addContentSubView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

