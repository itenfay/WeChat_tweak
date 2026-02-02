//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TingItem, TingPlayerConfiguration, TingPlayerStateMachine;
@protocol TingBizPlayerDelegate;

@interface TingBizPlayer : NSObject
{
    float _playRate;
    int _previousEvent;
    int _playerKernelType;
    TingItem *_tingItem;
    TingPlayerConfiguration *_tingConfiguration;
    id <TingBizPlayerDelegate> _delegate;
    double _currentTime;
    double _duration;
    double _displayTime;
    TingPlayerStateMachine *_stateMachine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingPlayerStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) int playerKernelType; // @synthesize playerKernelType=_playerKernelType;
@property(readonly, nonatomic) double displayTime; // @synthesize displayTime=_displayTime;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) int previousEvent; // @synthesize previousEvent=_previousEvent;
@property(nonatomic) __weak id <TingBizPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TingPlayerConfiguration *tingConfiguration; // @synthesize tingConfiguration=_tingConfiguration;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
- (void)openDetailPageInViewController:(id)arg1;
- (void)openAuthorPageInViewController:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)seekToTime:(double)arg1;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)play;
- (void)prepareToPlay;
@property(readonly, nonatomic) double bufferedTime;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isLoading;
- (_Bool)canSeek;
- (_Bool)isPlayRateSupported;
@property(readonly, nonatomic) int status;
- (id)view;
- (id)displayElement;
- (void)notifyProgressChanged;
@property(readonly, nonatomic) double progress;
- (void)onInfoEvent:(int)arg1 error:(id)arg2;
- (void)onEvent:(int)arg1 error:(id)arg2;
- (void)onError:(id)arg1 toastMessage:(id)arg2;
- (void)onError:(id)arg1;
- (void)reset;
- (void)updateTingItem:(id)arg1;
- (id)initWithTingItem:(id)arg1 configuartion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

