//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UISlider, WAMediaCastingAirPlayDetector;
@protocol WAJSContextPlugin_NativeViewsRootViewProtocol;

@interface WAPluginComponent_VideoPlayer : NSObject
{
    _Bool _didAppear;
    Class VideoClass;
    struct CGPoint _contentOffset;
    struct CGRect _webViewFrame;
    _Bool _tabBarVisible;
    _Bool _scrollEnabled;
    _Bool _statusBarBlack;
    long long _contentInsetAdjustmentBehavior;
    unsigned int _delayFullScreenViewID;
    _Bool _statusBarHidden;
    _Bool _isInVideoFullScreen;
    _Bool _isInBackground;
    NSString *_appid;
    id <WAJSContextPlugin_NativeViewsRootViewProtocol> _embedViewDelegate;
    UISlider *_volumeViewSlider;
    WAMediaCastingAirPlayDetector *_airPlayDetector;
    long long _lastOrientation;
}

+ (long long)getDirection:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(retain, nonatomic) WAMediaCastingAirPlayDetector *airPlayDetector; // @synthesize airPlayDetector=_airPlayDetector;
@property(retain, nonatomic) UISlider *volumeViewSlider; // @synthesize volumeViewSlider=_volumeViewSlider;
@property(nonatomic) __weak id <WAJSContextPlugin_NativeViewsRootViewProtocol> embedViewDelegate; // @synthesize embedViewDelegate=_embedViewDelegate;
@property(nonatomic) _Bool isInVideoFullScreen; // @synthesize isInVideoFullScreen=_isInVideoFullScreen;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)getCurrentAppid;
- (id)getOrientationStr;
- (void)didRotate:(id)arg1;
- (void)onWAMediaCastingAirPlayDetector:(id)arg1 wirelessRouteActiveDidChange:(_Bool)arg2;
- (_Bool)isForground;
- (void)pauseVideoTemp:(_Bool)arg1 needFloat:(_Bool)arg2;
- (void)pauseVideoTemp:(_Bool)arg1;
- (void)snapshotVideoEnd;
- (void)snapshotVideoBegin;
- (id)getCurrentSnapshot;
- (void)enableWebViewScroll:(_Bool)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id)arg3;
- (long long)forceInterfaceOrientation;
- (id)minimizationItemInfoWithVideoView:(id)arg1;
- (void)_sendVideoBackgroundPlaybackChangeEvent:(_Bool)arg1 videoPlayerId:(long long)arg2 data:(id)arg3;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (_Bool)removeVideoPlayer:(unsigned int)arg1;
- (_Bool)operateVideoPlayer:(id)arg1 videoId:(unsigned int)arg2;
- (id)getWAVC;
- (void)videoPlayerView:(id)arg1 onVideoStateChange:(long long)arg2;
- (void)onVideoEvent:(id)arg1 param:(id)arg2;
- (id)getVolumeSlider;
- (void)onVolumeChange:(double)arg1;
- (id)getVideoPlayer:(unsigned int)arg1;
- (id)insertVideo:(id)arg1 pos:(struct CGRect)arg2 videoId:(unsigned int)arg3 parentId:(unsigned int)arg4 referrerPolicyType:(unsigned long long)arg5 backgroundColor:(id)arg6;
- (void)disableFullScreen;
- (void)handleVideoDisappear;
- (void)handleVideoAppear;
- (void)onWeAppEnterForeground;
- (void)appWillTerminate:(id)arg1;
- (void)onWeAppDidEnterBackground:(id)arg1;
- (void)onWeAppWillEnterBackground:(id)arg1;
- (id)webViewController;
- (struct CGRect)rootViewFrame;
- (void)initVolumeViewSilderIfNeeded;
- (void)dealloc;
- (void)unregisterAirPlayDectorDelegate;
- (void)registerAirPlayDetectorDelegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

