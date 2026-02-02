//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIStackView.h>

@class UIButton, UIImageView;
@protocol RingToneToolActionResponder;

@interface RingToneToolView : UIStackView
{
    _Bool _isPlaying;
    id <RingToneToolActionResponder> _responder;
    UIButton *_playButton;
    UIButton *_cropButton;
    UIButton *_switchButton;
    UIButton *_moreButton;
    UIImageView *_musicDancingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *musicDancingView; // @synthesize musicDancingView=_musicDancingView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UIButton *cropButton; // @synthesize cropButton=_cropButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) __weak id <RingToneToolActionResponder> responder; // @synthesize responder=_responder;
- (void)onMoreButtonTap;
- (void)onSwitchButtonTap;
- (void)onPlayButtonTap;
- (void)setRingPlayButtonEnabled:(_Bool)arg1;
- (void)initiativeTriggerPlay;
- (void)updatePlayerMode:(unsigned long long)arg1;
- (void)dancingMusicView:(_Bool)arg1 type:(unsigned long long)arg2;
- (void)initMusicDanceingView;
- (void)addMorebutton;
- (void)initView;
- (void)config;
- (id)initWithFrame:(struct CGRect)arg1;

@end

