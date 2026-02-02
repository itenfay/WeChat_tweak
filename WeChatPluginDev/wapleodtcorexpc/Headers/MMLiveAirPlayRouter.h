//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPlayer, AVRoutePickerView, NSString, NSURL;

@interface MMLiveAirPlayRouter : NSObject
{
    _Bool _disableMutePlay;
    NSURL *_playingURL;
    AVPlayer *_player;
    AVRoutePickerView *_routePickerView;
}

+ (id)sharedRouter;
- (void).cxx_destruct;
@property(retain, nonatomic) AVRoutePickerView *routePickerView; // @synthesize routePickerView=_routePickerView;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool disableMutePlay; // @synthesize disableMutePlay=_disableMutePlay;
@property(retain, nonatomic) NSURL *playingURL; // @synthesize playingURL=_playingURL;
- (id)audienceLogReporter;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)showRoutePickerView;
- (void)unloadRoutePickerView;
- (void)loadRoutePickerViewIfNeeded;
- (void)playerExternalPlaybackActiveDidChange:(id)arg1;
- (void)destroyPlayer;
- (void)reloadPlayerWithURL:(id)arg1;
- (void)resumeAirPlayIfNeededWithURL:(id)arg1;
- (void)pauseAirPlayIfNeeded;
- (void)reloadAirPlay;
- (void)stopAirPlay;
- (void)startAirPlayWithURL:(id)arg1;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

