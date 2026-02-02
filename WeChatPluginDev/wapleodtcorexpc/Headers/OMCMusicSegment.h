//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OMJMusicInfo;

@interface OMCMusicSegment
{
}

@property(readonly, nonatomic) SharedPtr_3bac6d1d backingMusicSegment;
@property(nonatomic) _Bool isEndTimeConstraintEnabled;
@property(nonatomic) _Bool isStartTimeConstraintEnabled;
- (_Bool)updateLyricColorStyleWithID:(id)arg1;
- (_Bool)updateLyricFontName:(id)arg1;
- (_Bool)replaceMusicWithMusicInfo:(id)arg1 musicFilePath:(id)arg2 lyricStyleID:(id)arg3 duration:(CDStruct_1b6d18a9)arg4 isLooping:(_Bool)arg5;
- (_Bool)updateLyricStyleWithID:(id)arg1;
- (void)hideLyrics;
- (_Bool)showLyrics;
- (_Bool)isLyricsEnabled;
@property(readonly, nonatomic) NSString *lyricColorStyleID;
@property(readonly, nonatomic) NSString *lyricFontNameInMaterial;
@property(readonly, nonatomic) NSString *lyricFontName;
@property(readonly, nonatomic) NSString *lyricStyleID;
@property(readonly, nonatomic) NSString *musicFilePath;
@property(readonly, nonatomic) OMJMusicInfo *musicInfo;

@end

