//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTemplateMoviePlayer, NSString, UIView, WCAudioModuleProxy;

@interface MJTemplatePlayerManager
{
    MJTemplateMoviePlayer *_playingPlayer;
    UIView *_playingContainerView;
    WCAudioModuleProxy *_auidoModuleProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAudioModuleProxy *auidoModuleProxy; // @synthesize auidoModuleProxy=_auidoModuleProxy;
@property(nonatomic) __weak UIView *playingContainerView; // @synthesize playingContainerView=_playingContainerView;
@property(retain, nonatomic) MJTemplateMoviePlayer *playingPlayer; // @synthesize playingPlayer=_playingPlayer;
- (void)_movePlayer:(id)arg1 toView:(id)arg2;
- (void)_stopPlayer:(id)arg1;
- (CDStruct_1b6d18a9)currentPlaybackTimeWithClipBundleID:(id)arg1;
- (void)stopPlayingWithClipBundleID:(id)arg1;
- (void)startPlayingInView:(id)arg1 withClipBundleID:(id)arg2 isMuted:(_Bool)arg3;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

