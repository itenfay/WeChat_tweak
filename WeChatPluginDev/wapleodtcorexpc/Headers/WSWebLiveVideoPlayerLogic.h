//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveCDNPlayerView, NSString, WCFinderDataItem;

@interface WSWebLiveVideoPlayerLogic
{
    MMLiveCDNPlayerView *_playerView;
    WCFinderDataItem *_finderDataItem;
    NSString *_streamUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *streamUrl; // @synthesize streamUrl=_streamUrl;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
- (void)setMuted:(_Bool)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)destroy;
- (void)stop;
- (void)pause;
- (void)play;
- (_Bool)isPlaying;
- (id)createPlayerView:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithViewId:(unsigned int)arg1 andStreamUrl:(id)arg2 andDelegate:(id)arg3;
- (id)initWithViewId:(unsigned int)arg1 andFinderDataItem:(id)arg2 andDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

