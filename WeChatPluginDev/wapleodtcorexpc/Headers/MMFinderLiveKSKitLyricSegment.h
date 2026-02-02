//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveKSKitLyricSegment : NSObject
{
    int _startTime;
    int _duration;
    int _endTime;
    NSMutableArray *_lyricWordList;
}

+ (id)parseLyricSentence:(id)arg1;
+ (id)parseLyricSegment:(id)arg1 sentence:(id)arg2 wordBeginIndex:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *lyricWordList; // @synthesize lyricWordList=_lyricWordList;
@property(readonly, nonatomic) int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) int startTime; // @synthesize startTime=_startTime;
- (void)removeLyricWords:(id)arg1;
- (unsigned long long)lyricWordsCnt;
- (void)addLyricWord:(id)arg1;
- (id)getLyricWordList;
- (void)initDefaultDatas;
- (id)init;

@end

