//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MAVEffectRenderer, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSString, WCPlayerView;
@protocol FlutterTextureRegistry;

@interface FlutterThumbPlayer : UIView
{
    _Bool _isPlayerPrepared;
    _Bool _isFirstFrameRendered;
    _Bool _isPlayCompleted;
    _Bool _couldProduceFrame;
    int _renderWidth;
    int _renderHeight;
    WCPlayerView *playerView;
    long long _textureId;
    NSNumber *_playerId;
    NSDictionary *_playReport;
    CDUnknownBlockType _showBufferingBlock;
    CDUnknownBlockType _hideBufferingBlock;
    CDUnknownBlockType _stateChangeBlock;
    NSObject<FlutterTextureRegistry> *_registry;
    MAVEffectRenderer *_effectRender;
    long long _rotate;
    NSMutableDictionary *_effectMap;
    CDUnknownBlockType _listener;
    WCPlayerView *_player;
    struct __CVBuffer *_latestPixelBuffer;
    long long _scaleType;
    CDUnknownBlockType _onPreparedListener;
    CDUnknownBlockType _onFirstFrameRenderedListener;
    CDUnknownBlockType _onPlayCompleted;
    long long _frameCount;
    double _startCountTime;
}

- (void).cxx_destruct;
@property(nonatomic) double startCountTime; // @synthesize startCountTime=_startCountTime;
@property(nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) _Bool couldProduceFrame; // @synthesize couldProduceFrame=_couldProduceFrame;
@property(copy, nonatomic) CDUnknownBlockType onPlayCompleted; // @synthesize onPlayCompleted=_onPlayCompleted;
@property(copy, nonatomic) CDUnknownBlockType onFirstFrameRenderedListener; // @synthesize onFirstFrameRenderedListener=_onFirstFrameRenderedListener;
@property(copy, nonatomic) CDUnknownBlockType onPreparedListener; // @synthesize onPreparedListener=_onPreparedListener;
@property(nonatomic) long long scaleType; // @synthesize scaleType=_scaleType;
@property(readonly) struct __CVBuffer *latestPixelBuffer; // @synthesize latestPixelBuffer=_latestPixelBuffer;
@property(nonatomic) int renderHeight; // @synthesize renderHeight=_renderHeight;
@property(nonatomic) int renderWidth; // @synthesize renderWidth=_renderWidth;
@property(retain, nonatomic) WCPlayerView *player; // @synthesize player=_player;
@property(copy, nonatomic) CDUnknownBlockType listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSMutableDictionary *effectMap; // @synthesize effectMap=_effectMap;
@property(nonatomic) long long rotate; // @synthesize rotate=_rotate;
@property(retain, nonatomic) MAVEffectRenderer *effectRender; // @synthesize effectRender=_effectRender;
@property(readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
@property(copy, nonatomic) CDUnknownBlockType stateChangeBlock; // @synthesize stateChangeBlock=_stateChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType hideBufferingBlock; // @synthesize hideBufferingBlock=_hideBufferingBlock;
@property(copy, nonatomic) CDUnknownBlockType showBufferingBlock; // @synthesize showBufferingBlock=_showBufferingBlock;
@property(copy, nonatomic) NSDictionary *playReport; // @synthesize playReport=_playReport;
@property(nonatomic) _Bool isPlayCompleted; // @synthesize isPlayCompleted=_isPlayCompleted;
@property(nonatomic) _Bool isFirstFrameRendered; // @synthesize isFirstFrameRendered=_isFirstFrameRendered;
@property(nonatomic) _Bool isPlayerPrepared; // @synthesize isPlayerPrepared=_isPlayerPrepared;
@property(retain, nonatomic) NSNumber *playerId; // @synthesize playerId=_playerId;
@property(nonatomic) long long textureId; // @synthesize textureId=_textureId;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView;
- (void)setPlaySpeed:(float)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1;
- (void)onPlayerSeekFail:(float)arg1;
- (void)onPlayerSeekCompelete;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)stopObserveVolume;
- (void)startObserveVolume;
- (void)hiddenThumbImageView;
- (void)showThumbImageView;
- (void)hiddenPercentView;
- (void)showPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onCreateThumbImage:(id)arg1;
- (void)onReceiveAllVideoData;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPlayFail:(unsigned long long)arg1 LocalizedErrorDes:(id)arg2;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay:(id)arg1;
- (id)getFeedbackInfo;
- (unsigned long long)playerState;
- (void)setOnPlayerHidenBufferingListener:(CDUnknownBlockType)arg1;
- (void)setOnPlayerShowBufferingListener:(CDUnknownBlockType)arg1;
- (void)setOnPlayCompletedListener:(CDUnknownBlockType)arg1;
- (struct __CVBuffer *)copyPixelBuffer;
- (void)clearEffect;
- (void)updateEffect:(id)arg1;
- (void)removeEffect:(id)arg1;
- (void)addEffect:(id)arg1;
- (id)createEffect:(id)arg1;
- (double)doubleFromDict:(id)arg1 key:(id)arg2 defValue:(double)arg3;
- (void)destroy;
- (void)stop;
- (void)setLoop:(_Bool)arg1;
- (struct __CVBuffer *)getCVPixelBuffer;
- (void)setProgressChange:(CDUnknownBlockType)arg1;
- (void)setMute:(_Bool)arg1;
- (void)seek:(double)arg1;
- (void)pause;
- (void)play;
- (void)prepare;
- (void)setupPlayArgs:(id)arg1;
- (double)getVideoDuration;
- (struct CGSize)getVideoSize;
- (void)updatePlayerSize:(int)arg1 height:(int)arg2;
- (void)initPlayerSize:(int)arg1 height:(int)arg2;
- (id)initWithPlayerId:(id)arg1 registry:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

