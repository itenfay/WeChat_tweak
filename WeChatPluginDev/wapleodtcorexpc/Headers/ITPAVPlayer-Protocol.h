//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "ITPLog-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, TPPlayerLayerViewContainer, TPPlayerVideo, UIImage;

@protocol ITPAVPlayer <NSObject, ITPLog>
@property(nonatomic) _Bool enableAutoPictureInPicture;
@property(nonatomic) _Bool isPlayInPIP;
@property(nonatomic) long long currentClipIndex;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool allowsExternalPlayback;
@property(copy, nonatomic) NSString *externalPlaybackVideoGravity;
@property(copy, nonatomic) NSString *videoGravity;
@property(nonatomic) _Bool enableResourceLoader;
@property(nonatomic) _Bool enableSnapshot;
@property(nonatomic) long long loopbackSkipEndPos;
@property(nonatomic) long long loopbackStartPos;
@property(nonatomic) _Bool enableLoopback;
@property(nonatomic) _Bool enableVideoFrameOutput;
@property(nonatomic) _Bool enableAccurateStartPos;
@property(readonly, nonatomic) int playerID;
@property(readonly, nonatomic) NSError *error;
@property long long playbackState;
@property(nonatomic) float volume;
@property(nonatomic) float rate;
@property(nonatomic) unsigned long long allowedAudioSpatializationFormats;
@property(nonatomic) long long preferredForwardBufferDurationMs;
@property(nonatomic) long long bufferedDuration;
@property(nonatomic) _Bool isCaching;
@property(nonatomic) double currentTimeBase;
@property(nonatomic) long long currentTime;
@property(nonatomic) long long duration;
@property(readonly, nonatomic) TPPlayerVideo *currentVideo;
@property __weak id delegate;
@property(retain, nonatomic) TPPlayerLayerViewContainer *view;
- (_Bool)deselectTrackInfoWithoutCallback:(long long)arg1 opaque:(long long)arg2;
- (_Bool)deselectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (_Bool)selectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (NSArray *)trackInfoArray;
- (void)setTimeObserverBlock:(void (^)(struct))arg1;
- (void)resumeOutputFrame;
- (void)pauseOutputFrame;
- (void)stopOutputFrame;
- (void)startOutputFrame:(double)arg1;
- (UIImage *)snapshot;
- (void)seekToTime:(long long)arg1 mode:(long long)arg2;
- (void)stop;
- (void)pause;
- (void)play;
- (void)updateVideo:(TPPlayerVideo *)arg1;
- (void)loadVideo:(TPPlayerVideo *)arg1;
@end

