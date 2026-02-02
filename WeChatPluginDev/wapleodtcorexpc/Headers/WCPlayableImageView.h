//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSString, UILongPressGestureRecognizer, UIView, WCPlayerPlayArgs, WCPlayerView;

@interface WCPlayableImageView : UIImageView
{
    UILongPressGestureRecognizer *_playingLongPressGestureRecognizer;
    _Bool _playGestureEnabled;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerView *_playerView;
    CDUnknownBlockType _playerStateDidChange;
    UIView *_playerContainerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(nonatomic) _Bool playGestureEnabled; // @synthesize playGestureEnabled=_playGestureEnabled;
@property(copy, nonatomic) CDUnknownBlockType playerStateDidChange; // @synthesize playerStateDidChange=_playerStateDidChange;
@property(readonly, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
- (void)_handlePlayingLongPressGestureRecognizer:(id)arg1;
- (void)_initPlayingLongPressGestureRecognizerIfNeeded;
- (void)onPlayerProcessChange:(unsigned long long)arg1;
- (void)onPlayerStateChange:(unsigned long long)arg1;
- (void)clearPlayer;
- (void)pausePlaying;
- (void)startPlaying;
@property(readonly, nonatomic) unsigned long long playerState;
- (long long)viewContentModeFromPlayerArgs:(id)arg1;
- (long long)viewContentModeFromPlayerContentMode:(long long)arg1;
- (void)_loadPlayerViewIfPossible;
- (void)_loadPlayerContainerView;
- (void)setImage:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)dealloc;
- (void)_init;
- (id)initWithImage:(id)arg1 playerArgs:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 playerArgs:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

