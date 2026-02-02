//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveFootageReplayModel, NSString;

@interface MMFinderLiveFootageReplayReporter : NSObject
{
    MMFinderLiveFootageReplayModel *_replayModel;
    unsigned long long _replayLengthInMilliseconds;
    NSString *_correlationId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *correlationId; // @synthesize correlationId=_correlationId;
@property(nonatomic) unsigned long long replayLengthInMilliseconds; // @synthesize replayLengthInMilliseconds=_replayLengthInMilliseconds;
@property(retain, nonatomic) MMFinderLiveFootageReplayModel *replayModel; // @synthesize replayModel=_replayModel;
- (id)replaceCommaToSemicolon:(id)arg1;
- (void)reportEvent:(id)arg1 params:(id)arg2;
- (void)onFootageReplaySeekFromMediaTimeInMilliseconds:(unsigned long long)arg1 toMediaTimeInMilliseconds:(unsigned long long)arg2;
- (void)onFootageReplayPausedAtMediaTimeInMilliseconds:(unsigned long long)arg1;
- (void)onFootageReplayOrientationChangeInvokedWithTargetOrientation:(long long)arg1;
- (void)onFootageReplayLeaveWithDurationInMilliseconds:(unsigned long long)arg1;
- (void)onFootageReplayStartWithLengthInMilliseconds:(unsigned long long)arg1;
- (void)onFootageReplayEnter;
- (id)initWithFootageReplayModel:(id)arg1;

@end

