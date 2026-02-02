//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerReporter, WCPlayerView;

@interface WCPlayerAggregate : NSObject
{
    WCPlayerView *_playerView;
    WCPlayerReporter *_reporter;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerPlaybackInfo *_playbackInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView=_playerView;

@end

