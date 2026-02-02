//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAAppStateChangedContextInfoMusicInfo
{
    _Bool _canKeepAliveByAudioPlay;
    _Bool _isPlayingMusic;
    _Bool _isMusicInteruptedByOtherSource;
}

@property(nonatomic) _Bool isMusicInteruptedByOtherSource; // @synthesize isMusicInteruptedByOtherSource=_isMusicInteruptedByOtherSource;
@property(nonatomic) _Bool isPlayingMusic; // @synthesize isPlayingMusic=_isPlayingMusic;
@property(nonatomic) _Bool canKeepAliveByAudioPlay; // @synthesize canKeepAliveByAudioPlay=_canKeepAliveByAudioPlay;
- (id)description;

@end

