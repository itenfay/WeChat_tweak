//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMusicMVSongInfo : NSObject
{
    unsigned int _duration;
    NSString *_songName;
    NSString *_singer;
    NSString *_musicDataUrl;
    NSString *_musicAppId;
    NSString *_musicWebUrl;
    NSString *_songId;
    NSString *_musicID;
    NSString *_lyric;
    NSString *_albumName;
    NSString *_albumUrl;
    NSString *_genre;
    double _publicTime;
    NSString *_extraInfo;
    NSString *_identification;
    NSString *_customSongId;
    NSString *_lowerQualityImagePath;
    NSString *_musicOperationUrl;
    NSString *_mid;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_musicOperationUrl;
+ (void)PBArrayAdd_lyric;
+ (void)PBArrayAdd_albumUrl;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_identification;
+ (void)PBArrayAdd_extraInfo;
+ (void)PBArrayAdd_publicTime;
+ (void)PBArrayAdd_genre;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_musicID;
+ (void)PBArrayAdd_songId;
+ (void)PBArrayAdd_musicWebUrl;
+ (void)PBArrayAdd_musicAppId;
+ (void)PBArrayAdd_musicDataUrl;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_songName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *musicOperationUrl; // @synthesize musicOperationUrl=_musicOperationUrl;
@property(copy, nonatomic) NSString *lowerQualityImagePath; // @synthesize lowerQualityImagePath=_lowerQualityImagePath;
@property(copy, nonatomic) NSString *customSongId; // @synthesize customSongId=_customSongId;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *identification; // @synthesize identification=_identification;
@property(retain, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) double publicTime; // @synthesize publicTime=_publicTime;
@property(retain, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) NSString *albumUrl; // @synthesize albumUrl=_albumUrl;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
@property(retain, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NSString *musicWebUrl; // @synthesize musicWebUrl=_musicWebUrl;
@property(retain, nonatomic) NSString *musicAppId; // @synthesize musicAppId=_musicAppId;
@property(retain, nonatomic) NSString *musicDataUrl; // @synthesize musicDataUrl=_musicDataUrl;
@property(retain, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(readonly, copy) NSString *description;
- (id)toXML;
- (_Bool)isDetailInfoFulfilled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMusicInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

