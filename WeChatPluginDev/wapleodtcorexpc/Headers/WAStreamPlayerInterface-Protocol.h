//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVPlayerItemVideoOutput, NSArray, NSString, UIColor, UIImage, WCPlayerView;
@protocol WAVideoPlayerViewDelegate;

@protocol WAStreamPlayerInterface <NSObject>
@property(nonatomic) _Bool audioOnlyMode;
@property(retain, nonatomic) NSString *title;
@property(nonatomic) _Bool disableTapGesture;
@property(nonatomic) long long blockSize;
@property(copy, nonatomic) NSString *referrer;
@property(nonatomic) _Bool accurateSeek;
@property(retain, nonatomic) NSString *videoPath;
@property(nonatomic) _Bool hideCoverMask;
@property(readonly, nonatomic) _Bool isAirPlaying;
@property(readonly, nonatomic) _Bool isDLNACasting;
@property(nonatomic) _Bool enableCasting;
@property(nonatomic) _Bool isDrm;
@property(nonatomic) long long videoState;
@property(nonatomic) _Bool autoRotation;
@property(nonatomic) _Bool thumbFitWidth;
@property(nonatomic) unsigned int videoTaskTimeout;
@property(nonatomic) _Bool autoPauseIfNavigate;
@property(nonatomic) _Bool autoPauseIfOpenNative;
@property(nonatomic) _Bool obeyMuteSwitch;
@property(retain, nonatomic) NSString *scene;
@property(nonatomic) unsigned int appService;
@property(nonatomic) _Bool loop;
@property(nonatomic) _Bool enablePageGestureFull;
@property(nonatomic) _Bool enablePageGesture;
@property(nonatomic) _Bool needUpdateEvent;
@property(copy, nonatomic) NSString *userData;
@property(nonatomic) _Bool autoPlay;
@property(nonatomic) _Bool showDanmu;
@property(nonatomic) unsigned int videoId;
@property(nonatomic) _Bool customCache;
@property(nonatomic) __weak id <WAVideoPlayerViewDelegate> videoDelagate;
@property(nonatomic) long long orientation;
- (WCPlayerView *)playerView;
- (void)upnp_seek:(double)arg1;
- (void)upnp_pause;
- (void)upnp_play;
- (void)handleVideoDisappear;
- (void)handleVideoAppear;
- (void)exitCasting;
- (void)reconnectCasting;
- (void)switchCasting;
- (void)startCasting:(NSString *)arg1;
- (void)setBufferDuration:(float)arg1;
- (void)setPreloadSecTime:(float)arg1;
- (AVPlayerItemVideoOutput *)getAVPlayerItemVideoOutput;
- (void)setBackgroundColor:(UIColor *)arg1;
- (void)setVideoThumbImage:(UIImage *)arg1;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setPreferredForwardBufferDuration:(double)arg1;
- (void)updateDrmCompatible:(_Bool)arg1;
- (void)updateContentKeyUrl:(NSString *)arg1;
- (void)updateCertificateUrl:(NSString *)arg1;
- (_Bool)isLoading;
- (_Bool)isPlaying;
- (void)setSystemMuted:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setPlayBackRate:(float)arg1;
- (long long)pauseCount;
- (void)pauseTemp:(_Bool)arg1;
- (void)pausePlayAndLoading;
- (void)snapshotVideoEnd;
- (void)snapshotVideoBegin;
- (UIImage *)getCurrentSnapshot;
- (void)setDuration:(double)arg1;
- (_Bool)isFullScreen;
- (void)setObjectFit:(long long)arg1;
- (void)setDanmuList:(NSArray *)arg1;
- (void)sendDanmu:(NSString *)arg1 color:(UIColor *)arg2;
- (unsigned int)getControlsMask;
- (void)setControls:(unsigned int)arg1;
- (void)disableScroll:(_Bool)arg1;
- (void)delaySetVideoFrameInIpadWhenQuitFullScreen:(struct CGRect)arg1;
- (void)setVideoFrame:(struct CGRect)arg1;
- (void)relayoutForRotationWhileFullScreen;
- (void)enableFullScreen:(_Bool)arg1;
- (void)seek:(double)arg1 accurate:(_Bool)arg2;
- (void)seek:(double)arg1;
- (void)stop;
- (void)pause;
- (void)play:(_Bool)arg1;
- (void)hideVideoThumb;
- (void)setVideoThumb:(NSString *)arg1;
- (void)setVideoPath:(NSString *)arg1 initialTime:(double)arg2 isHLS:(long long)arg3;
- (id)initWithThumb:(NSString *)arg1 frame:(struct CGRect)arg2 referrer:(NSString *)arg3;
- (_Bool)updateAudioOnlyMode:(_Bool)arg1;
@end

