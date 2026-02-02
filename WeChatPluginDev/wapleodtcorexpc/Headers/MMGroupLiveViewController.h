//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGroupLiveOnlineUserProfileView, MMGroupLiveTask, MMLiveFullScreenTipsView, NSString;

@interface MMGroupLiveViewController
{
    MMGroupLiveOnlineUserProfileView *_profileView;
    MMLiveFullScreenTipsView *_kickedOutTipsView;
    long long _orientationBeforeMinimize;
    long long _previousOrientation;
    NSString *_lastFromVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastFromVC; // @synthesize lastFromVC=_lastFromVC;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(nonatomic) long long orientationBeforeMinimize; // @synthesize orientationBeforeMinimize=_orientationBeforeMinimize;
@property(retain, nonatomic) MMLiveFullScreenTipsView *kickedOutTipsView; // @synthesize kickedOutTipsView=_kickedOutTipsView;
@property(retain, nonatomic) MMGroupLiveOnlineUserProfileView *profileView; // @synthesize profileView=_profileView;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)onMMLiveOperationUserHeadImageClicked:(id)arg1 userInfo:(id)arg2;
- (void)onMMLiveActionButtonClicked;
- (void)onMMLiveNameVerifyViewControllerNameVerifyFailed:(long long)arg1;
- (void)onMMLiveNameVerifyViewControllerNameVerifySucceeded:(long long)arg1;
- (void)onKickedOut;
- (void)onStartCheckCreateLiveWithVerifyUrl:(id)arg1;
- (void)onStartCheckConnectMicWithVerifyUrl:(id)arg1;
- (void)onJoinLive:(id)arg1;
- (void)onCreateLive:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned long long)systemCapabilityAuthScene;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (void)onWillTransitionToMinimize;
- (void)viewDidTransitionToNewSize;
- (_Bool)shouldShowCloseButtonWhenMinimized;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)gotoUserProfile:(id)arg1 isAnchorHeadImage:(_Bool)arg2;
@property(readonly, nonatomic) MMGroupLiveTask *liveTask;
- (void)createLive:(id)arg1;
- (long long)roleType;
@property(readonly, nonatomic) NSString *roomId;
- (void)showLiveStarterViewController;
- (id)createCompleteViewController;
- (id)createOperationView;
- (void)layoutOperationView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)inner_supportedInterfaceOrientations;
- (_Bool)shouldSupportLandScape;
- (void)initReporter;
- (void)initLiveLogic;
- (void)initData;

// Remaining properties
@property(nonatomic) long long currOrientation;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

