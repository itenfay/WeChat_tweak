//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface OMJMusicInfo : NSObject
{
    NSString *_musicID;
    NSString *_songName;
    NSString *_singerName;
    NSString *_coverImageURL;
    NSArray *_lyricInfos;
    NSString *_externalMusicID;
    shared_ptr_c29e59e1 _backingInfo;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _startTime;
}

+ (id)convertMusicLyricInfos:(id)arg1;
+ (id)infoFromSelectedMusicData:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_c29e59e1 backingInfo; // @synthesize backingInfo=_backingInfo;
@property(retain, nonatomic) NSString *externalMusicID; // @synthesize externalMusicID=_externalMusicID;
@property(readonly, nonatomic) NSArray *lyricInfos; // @synthesize lyricInfos=_lyricInfos;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSString *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(readonly, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(readonly, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(readonly, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBackingInfo:(const void *)arg1;
- (id)initWithMusicID:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3;
- (id)initWithMusicID:(id)arg1 songName:(id)arg2 singerName:(id)arg3 coverImageURL:(id)arg4 duration:(CDStruct_1b6d18a9)arg5 startTime:(CDStruct_1b6d18a9)arg6 lyricInfos:(id)arg7;
- (id)initWithMusicID:(id)arg1 songName:(id)arg2 singerName:(id)arg3 duration:(CDStruct_1b6d18a9)arg4 lyricInfos:(id)arg5;
- (unsigned long long)musicReportType;
- (void)setMusicReportType:(unsigned long long)arg1;
- (int)bgmItemType;
- (void)setBgmItemType:(int)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)recommendBuf;
- (void)setRecommendBuf:(id)arg1;
- (_Bool)isEqualToMusicData:(id)arg1;
- (id)musicLyricInfos;
- (_Bool)isMusicLiked;
- (_Bool)playable;
- (id)musicUrl;
- (unsigned long long)songDurationInMs;
- (id)songAuthorName;
- (id)coverUrl;
- (id)musicId;
- (id)displayTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

