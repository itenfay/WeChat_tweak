//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMMusicLyricResolver : NSObject
{
    NSString *_lyrics;
    NSMutableArray *_lyricsList;
    NSMutableArray *_timeList;
    _Bool _isLyricListContainsEmptyStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *timeList; // @synthesize timeList=_timeList;
@property(retain, nonatomic) NSMutableArray *lyricsList; // @synthesize lyricsList=_lyricsList;
@property(retain, nonatomic) NSString *lyrics; // @synthesize lyrics=_lyrics;
- (double)getDuaration;
- (id)lyricsForTime:(double)arg1 preferCount:(unsigned long long)arg2;
- (id)lyricsForTime:(double)arg1;
- (int)getCurrentIndexWithTime:(float)arg1;
- (float)time_StringToFloat:(id)arg1;
- (_Bool)resolveLyrics:(id)arg1;
- (id)init;

@end

