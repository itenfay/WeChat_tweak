//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderPushFeedPlayParams : NSObject
{
    _Bool _pauseVideo;
    _Bool _forceResumePlaying;
    double _startPlayVideoTime;
    double _playbackRate;
}

@property(nonatomic) _Bool forceResumePlaying; // @synthesize forceResumePlaying=_forceResumePlaying;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) _Bool pauseVideo; // @synthesize pauseVideo=_pauseVideo;
@property(nonatomic) double startPlayVideoTime; // @synthesize startPlayVideoTime=_startPlayVideoTime;
- (id)init;

@end

