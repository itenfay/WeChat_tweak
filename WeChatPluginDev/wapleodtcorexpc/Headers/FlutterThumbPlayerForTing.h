//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderPlayerViewForTing;

@interface FlutterThumbPlayerForTing
{
    WCFinderPlayerViewForTing *_finderPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPlayerViewForTing *finderPlayer; // @synthesize finderPlayer=_finderPlayer;
- (void)finderPlayerViewForTing:(id)arg1 onCurrentTimeUpdated:(double)arg2 duration:(double)arg3;
- (void)finderPlayerViewForTing:(id)arg1 onVideoFrameOut:(id)arg2;
- (void)finderPlayerViewForTing:(id)arg1 onVideoPrepareToPlay:(id)arg2;
- (unsigned long long)playerState;
- (void)setPlaySpeed:(float)arg1;
- (struct __CVBuffer *)getCVPixelBuffer;
- (void)destroy;
- (void)stop;
- (void)setLoop:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)seek:(double)arg1;
- (void)pause;
- (void)play;
- (void)prepare;
- (double)getVideoDuration;
- (struct CGSize)getVideoSize;
- (void)setupFinderObject:(id)arg1;
- (id)initWithPlayerId:(id)arg1 registry:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

