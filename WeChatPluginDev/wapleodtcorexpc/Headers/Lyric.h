//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface Lyric : NSObject
{
    NSString *_saveTime;
    NSString *_version;
    long long _lyricCount;
    long long _lyricType;
    NSMutableArray *_sentencesArray;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    NSString *_by;
    long long _offset;
    long long _hasSegment;
}

- (void).cxx_destruct;
@property(nonatomic) long long hasSegment; // @synthesize hasSegment=_hasSegment;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *by; // @synthesize by=_by;
@property(retain, nonatomic) NSString *album; // @synthesize album=_album;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain) NSMutableArray *sentencesArray; // @synthesize sentencesArray=_sentencesArray;
@property(nonatomic) long long lyricType; // @synthesize lyricType=_lyricType;
@property(nonatomic) long long lyricCount; // @synthesize lyricCount=_lyricCount;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *saveTime; // @synthesize saveTime=_saveTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (long long)lyricFinishTime;
- (id)init;

@end

