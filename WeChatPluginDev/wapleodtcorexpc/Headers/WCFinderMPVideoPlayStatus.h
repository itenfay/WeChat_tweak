//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderMPVideoPlayStatus : NSObject
{
    _Bool _pauseVideo;
    double _startPlayVideoTime;
    double _playbackRate;
}

@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) _Bool pauseVideo; // @synthesize pauseVideo=_pauseVideo;
@property(nonatomic) double startPlayVideoTime; // @synthesize startPlayVideoTime=_startPlayVideoTime;

@end

