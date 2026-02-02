//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMFinderLiveReplayMessagePage : NSObject
{
    unsigned int _timeOffset;
    unsigned int _timespan;
    NSString *_liveDesc;
    NSMutableArray *_frames;
    MMFinderLiveReplayMessagePage *_nextLessRecentlyUsedPage;
    MMFinderLiveReplayMessagePage *_nextMoreRecentlyUsedPage;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveReplayMessagePage *nextMoreRecentlyUsedPage; // @synthesize nextMoreRecentlyUsedPage=_nextMoreRecentlyUsedPage;
@property(retain, nonatomic) MMFinderLiveReplayMessagePage *nextLessRecentlyUsedPage; // @synthesize nextLessRecentlyUsedPage=_nextLessRecentlyUsedPage;
@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(copy, nonatomic) NSString *liveDesc; // @synthesize liveDesc=_liveDesc;
@property(nonatomic) unsigned int timespan; // @synthesize timespan=_timespan;
@property(nonatomic) unsigned int timeOffset; // @synthesize timeOffset=_timeOffset;
- (void)populateFramesWithTimeOffset:(unsigned int)arg1 timespan:(unsigned int)arg2 frameItems:(id)arg3 liveTaskId:(id)arg4 initialLiveMicInfo:(id)arg5 initialLiveRoomImages:(id)arg6;
- (id)frameAtTimeOffset:(unsigned int)arg1 combinePreviousFramesInPage:(_Bool)arg2;
- (id)initWithTimeOffset:(unsigned int)arg1 messageResponse:(id)arg2 liveTaskId:(id)arg3 initialLiveMicInfo:(id)arg4 initialLiveRoomImages:(id)arg5;

@end

