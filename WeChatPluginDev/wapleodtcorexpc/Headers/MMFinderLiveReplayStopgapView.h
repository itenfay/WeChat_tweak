//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveReplayStopgapPlayerViewModel, MMFinderLiveTaskId, MMFinderLiveWcPlayerView, MMTimer, NSString, UIImageView, UILabel;
@protocol MMFinderLiveReplayStopgapViewDelegate;

@interface MMFinderLiveReplayStopgapView : UIView
{
    id <MMFinderLiveReplayStopgapViewDelegate> _delegate;
    MMFinderLiveWcPlayerView *_playerView;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _countdownValue;
    MMTimer *_countdownTimer;
    MMFinderLiveReplayStopgapPlayerViewModel *_playerViewModel;
    UIView *_containerView;
    UIView *_blurView;
    UIView *_fadeTransitionView;
    UIView *_titleContainerView;
    UIImageView *_liveBrandIconView;
    UILabel *_titleView;
    UILabel *_subtitleView;
    UIView *_countdownContainerView;
    UILabel *_countdownLabel;
    UILabel *_countdownDescriptionLabel;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) UILabel *countdownDescriptionLabel; // @synthesize countdownDescriptionLabel=_countdownDescriptionLabel;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) UIView *countdownContainerView; // @synthesize countdownContainerView=_countdownContainerView;
@property(retain, nonatomic) UILabel *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *liveBrandIconView; // @synthesize liveBrandIconView=_liveBrandIconView;
@property(retain, nonatomic) UIView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) UIView *fadeTransitionView; // @synthesize fadeTransitionView=_fadeTransitionView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMFinderLiveReplayStopgapPlayerViewModel *playerViewModel; // @synthesize playerViewModel=_playerViewModel;
@property(retain, nonatomic) MMTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(nonatomic) unsigned long long countdownValue; // @synthesize countdownValue=_countdownValue;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveWcPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <MMFinderLiveReplayStopgapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)beginCompletionTransition;
- (void)countdownTick;
- (void)onLiveWcPlayerVideoSizeChange:(id)arg1 videoSize:(struct CGSize)arg2;
- (void)onMinimizeWindowDismissLiveView:(id)arg1;
- (void)onMinimizeWindowAttachLiveView:(id)arg1;
- (void)layoutSubviews;
- (void)beginCompletion;
- (void)start;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

