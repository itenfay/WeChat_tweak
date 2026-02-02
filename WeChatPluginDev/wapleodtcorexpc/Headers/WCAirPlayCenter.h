//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAudioSessionRouteDescription;
@protocol OS_dispatch_queue;

@interface WCAirPlayCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_audioQueue;
    AVAudioSessionRouteDescription *_cachedRoute;
}

+ (id)sharedCenter;
- (void).cxx_destruct;
@property(retain) AVAudioSessionRouteDescription *cachedRoute; // @synthesize cachedRoute=_cachedRoute;
- (void)audioSessionRouteChange:(id)arg1;
- (void)_updateCachedRouteAsynchronously;
- (id)_getCurrentRouteSynchronously;
- (id)__currentRoute;
@property(readonly, nonatomic) _Bool isExternalScreenMode;
@property(readonly, nonatomic) _Bool isExternalPlaybackMode;
@property(readonly, nonatomic) long long currentAirPlayMode;
@property(readonly, nonatomic) _Bool isAirPlaying;
- (id)init;

@end

