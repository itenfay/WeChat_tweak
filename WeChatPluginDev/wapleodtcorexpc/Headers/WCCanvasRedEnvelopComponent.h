//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCanvasDynamicDataLoader;

@interface WCCanvasRedEnvelopComponent
{
    int _animateState;
    WCCanvasDynamicDataLoader *_dataLoader;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) int animateState; // @synthesize animateState=_animateState;
- (void)reportComponentForReportType:(unsigned int)arg1;
- (id)fetchRedEnvelopStatusInfo;
- (void)updateComponentCardViewWithStatus:(unsigned int)arg1 opType:(unsigned int)arg2;
- (void)onFetchTwistCardStatusWithResult:(_Bool)arg1 opType:(unsigned int)arg2 cardId:(id)arg3 status:(unsigned int)arg4 giveCardId:(id)arg5 receiveUrl:(id)arg6;
- (void)tryToUpdateCardStatusWithOpType:(unsigned int)arg1;
- (int)fetchComponentCardSubtype;
- (void)jumpToRedEnvelop;
- (void)onActionButtonClickedWithBaseType:(int)arg1 subCardType:(int)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)tryToShowGreatShadow;
- (void)tryToShowFadeAwayAnimation;
- (void)tryToShowRotateAnimation;
- (void)parseDynamicInfo;
- (void)initViews;
- (id)currentVisibleCardView;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (void)encoreShakeResetSpecialView;
- (id)encoreShakeFetchRedEnvelopStatusInfo;
- (_Bool)encoreShakeShouldForbidShakeSpecialView;
- (void)resetSightViewAudioState:(_Bool)arg1;
- (void)componentReportAddExposureCount;
- (void)canvasCloseBtnClick;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

