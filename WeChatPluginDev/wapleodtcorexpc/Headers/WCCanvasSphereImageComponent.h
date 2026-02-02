//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMProgressViewEx, NSString, UIView, WCAdvertiseSphereView;

@interface WCCanvasSphereImageComponent
{
    _Bool _didDelayShowScrollDownArea;
    WCAdvertiseSphereView *_sphereView;
    MMProgressViewEx *_loadingView;
    UIView *_turnToExploreView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool didDelayShowScrollDownArea; // @synthesize didDelayShowScrollDownArea=_didDelayShowScrollDownArea;
@property(retain, nonatomic) UIView *turnToExploreView; // @synthesize turnToExploreView=_turnToExploreView;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCAdvertiseSphereView *sphereView; // @synthesize sphereView=_sphereView;
- (void)onPanGestureEnd;
- (void)idleStateDidChenged:(_Bool)arg1;
- (id)getBackGroundColorWhenLoading;
- (void)resourceDidFailed;
- (void)resourceDidLoad;
- (void)resourceLoading;
- (double)fetchScrollDownAreaDelayTime;
- (_Bool)shouldShowScrollDownArea;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dimScrollDownArea;
- (void)lightScrollDownArea;
- (void)hideTurnToSearchView;
- (void)showTurnToSearchView;
- (void)tryToResetSphereMotionData;
- (void)tryToStopSphereMonitoring;
- (void)tryToStartSphereMonitoring;
- (id)fetchSphereCurrentSnapshotAndNewFrame:(struct CGRect *)arg1;
- (id)fetchSphereOriginSnapshotAndNewFrame:(struct CGRect *)arg1;
- (void)dealloc;
- (void)initViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

