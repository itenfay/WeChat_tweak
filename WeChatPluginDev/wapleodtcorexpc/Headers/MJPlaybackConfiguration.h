//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJID;

@interface MJPlaybackConfiguration : NSObject
{
    _Bool _isAudioEnabled;
    int _loopCount;
    unsigned long long _playbackMode;
    unsigned long long _playbackStartMode;
    OMJID *_segmentID;
    CDStruct_1b6d18a9 _startTimeOffset;
    CDStruct_1b6d18a9 _endTimeOffset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
@property(nonatomic) CDStruct_1b6d18a9 endTimeOffset; // @synthesize endTimeOffset=_endTimeOffset;
@property(nonatomic) CDStruct_1b6d18a9 startTimeOffset; // @synthesize startTimeOffset=_startTimeOffset;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) OMJID *segmentID; // @synthesize segmentID=_segmentID;
@property(nonatomic) unsigned long long playbackStartMode; // @synthesize playbackStartMode=_playbackStartMode;
@property(nonatomic) unsigned long long playbackMode; // @synthesize playbackMode=_playbackMode;
- (void)updateSegmentID:(id)arg1;
- (void)resetToSegmentModeWithSegmentID:(id)arg1 playbackStartMode:(unsigned long long)arg2 loopCount:(int)arg3 startTimeOffset:(CDStruct_1b6d18a9)arg4 endTimeOffset:(CDStruct_1b6d18a9)arg5 isAudioEnabled:(_Bool)arg6;
- (void)resetToTimelineMode;
- (CDStruct_1b6d18a9)playbackStartTimeWithTimelineVM:(id)arg1 playbackVM:(id)arg2;
- (CDStruct_e83c9415)playbackTimeRangeWithTimeRange:(CDStruct_e83c9415)arg1 timelineTimeRange:(CDStruct_e83c9415)arg2;
- (CDStruct_e83c9415)playbackTimeRangeWithTimelineVM:(id)arg1;
- (id)init;

@end

