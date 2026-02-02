//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveKSKitLyricSentence : NSObject
{
    _Bool _isSegCanSplit;
    int _startTime;
    int _duration;
    unsigned long long _initSegmentsCnt;
    unsigned long long _initWordsCnt;
    NSMutableArray *_lyricSegmentList;
}

+ (id)parseLyricSentence:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *lyricSegmentList; // @synthesize lyricSegmentList=_lyricSegmentList;
@property(nonatomic) unsigned long long initWordsCnt; // @synthesize initWordsCnt=_initWordsCnt;
@property(nonatomic) unsigned long long initSegmentsCnt; // @synthesize initSegmentsCnt=_initSegmentsCnt;
@property(nonatomic) _Bool isSegCanSplit; // @synthesize isSegCanSplit=_isSegCanSplit;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) int startTime; // @synthesize startTime=_startTime;
- (id)description;
@property(readonly, nonatomic) int endTime;
- (void)updateInitSegmentsAndWordsCnt;
- (unsigned long long)getCurrLyricWordsCnt;
- (void)removeLyricSegments:(id)arg1;
- (id)getLyricSegmentList;
- (void)addLyricSegment:(id)arg1;
- (void)initDefaultDatas;
- (id)init;

@end

