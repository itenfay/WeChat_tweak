//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RecommendedMusicInfo;

@interface EditVideoBGMSelectedMusicInfo
{
    int _isSearchMusic;
    int _isFromMusicTag;
    int _isMusicOn;
    int _isOriginSoundOn;
    long long _requestId;
    long long _musicIndex;
    RecommendedMusicInfo *_musicInfo;
    NSString *_musicFilePath;
    NSString *_searchMusicTag;
}

- (void).cxx_destruct;
@property(nonatomic) int isOriginSoundOn; // @synthesize isOriginSoundOn=_isOriginSoundOn;
@property(nonatomic) int isMusicOn; // @synthesize isMusicOn=_isMusicOn;
@property(retain, nonatomic) NSString *searchMusicTag; // @synthesize searchMusicTag=_searchMusicTag;
@property(nonatomic) int isFromMusicTag; // @synthesize isFromMusicTag=_isFromMusicTag;
@property(nonatomic) int isSearchMusic; // @synthesize isSearchMusic=_isSearchMusic;
@property(retain, nonatomic) NSString *musicFilePath; // @synthesize musicFilePath=_musicFilePath;
@property(retain, nonatomic) RecommendedMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) long long musicIndex; // @synthesize musicIndex=_musicIndex;
@property(nonatomic) long long requestId; // @synthesize requestId=_requestId;
- (_Bool)hasBgmMusic;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)genBGMSelectedMusicResult;

@end

