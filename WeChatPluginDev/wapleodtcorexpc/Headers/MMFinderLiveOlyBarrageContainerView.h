//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveActivityTaskId, MMFinderLiveOlyBarrageFloatingContainerView, MMFinderLiveOlyBarragePubbleMgr, NSMutableArray, NSString;

@interface MMFinderLiveOlyBarrageContainerView : UIView
{
    _Bool _hasStartDisplay;
    _Bool _isEnableDisplay;
    _Bool _isShowMinimizeWindow;
    _Bool _isLandscape;
    _Bool _isInBackground;
    MMFinderLiveActivityTaskId *_taskId;
    MMFinderLiveOlyBarrageFloatingContainerView *_barrageFloatingContainerView;
    NSMutableArray *_displayingContentViewList;
    NSMutableArray *_preparingBarrageTravelRouteList;
    MMFinderLiveOlyBarragePubbleMgr *_barragePubbleMgr;
    long long _currentLayoutStyleIndex;
    struct CGSize _currSelfSize;
    CDStruct_78c249a6 _currLiveCircle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) _Bool isShowMinimizeWindow; // @synthesize isShowMinimizeWindow=_isShowMinimizeWindow;
@property(nonatomic) struct CGSize currSelfSize; // @synthesize currSelfSize=_currSelfSize;
@property(nonatomic) long long currentLayoutStyleIndex; // @synthesize currentLayoutStyleIndex=_currentLayoutStyleIndex;
@property(nonatomic) _Bool isEnableDisplay; // @synthesize isEnableDisplay=_isEnableDisplay;
@property(nonatomic) _Bool hasStartDisplay; // @synthesize hasStartDisplay=_hasStartDisplay;
@property(retain, nonatomic) MMFinderLiveOlyBarragePubbleMgr *barragePubbleMgr; // @synthesize barragePubbleMgr=_barragePubbleMgr;
@property(retain, nonatomic) NSMutableArray *preparingBarrageTravelRouteList; // @synthesize preparingBarrageTravelRouteList=_preparingBarrageTravelRouteList;
@property(retain, nonatomic) NSMutableArray *displayingContentViewList; // @synthesize displayingContentViewList=_displayingContentViewList;
@property(retain, nonatomic) MMFinderLiveOlyBarrageFloatingContainerView *barrageFloatingContainerView; // @synthesize barrageFloatingContainerView=_barrageFloatingContainerView;
@property(retain, nonatomic) MMFinderLiveActivityTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) CDStruct_78c249a6 currLiveCircle; // @synthesize currLiveCircle=_currLiveCircle;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)onShowMinimizeWindowWillStart:(id)arg1;
- (void)onCollapseAnimationWillStart:(id)arg1;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)onDismissMinimizeWindowDidEnd:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onFinderLiveOlyBarragePubblePreparedForDisplay:(id)arg1;
- (_Bool)hasValidLiveCircle;
- (void)configDefaultLiveCircle;
- (double)barrageContainerBottomMargin;
- (double)barrageContainerTopMargin;
- (id)getFinderLiveTask;
- (void)enableDisplay;
- (void)unableDisplay;
- (void)clearBarrageContentViews;
- (void)clearBarrageContents;
- (void)createBarrageFloatingContainerView;
- (id)getNextTravelRouteConfig;
- (void)invokeDisplay;
- (void)layoutSubviews;
- (void)updateCurrLiveCircle:(CDStruct_78c249a6)arg1;
- (void)updateBackgroundTorchOutlineCircle:(CDStruct_78c249a6)arg1;
- (void)refreshDisplayingBarragePubblesForLightTorch;
- (id)requestBarrageHitTestViewWithConvertedPoint:(struct CGPoint)arg1;
- (void)startDisplay;
- (double)outerInnerRoundScalePercent;
- (void)updateResourceWithTask:(id)arg1;
- (void)initBarragePubbleMgr;
- (void)initData;
- (void)initNotifications;
- (void)registerExtensions;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

