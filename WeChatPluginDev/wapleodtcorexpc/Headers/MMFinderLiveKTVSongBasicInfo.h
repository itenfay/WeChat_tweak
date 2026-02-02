//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveKTVSongBasicInfo : NSObject
{
    int _duration;
    int _hasNote;
    int _hasSongFileid;
    int _hasAdded;
    NSString *_songId;
    NSString *_songName;
    NSString *_artistId;
    NSString *_artistName;
    NSString *_durationStr;
    NSString *_coverName;
}

+ (void)buildSongBasicInfo:(id)arg1 withBasicInfo:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int hasAdded; // @synthesize hasAdded=_hasAdded;
@property(nonatomic) int hasSongFileid; // @synthesize hasSongFileid=_hasSongFileid;
@property(nonatomic) int hasNote; // @synthesize hasNote=_hasNote;
@property(retain, nonatomic) NSString *coverName; // @synthesize coverName=_coverName;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *durationStr; // @synthesize durationStr=_durationStr;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *artistId; // @synthesize artistId=_artistId;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;

@end

