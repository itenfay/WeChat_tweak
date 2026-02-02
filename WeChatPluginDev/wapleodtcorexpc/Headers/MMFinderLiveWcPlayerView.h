//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTask, MMFinderLiveTaskId, MMFinderLiveWcPlayerViewModel, NSObject, NSString, WCPlayerView;
@protocol WCPlayerControlProtocol;

@interface MMFinderLiveWcPlayerView : UIView
{
    _Bool _isInMinimizeMode;
    _Bool _autoplay;
    unsigned int _initialPlayTime;
    WCPlayerView *_playerView;
    UIView *_blurBackgroundView;
    NSObject<WCPlayerControlProtocol> *_controlModel;
    NSString *_groupName;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveWcPlayerViewModel *_viewModel;
    NSString *_audioManagerGroupName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *audioManagerGroupName; // @synthesize audioManagerGroupName=_audioManagerGroupName;
@property(retain, nonatomic) MMFinderLiveWcPlayerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) unsigned int initialPlayTime; // @synthesize initialPlayTime=_initialPlayTime;
@property(nonatomic) _Bool isInMinimizeMode; // @synthesize isInMinimizeMode=_isInMinimizeMode;
@property(retain, nonatomic) NSObject<WCPlayerControlProtocol> *controlModel; // @synthesize controlModel=_controlModel;
@property(retain, nonatomic) UIView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
- (void)updateViewModel:(id)arg1;
@property(readonly, nonatomic) struct CGRect minimizeSrcFrame;
@property(readonly, nonatomic) UIView *minimizeSrcView;
- (id)getExtendTransitionContainerBackView;
- (struct CGRect)getNormalizedMinimizeSrcFrameForBusiness:(long long)arg1;
@property(readonly, nonatomic) struct CGSize playerPresentationSize;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)updatePlayerViewFrame:(struct CGRect)arg1;
- (void)setupPlayerView;
- (void)setPlayerContentMode:(long long)arg1;
- (void)updatePlaySrcPath;
- (void)forceLayout;
- (void)prepareForMinimizeMode;
- (void)prepareForMaximizeMode;
- (void)unMute;
- (void)mute;
- (void)resumePlay;
- (void)pause;
- (void)stopPlay;
- (void)startPlay;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 audioManagerGroupName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

