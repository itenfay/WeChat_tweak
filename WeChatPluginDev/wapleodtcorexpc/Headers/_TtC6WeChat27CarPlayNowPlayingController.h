//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat27CarPlayNowPlayingController
{
    MISSING_TYPE *nowPlayingTemplate;
    MISSING_TYPE *repeatBtn;
    MISSING_TYPE *shuffleBtn;
    MISSING_TYPE *discoverTapeMgr;
    MISSING_TYPE *playingItem;
    MISSING_TYPE *playingCommentInfo;
    MISSING_TYPE *playingPlayList;
    MISSING_TYPE *playerPlayList;
}

- (void).cxx_destruct;
- (void)onPlayerLikeOp:(_Bool)arg1 listenId:(id)arg2;
- (void)nowPlayingTemplateUpNextButtonTapped:(id)arg1;
- (void)nowPlayingControllerWillAppear;
- (void)onTingPlayingInfoUpdate:(id)arg1;
- (void)flowPlayer:(id)arg1 onPlayerInfoEvent:(int)arg2 message:(id)arg3;
- (void)dealloc;

@end

