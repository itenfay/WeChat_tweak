//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QQMusicInfo : NSObject
{
    unsigned int _type;
    unsigned int _songId;
    unsigned int _songPlayTime;
    int _copyright;
    unsigned int _offset;
    unsigned int _songType;
    NSString *_songMid;
    NSString *_songName;
    NSString *_singerName;
    NSString *_albumName;
    NSString *_albumPic150X150;
    NSString *_albumPic300X300;
    NSString *_albumPic500X500;
    NSString *_songPlayUrl;
    NSString *_songPlayUrlHq;
    NSString *_songPlayUrlSq;
    NSString *_songPlayUrlStandard;
    NSString *_songH5Url;
    NSString *_songLyric;
}

+ (void)initialize;
+ (void)PBArrayAdd_songType;
+ (void)PBArrayAdd_offset;
+ (void)PBArrayAdd_copyright;
+ (void)PBArrayAdd_songLyric;
+ (void)PBArrayAdd_songH5Url;
+ (void)PBArrayAdd_songPlayUrlStandard;
+ (void)PBArrayAdd_songPlayUrlSq;
+ (void)PBArrayAdd_songPlayUrlHq;
+ (void)PBArrayAdd_songPlayUrl;
+ (void)PBArrayAdd_songPlayTime;
+ (void)PBArrayAdd_albumPic500X500;
+ (void)PBArrayAdd_albumPic300X300;
+ (void)PBArrayAdd_albumPic150X150;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_singerName;
+ (void)PBArrayAdd_songName;
+ (void)PBArrayAdd_songMid;
+ (void)PBArrayAdd_songId;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(nonatomic) unsigned int songType; // @synthesize songType=_songType;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(nonatomic) int copyright; // @synthesize copyright=_copyright;
@property(retain, nonatomic) NSString *songLyric; // @synthesize songLyric=_songLyric;
@property(retain, nonatomic) NSString *songH5Url; // @synthesize songH5Url=_songH5Url;
@property(retain, nonatomic) NSString *songPlayUrlStandard; // @synthesize songPlayUrlStandard=_songPlayUrlStandard;
@property(retain, nonatomic) NSString *songPlayUrlSq; // @synthesize songPlayUrlSq=_songPlayUrlSq;
@property(retain, nonatomic) NSString *songPlayUrlHq; // @synthesize songPlayUrlHq=_songPlayUrlHq;
@property(retain, nonatomic) NSString *songPlayUrl; // @synthesize songPlayUrl=_songPlayUrl;
@property(nonatomic) unsigned int songPlayTime; // @synthesize songPlayTime=_songPlayTime;
@property(retain, nonatomic) NSString *albumPic500X500; // @synthesize albumPic500X500=_albumPic500X500;
@property(retain, nonatomic) NSString *albumPic300X300; // @synthesize albumPic300X300=_albumPic300X300;
@property(retain, nonatomic) NSString *albumPic150X150; // @synthesize albumPic150X150=_albumPic150X150;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *songMid; // @synthesize songMid=_songMid;
@property(nonatomic) unsigned int songId; // @synthesize songId=_songId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

