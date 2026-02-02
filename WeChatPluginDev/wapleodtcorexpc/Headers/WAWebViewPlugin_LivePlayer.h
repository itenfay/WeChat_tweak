//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WAMediaCastingAirPlayDetector;

@interface WAWebViewPlugin_LivePlayer
{
    struct CGRect _webViewFrame;
    _Bool _tabBarVisible;
    struct CGPoint _contentOffset;
    _Bool _statusBarBlack;
    _Bool _scrollEnabled;
    _Bool _isInLiveFullScreen;
    _Bool _isInBackground;
    long long _lastOrientation;
    NSMutableDictionary *_playerDic;
    CDUnknownBlockType _operateCallback;
    WAMediaCastingAirPlayDetector *_airPlayDetector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAMediaCastingAirPlayDetector *airPlayDetector; // @synthesize airPlayDetector=_airPlayDetector;
@property(copy, nonatomic) CDUnknownBlockType operateCallback; // @synthesize operateCallback=_operateCallback;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(retain, nonatomic) NSMutableDictionary *playerDic; // @synthesize playerDic=_playerDic;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(nonatomic) _Bool isInLiveFullScreen; // @synthesize isInLiveFullScreen=_isInLiveFullScreen;
- (void)onMinimizeTaskStateChangeToMaximized:(id)arg1;
- (void)onMinimizeTaskClosed:(id)arg1;
- (_Bool)isPlaying:(id)arg1;
- (void)exitBackgroundPlayback:(id)arg1 playerId:(unsigned int)arg2 needClearBgInfo:(_Bool)arg3;
- (void)requestBackgroundPlayback:(id)arg1 playerId:(unsigned int)arg2;
- (void)willEnterBackgroundPlayback:(id)arg1 playerId:(unsigned int)arg2;
- (void)onWAMediaCastingAirPlayDetector:(id)arg1 wirelessRouteActiveDidChange:(_Bool)arg2;
- (void)unregisterAirPlayDectorDelegate;
- (void)registerAirPlayDetectorDelegate;
- (id)getWebViewController;
- (id)getOrientationStr;
- (void)didRotate:(id)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (struct CGRect)fullScreenFrame;
- (void)onInsertLogView:(unsigned int)arg1;
- (void)onPlayerEvent:(id)arg1 param:(id)arg2 toWebview:(_Bool)arg3;
- (void)onPlayerEvent:(id)arg1 param:(id)arg2;
- (void)disableFullScreen;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 playerId:(unsigned int)arg3;
- (void)onPlayNetStatus:(id)arg1 playerId:(unsigned int)arg2;
- (void)onVideoEvent:(id)arg1 playerId:(unsigned int)arg2;
- (void)onPlayEvent:(int)arg1 evtMsg:(id)arg2 playerId:(unsigned int)arg3 param:(id)arg4;
- (void)onAudioVolumeEvaluation:(unsigned int)arg1 volume:(int)arg2;
- (id)getLivePlayerWithPlayerId:(unsigned int)arg1;
- (_Bool)removeLivePlayer:(unsigned int)arg1;
- (void)snapshotLivePlayer:(unsigned int)arg1 needCompress:(_Bool)arg2 isSnapshotStream:(_Bool)arg3 finish:(CDUnknownBlockType)arg4;
- (id)minimizationItemInfoWithLivePlayer:(id)arg1;
- (void)_sendLiveBackgroundPlaybackChangeEvent:(_Bool)arg1 liveId:(long long)arg2;
- (void)onLivePlayerCallBack:(_Bool)arg1 errNo:(long long)arg2 errMsg:(id)arg3;
- (void)operateLivePlayer:(unsigned int)arg1 type:(id)arg2 data:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateLivePlayer:(unsigned int)arg1 configs:(id)arg2;
- (void)updateLivePlayer:(unsigned int)arg1 configs:(id)arg2 pos:(struct CGRect)arg3;
- (unsigned int)insertLivePlayer:(unsigned int)arg1 parentId:(unsigned int)arg2 pos:(struct CGRect)arg3 configs:(id)arg4;
- (void)dealloc;
- (void)onAppEnterForeground;
- (void)onWeAppEnterForeground;
- (void)onWeAppDidEnterBackground;
- (void)onWeAppWillEnterBackground;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

