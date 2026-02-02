//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveReplayTask, MMFinderLiveReplayTaskId, MMFinderLiveReplayView, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveGradientView, MMLiveRewardGiftRecievingAnimationView, NSString, UIPanGestureRecognizer, WCFinderLiveFullScreenGestureRecognizer, WCFinderLiveReplayControlView;
@protocol MMFinderLiveReplayOperationViewDelegate;

@interface MMFinderLiveReplayOperationView : UIView
{
    _Bool _isHiddenContent;
    id <MMFinderLiveReplayOperationViewDelegate> _operationDelegate;
    WCFinderLiveReplayControlView *_controlView;
    MMLiveRewardGiftRecievingAnimationView *_giftReceivingAnimationView;
    MMFinderLiveReplayView *_replayView;
    WCFinderLiveFullScreenGestureRecognizer *_fullScreenGesture;
    UIPanGestureRecognizer *_panGesture;
    MMLiveGradientView *_topShadowView;
    MMLiveGradientView *_bottomShadowView;
    MMFinderLiveTask *_finderLiveTask;
    MMFinderLiveReplayTaskId *_replayTaskId;
    MMFinderLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHiddenContent; // @synthesize isHiddenContent=_isHiddenContent;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveReplayTaskId *replayTaskId; // @synthesize replayTaskId=_replayTaskId;
@property(nonatomic) __weak MMFinderLiveTask *finderLiveTask; // @synthesize finderLiveTask=_finderLiveTask;
@property(retain, nonatomic) MMLiveGradientView *bottomShadowView; // @synthesize bottomShadowView=_bottomShadowView;
@property(retain, nonatomic) MMLiveGradientView *topShadowView; // @synthesize topShadowView=_topShadowView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) WCFinderLiveFullScreenGestureRecognizer *fullScreenGesture; // @synthesize fullScreenGesture=_fullScreenGesture;
@property(nonatomic) __weak MMFinderLiveReplayView *replayView; // @synthesize replayView=_replayView;
@property(readonly, nonatomic) MMLiveRewardGiftRecievingAnimationView *giftReceivingAnimationView; // @synthesize giftReceivingAnimationView=_giftReceivingAnimationView;
@property(retain, nonatomic) WCFinderLiveReplayControlView *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) __weak id <MMFinderLiveReplayOperationViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (_Bool)isFullScreenPanGestureShouldReceiveTouch:(id)arg1;
- (_Bool)isFullScreenGestureShouldReceiveTouch:(id)arg1;
- (double)getProgrressBarRight;
- (double)getProgrressBarLeft;
- (id)getPreviewContainerSuperView;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onPanned:(id)arg1;
- (_Bool)handleForFullScreenSingleTap;
- (void)onFullScreenSingleTap;
- (_Bool)shouldAllowProgressManipulationByPanning;
- (void)hideContents;
- (void)showContents;
- (void)addFullScreenGesture;
- (_Bool)shouldHideBottomMaskWhenCLeanScreen;
- (_Bool)shouldHideTopMaskWhenCLeanScreen;
@property(readonly, nonatomic) MMFinderLiveReplayTask *replayTask;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (id)createHLSPlayerConfig;
- (void)createReplayControlView;
- (void)layoutShadowView;
- (void)layoutReplayControlView;
- (void)layoutUI;
- (void)configureOperationViewWithConnectMicState:(id)arg1 connectMicStateValid:(_Bool)arg2 anchorInAudioMode:(_Bool)arg3 isScreenSharing:(_Bool)arg4;
- (void)onExitLive;
- (void)onGetDetailDataItem;
- (void)onReplayLiveInfoUpdate;
- (void)onGetLiveInfo;
- (void)onEnterLive;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithLiveTask:(id)arg1;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

