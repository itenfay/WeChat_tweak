//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class Lyric, NSArray, NSString;

@interface TRKQrcLyric : NSObject
{
    _Bool _isValid;
    NSString *_saveTime;
    NSString *_version;
    long long _lyricCount;
    long long _lyricType;
    NSArray *_sentences;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    NSString *_by;
    long long _offset;
    long long _hasSegment;
    long long _lyricFinishTime;
    Lyric *_lyric;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Lyric *lyric; // @synthesize lyric=_lyric;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) long long lyricFinishTime; // @synthesize lyricFinishTime=_lyricFinishTime;
@property(nonatomic) long long hasSegment; // @synthesize hasSegment=_hasSegment;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *by; // @synthesize by=_by;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *sentences; // @synthesize sentences=_sentences;
@property(nonatomic) long long lyricType; // @synthesize lyricType=_lyricType;
@property(nonatomic) long long lyricCount; // @synthesize lyricCount=_lyricCount;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *saveTime; // @synthesize saveTime=_saveTime;
- (id)timeInfoArrayForScore;
- (id)initWithLyric:(id)arg1;

@end

