//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveContact, FinderLiveKtvSongReportInfo, MMFinderLiveKTVSongBasicInfo, MMFinderLiveKTVSongResourceInfo, NSMutableArray, NSString, WCFinderContact;

@interface MMFinderLiveKTVSongItem : NSObject
{
    _Bool _pause;
    int _duration;
    int _hasNote;
    int _hasSongFileid;
    int _hasAdded;
    unsigned int _songAddTime;
    unsigned int _songPlayTime;
    unsigned int _songFinishTime;
    unsigned int _status;
    unsigned int _score;
    int _songQuality;
    int _accompanyQuality;
    MMFinderLiveKTVSongBasicInfo *_basicInfo;
    NSString *_songName;
    NSString *_artistId;
    NSString *_artistName;
    NSString *_durationStr;
    NSString *_coverName;
    NSString *_songId;
    NSString *_uniqueId;
    FinderLiveContact *_liveContact;
    WCFinderContact *_singlerContact;
    NSString *_level;
    NSString *_micSdkUserId;
    MMFinderLiveKTVSongResourceInfo *_resourceInfo;
    NSMutableArray *_resources;
    FinderLiveKtvSongReportInfo *_reportInfo;
}

+ (_Bool)isSongItem:(id)arg1 uniqueEqual:(id)arg2;
+ (void)buildKTVSong:(id)arg1 withSongId:(id)arg2 uniqueId:(id)arg3 sdkUserId:(id)arg4;
+ (void)buildKTVSong:(id)arg1 withSongInfo:(id)arg2;
+ (void)buildKTVSong:(id)arg1 withPlayInfo:(id)arg2;
+ (void)buildKTVSong:(id)arg1 withResourceInfo:(id)arg2;
+ (void)buildKTVSong:(id)arg1 withBasicInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveKtvSongReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) int accompanyQuality; // @synthesize accompanyQuality=_accompanyQuality;
@property(nonatomic) int songQuality; // @synthesize songQuality=_songQuality;
@property(retain, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) MMFinderLiveKTVSongResourceInfo *resourceInfo; // @synthesize resourceInfo=_resourceInfo;
@property(retain, nonatomic) NSString *micSdkUserId; // @synthesize micSdkUserId=_micSdkUserId;
@property(nonatomic) unsigned int score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *level; // @synthesize level=_level;
@property(nonatomic) _Bool pause; // @synthesize pause=_pause;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) WCFinderContact *singlerContact; // @synthesize singlerContact=_singlerContact;
@property(retain, nonatomic) FinderLiveContact *liveContact; // @synthesize liveContact=_liveContact;
@property(nonatomic) unsigned int songFinishTime; // @synthesize songFinishTime=_songFinishTime;
@property(nonatomic) unsigned int songPlayTime; // @synthesize songPlayTime=_songPlayTime;
@property(nonatomic) unsigned int songAddTime; // @synthesize songAddTime=_songAddTime;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(nonatomic) int hasAdded; // @synthesize hasAdded=_hasAdded;
@property(nonatomic) int hasSongFileid; // @synthesize hasSongFileid=_hasSongFileid;
@property(nonatomic) int hasNote; // @synthesize hasNote=_hasNote;
@property(retain, nonatomic) NSString *coverName; // @synthesize coverName=_coverName;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *durationStr; // @synthesize durationStr=_durationStr;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *artistId; // @synthesize artistId=_artistId;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) MMFinderLiveKTVSongBasicInfo *basicInfo; // @synthesize basicInfo=_basicInfo;
- (id)description;
- (_Bool)hasResource:(unsigned int)arg1;
- (_Bool)isCriticalValid;
- (void)updateResourceInfo:(id)arg1;
- (_Bool)updateSingerContact:(id)arg1;
- (_Bool)updateBasicInfo:(id)arg1;

@end

