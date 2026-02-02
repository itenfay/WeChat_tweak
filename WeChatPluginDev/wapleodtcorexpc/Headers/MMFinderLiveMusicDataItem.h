//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveMusicDataItem
{
    _Bool _playable;
    _Bool _isInBgMusicList;
    unsigned int _duration;
    NSString *_musicName;
    NSString *_musicAnchor;
    NSString *_albumName;
    NSString *_albumPicUrl;
    NSString *_genre;
    NSString *_publicTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isInBgMusicList; // @synthesize isInBgMusicList=_isInBgMusicList;
@property(copy, nonatomic) NSString *publicTime; // @synthesize publicTime=_publicTime;
@property(nonatomic) _Bool playable; // @synthesize playable=_playable;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *albumPicUrl; // @synthesize albumPicUrl=_albumPicUrl;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *musicAnchor; // @synthesize musicAnchor=_musicAnchor;
@property(copy, nonatomic) NSString *musicName; // @synthesize musicName=_musicName;
- (id)musicDurationString;
- (id)initWithFinderLiveMusicInfo:(id)arg1;

@end

