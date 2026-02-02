//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, UIButton, WCAdvertiseInfo, WCCanvasComponentItem, WCCanvasMusicMgr, WCCanvasReportMgr;
@protocol WCCanvasComponentDelegate;

@interface WCCanvasComponent
{
    int _type;
    WCCanvasComponentItem *_componentItem;
    WCAdvertiseInfo *_advertiseInfo;
    NSIndexPath *_indexPath;
    long long _orientation;
    id <WCCanvasComponentDelegate> _delegate;
    UIButton *_bgButton;
}

+ (double)calcHeightForCanvasItem:(id)arg1 withMaxWidth:(double)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4;
+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
+ (id)componentWithItemInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) WCAdvertiseInfo *advertiseInfo; // @synthesize advertiseInfo=_advertiseInfo;
@property(retain, nonatomic) WCCanvasComponentItem *componentItem; // @synthesize componentItem=_componentItem;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (void)canvasCloseBtnClick;
- (void)notifyToShowFloatComponent;
- (_Bool)hasFloatComponentInfo;
- (void)setLayoutComponentBorder;
- (void)setButtonComponentTitleFont:(id)arg1;
- (void)setButtonComponentTitleColor:(id)arg1 withDuration:(double)arg2;
- (void)setComponentStyleWithBackgroundColor:(id)arg1 textColor:(id)arg2 contentSize:(struct CGSize)arg3;
- (void)getComponentStyleWithBackgroundColor:(id *)arg1 textColor:(id *)arg2;
- (void)showComponentInitAnimation;
- (unsigned long long)fetchComponentInitAnimationStage;
- (_Bool)checkAndTriggerToShowFloatView:(double)arg1;
- (_Bool)isComponentDisplayed;
- (_Bool)isComponentDisplayMoreThanHalf;
- (_Bool)isComponentContentViewScrolledToTop;
- (void)setComponentContentViewScrollEnabled:(_Bool)arg1;
- (_Bool)isCanvasInHalfScreenMode;
- (_Bool)isInHomeIndicatorArea;
- (_Bool)isComponentLastCellInSection;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (id)fetchSphereCurrentSnapshotAndNewFrame:(struct CGRect *)arg1;
- (id)fetchSphereOriginSnapshotAndNewFrame:(struct CGRect *)arg1;
- (void)updatebgButton;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)arg1;
- (void)onClickComponentTouchButton:(id)arg1 forEvent:(id)arg2;
- (_Bool)isBgMoreBlack;
@property(readonly, nonatomic) _Bool shouldUseSnsCdnDownload;
@property(readonly, nonatomic) unsigned int downloadScene;
@property(readonly, nonatomic) WCCanvasMusicMgr *musicMgr;
@property(readonly, nonatomic) WCCanvasReportMgr *reportMgr;
- (_Bool)shouldVideoComponentTryToPlay;
- (void)tryToSetVideoPlayingState:(_Bool)arg1;
- (void)resetSightViewAudioState:(_Bool)arg1;
- (void)componentReportAddExposureCount;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)willRotateToOrientation:(long long)arg1 duration:(double)arg2;
- (double)calcAppearFactor;
- (_Bool)hasPreloadWebViewInScrollGroupComponent;
- (double)getPreloadWebViewBottomInScrollGroupComponent;
- (double)fetchScrollDownAreaDelayTime;
- (_Bool)shouldShowScrollDownArea;
- (void)didBottomSwipeActionComplete;
- (_Bool)shouldAllowBottomSwipeAction;
- (void)randomPickSetCardViewsForTransitionBeginning:(_Bool)arg1;
- (void)randomPickShowImpressiveAnimation;
- (void)randomPickResetRandomPickCardStatus;
- (id)randomPickFetchRandomPickCardComponent;
- (id)encoreShakeFetchRedEnvelopStatusInfo;
- (void)encoreShakeResetSpecialView;
- (_Bool)encoreShakeShouldForbidShakeSpecialView;
- (_Bool)shouldForbidDelegateShowFloatActionBtn;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (_Bool)isCanvasVisible;
- (struct CGSize)calcCurrentSize;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

