//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TPTimeTracker, TPTimer;

@interface TPLiveRecord : NSObject
{
    TPTimer *_livePeroidTimer;
    TPTimeTracker *_liveBufferingTracker;
    long long _peroidBufferedDurationMs;
    long long _peroidBufferedCount;
    long long _prepareStartTime;
    long long _prepareEndTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long prepareEndTime; // @synthesize prepareEndTime=_prepareEndTime;
@property(nonatomic) long long prepareStartTime; // @synthesize prepareStartTime=_prepareStartTime;
@property(nonatomic) long long peroidBufferedCount; // @synthesize peroidBufferedCount=_peroidBufferedCount;
@property(nonatomic) long long peroidBufferedDurationMs; // @synthesize peroidBufferedDurationMs=_peroidBufferedDurationMs;
@property(retain, nonatomic) TPTimeTracker *liveBufferingTracker; // @synthesize liveBufferingTracker=_liveBufferingTracker;
@property(retain, nonatomic) TPTimer *livePeroidTimer; // @synthesize livePeroidTimer=_livePeroidTimer;

@end

