//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BizFinderLivePlayersCallbackApi, FinderLivePlayInfo, MMLiveCDNPlayerItem, NSString;
@protocol FlutterTextureRegistry;

@interface BTLFinderLivePlayerItem : NSObject
{
    _Bool _isPlaying;
    _Bool _isWaitingPlay;
    _Bool _isDestory;
    _Bool _hasCallbackFirstFrame;
    FinderLivePlayInfo *_playInfo;
    NSObject<FlutterTextureRegistry> *_registry;
    BizFinderLivePlayersCallbackApi *_callback;
    long long _playerId;
    long long _textureId;
    MMLiveCDNPlayerItem *_cdnPlayerItem;
    NSString *_playUrl;
    long long _liveInfoReqStatus;
    struct __CVBuffer *_pixelBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasCallbackFirstFrame; // @synthesize hasCallbackFirstFrame=_hasCallbackFirstFrame;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) _Bool isDestory; // @synthesize isDestory=_isDestory;
@property(nonatomic) _Bool isWaitingPlay; // @synthesize isWaitingPlay=_isWaitingPlay;
@property(nonatomic) long long liveInfoReqStatus; // @synthesize liveInfoReqStatus=_liveInfoReqStatus;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) MMLiveCDNPlayerItem *cdnPlayerItem; // @synthesize cdnPlayerItem=_cdnPlayerItem;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) long long textureId; // @synthesize textureId=_textureId;
@property(readonly, nonatomic) long long playerId; // @synthesize playerId=_playerId;
@property(readonly, nonatomic) BizFinderLivePlayersCallbackApi *callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
@property(readonly, nonatomic) FinderLivePlayInfo *playInfo; // @synthesize playInfo=_playInfo;
- (void)onLiveCDNPlayerItem:(id)arg1 playEvent:(int)arg2 withParam:(id)arg3;
- (struct __CVBuffer *)cropYUVPixelBuffer:(struct __CVBuffer *)arg1 toRect:(struct CGRect)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 pixelBufferRendered:(struct __CVBuffer *)arg2;
- (void)onTextureUnregistered:(id)arg1;
- (struct __CVBuffer *)copyPixelBuffer;
- (void)releaseCurrentPixelBufferIfNeed;
- (void)requestFinderLiveInfoIfNeed;
- (void)destory;
- (void)stopPlay;
- (void)playUrlAndtryUpdateCategroy;
- (void)startPlay;
- (void)setPlayInfo:(id)arg1;
- (void)dealloc;
- (id)initWithPlayInfo:(id)arg1 registry:(id)arg2 callback:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

