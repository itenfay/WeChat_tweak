//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSString;

@interface WCFinderLivePlayerViewReporter : NSObject
{
    NSString *_playId;
    NSString *_playUrl;
    unsigned long long _videoDuration;
    MMFinderLiveTaskId *_liveTaskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) NSString *playId; // @synthesize playId=_playId;
- (void)reportLivePlayerViewReport:(unsigned long long)arg1 params:(id)arg2;
- (id)updateExtInfo:(double)arg1 errCode:(unsigned int)arg2 playUrl:(id)arg3;
- (void)onPlayerPlayFailed:(unsigned int)arg1 seekTime:(double)arg2;
- (void)onPlayerPlayFinishSeekTime:(double)arg1;
- (void)onPlayerResumeForLoaded:(unsigned long long)arg1 seekTime:(double)arg2;
- (void)onPlayerPauseForLoading:(unsigned long long)arg1 seekTime:(double)arg2;
- (void)onPlayerStartPlay:(id)arg1 videoExpectPlayTime:(unsigned long long)arg2 videoDuration:(unsigned long long)arg3 playUrl:(id)arg4;
- (id)initWithTaskId:(id)arg1;

@end

