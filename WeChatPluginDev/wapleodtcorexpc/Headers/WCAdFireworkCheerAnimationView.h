//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PAGView, UIButton, WCAdPagInfo, WCDataItem;
@protocol WCAdFireworkCheerAnimationViewDelegate;

@interface WCAdFireworkCheerAnimationView
{
    _Bool _isHideAnimating;
    _Bool _closedFlag;
    id <WCAdFireworkCheerAnimationViewDelegate> _delegate;
    WCDataItem *_dataItem;
    WCAdPagInfo *_pagInfo;
    unsigned long long _contentItemScene;
    double _canCloseDelayTime;
    double _vibrateDelayTime;
    PAGView *_animationPagView;
    UIButton *_maskButtonView;
    unsigned long long _playStartTimestampMs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool closedFlag; // @synthesize closedFlag=_closedFlag;
@property(nonatomic) _Bool isHideAnimating; // @synthesize isHideAnimating=_isHideAnimating;
@property(nonatomic) unsigned long long playStartTimestampMs; // @synthesize playStartTimestampMs=_playStartTimestampMs;
@property(retain, nonatomic) UIButton *maskButtonView; // @synthesize maskButtonView=_maskButtonView;
@property(retain, nonatomic) PAGView *animationPagView; // @synthesize animationPagView=_animationPagView;
@property(nonatomic) double vibrateDelayTime; // @synthesize vibrateDelayTime=_vibrateDelayTime;
@property(nonatomic) double canCloseDelayTime; // @synthesize canCloseDelayTime=_canCloseDelayTime;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCAdPagInfo *pagInfo; // @synthesize pagInfo=_pagInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCAdFireworkCheerAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)fireworkCheerExplode;
- (void)closeView;
- (_Bool)isAnimationPlaying;
- (_Bool)playAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)tryToStartHideAnimation;
- (void)onClickMaskButton:(id)arg1;
- (void)initMaskButtonView;
- (void)initAnimationPagView;
- (void)initView;
- (void)initRootViewController;
- (void)dealloc;
- (id)initWithPagInfo:(id)arg1 canCloseDelayTime:(double)arg2 vibrateDelayTime:(double)arg3 dataItem:(id)arg4 contentItemScene:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

