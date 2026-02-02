//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePromotionReplayOperationView, MMFinderLiveReplayView, MMFinderLiveTaskId, MMUIButton, NSDictionary, NSString, UIImageView, UINavigationController;
@protocol MMLiveViewControllerDelegate;

@interface MMFinderLivePromotionReplayViewController
{
    unsigned int _viewStartTime;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveReplayView *_replayView;
    id <MMLiveViewControllerDelegate> _delegate;
    UINavigationController *_navControl;
    NSDictionary *_reportExtraInfo;
    UIImageView *_blurView;
    long long _currOrientation;
    MMFinderLivePromotionReplayOperationView *_operationView;
    MMUIButton *_backBarButton;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int viewStartTime; // @synthesize viewStartTime=_viewStartTime;
@property(retain, nonatomic) MMUIButton *backBarButton; // @synthesize backBarButton=_backBarButton;
@property(retain, nonatomic) MMFinderLivePromotionReplayOperationView *operationView; // @synthesize operationView=_operationView;
@property(nonatomic) long long currOrientation; // @synthesize currOrientation=_currOrientation;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) NSDictionary *reportExtraInfo; // @synthesize reportExtraInfo=_reportExtraInfo;
@property(nonatomic) __weak UINavigationController *navControl; // @synthesize navControl=_navControl;
@property(nonatomic) __weak id <MMLiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveReplayView *replayView; // @synthesize replayView=_replayView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)audienceLogReporter;
- (void)onDoneButtonClicked;
- (id)promotionReplayOperationView;
- (id)liveTask;
- (void)close;
- (void)onMMLiveReplayVideoSizeChange:(struct CGSize)arg1;
- (void)onMMLiveFullScreenTaped;
- (void)exitAndClearLive;
- (void)initData;
- (void)layoutBlurView;
- (void)layoutReplayView;
- (void)layoutBackBarButton;
- (void)updateReplayOperationViewFrame;
- (void)layoutOperationView;
- (void)layoutUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)shouldInteractivePop;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)enterLive;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

