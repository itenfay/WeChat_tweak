//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveActivityTask, MMFinderLiveActivityTaskId, MMFinderLiveOlyBarrageContainerView;

@interface MMFinderLiveWinterOlympicView
{
    _Bool _showLiveStream;
    _Bool _isWidgetHiddenForParticipateAnimation;
    MMFinderLiveActivityTaskId *_activityTaskId;
    MMFinderLiveOlyBarrageContainerView *_barrageContainerView;
    unsigned long long _backgroundAnimationCountdownDay;
    struct CGSize _backgroundAnimationCanvasSize;
    CDStruct_78c249a6 _backgroundAnimationPrimaryGraphicsOutlineCircle;
    struct CGRect _backgroundAnimationPrimaryGraphicsFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isWidgetHiddenForParticipateAnimation; // @synthesize isWidgetHiddenForParticipateAnimation=_isWidgetHiddenForParticipateAnimation;
@property(nonatomic) unsigned long long backgroundAnimationCountdownDay; // @synthesize backgroundAnimationCountdownDay=_backgroundAnimationCountdownDay;
@property(nonatomic) struct CGSize backgroundAnimationCanvasSize; // @synthesize backgroundAnimationCanvasSize=_backgroundAnimationCanvasSize;
@property(nonatomic) CDStruct_78c249a6 backgroundAnimationPrimaryGraphicsOutlineCircle; // @synthesize backgroundAnimationPrimaryGraphicsOutlineCircle=_backgroundAnimationPrimaryGraphicsOutlineCircle;
@property(nonatomic) struct CGRect backgroundAnimationPrimaryGraphicsFrame; // @synthesize backgroundAnimationPrimaryGraphicsFrame=_backgroundAnimationPrimaryGraphicsFrame;
@property(retain, nonatomic) MMFinderLiveOlyBarrageContainerView *barrageContainerView; // @synthesize barrageContainerView=_barrageContainerView;
@property(retain, nonatomic) MMFinderLiveActivityTaskId *activityTaskId; // @synthesize activityTaskId=_activityTaskId;
@property(nonatomic) _Bool showLiveStream; // @synthesize showLiveStream=_showLiveStream;
- (void)updateWidgetsHiddenForParticipateAnimation:(_Bool)arg1;
- (id)requestLiveViewHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) MMFinderLiveActivityTask *activityTask;
- (void)updateBarrageContainerAlpha;
- (double)barrageContainerBottomMargin;
- (double)barrageContainerTopMargin;
- (void)layoutBarrageContainerView;
- (struct CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
- (id)minimizeSrcView;
- (void)showFullScreenLoading:(_Bool)arg1 withLoadingText:(id)arg2 hasDelayed:(_Bool)arg3;
- (void)layoutCDNView;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;

@end

