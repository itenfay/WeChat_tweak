//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBlurPerfStatisticResult, MMLivePAGAnimationPerfStatisticResult, MMLiveTask, MMLiveTaskId, MMLiveUIAnimationPerfStatisticResult, MMLiveViewController, NSMutableArray, NSMutableDictionary, NSString;

@interface MMLiveUIPerfMonitorLogic : NSObject
{
    _Bool _checkMonitorObjValid;
    _Bool _isPauseMonitor;
    MMLiveTaskId *_taskId;
    long long _monitorPauseOptions;
    NSMutableDictionary *_pagAnimPerfMonitorDict;
    NSMutableArray *_pagAnimPerfStatResultList;
    MMLivePAGAnimationPerfStatisticResult *_currPAGAnimPerfStatResult;
    NSMutableDictionary *_uiAnimPerfMonitorDict;
    NSMutableArray *_uiAnimPerfStatResultList;
    MMLiveUIAnimationPerfStatisticResult *_currUIAnimPerfStatResult;
    NSMutableDictionary *_blurPerfMonitorDict;
    NSMutableArray *_blurPerfStatResultList;
    MMLiveBlurPerfStatisticResult *_currBlurPerfStatResult;
}

+ (id)getViewDesc:(id)arg1;
+ (id)getLayerAnimations:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPauseMonitor; // @synthesize isPauseMonitor=_isPauseMonitor;
@property(retain, nonatomic) MMLiveBlurPerfStatisticResult *currBlurPerfStatResult; // @synthesize currBlurPerfStatResult=_currBlurPerfStatResult;
@property(retain, nonatomic) NSMutableArray *blurPerfStatResultList; // @synthesize blurPerfStatResultList=_blurPerfStatResultList;
@property(retain, nonatomic) NSMutableDictionary *blurPerfMonitorDict; // @synthesize blurPerfMonitorDict=_blurPerfMonitorDict;
@property(retain, nonatomic) MMLiveUIAnimationPerfStatisticResult *currUIAnimPerfStatResult; // @synthesize currUIAnimPerfStatResult=_currUIAnimPerfStatResult;
@property(retain, nonatomic) NSMutableArray *uiAnimPerfStatResultList; // @synthesize uiAnimPerfStatResultList=_uiAnimPerfStatResultList;
@property(retain, nonatomic) NSMutableDictionary *uiAnimPerfMonitorDict; // @synthesize uiAnimPerfMonitorDict=_uiAnimPerfMonitorDict;
@property(retain, nonatomic) MMLivePAGAnimationPerfStatisticResult *currPAGAnimPerfStatResult; // @synthesize currPAGAnimPerfStatResult=_currPAGAnimPerfStatResult;
@property(retain, nonatomic) NSMutableArray *pagAnimPerfStatResultList; // @synthesize pagAnimPerfStatResultList=_pagAnimPerfStatResultList;
@property(retain, nonatomic) NSMutableDictionary *pagAnimPerfMonitorDict; // @synthesize pagAnimPerfMonitorDict=_pagAnimPerfMonitorDict;
@property(nonatomic) _Bool checkMonitorObjValid; // @synthesize checkMonitorObjValid=_checkMonitorObjValid;
@property(nonatomic) long long monitorPauseOptions; // @synthesize monitorPauseOptions=_monitorPauseOptions;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onMMFinderLiveOperationView:(id)arg1 clearScreenChanged:(_Bool)arg2;
- (void)onMinimizeWindowDidHide:(id)arg1;
- (void)onMinimizeWindowWillDisplay:(id)arg1;
@property(readonly, nonatomic) double scheduleCheckInterval;
@property(readonly, nonatomic) MMLiveViewController *currentLiveViewController;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (void)stopPerfMonitorObjsValidCheck;
- (void)startPerfMonitorObjsValidCheck;
- (void)scheduleCheckPerfMonitorObjsValid;
- (_Bool)hasPerfMonitorRecords;
- (id)collectPeriodStatisticResult;
- (void)stopPerfStatisticMonitor;
- (void)startPerfStatisticMonitor;
- (void)updateIsPauseMonitor:(_Bool)arg1;
- (void)checkNeedPauseMonitor;
- (struct CGRect)getViewRectInLiveVC:(id)arg1 rect:(struct CGRect)arg2;
- (struct CGRect)getCurrPlayerRectInLiveVC;
- (void)updateComposeRectForMonitorRecord:(id)arg1;
- (void)onLiveVCDidDisappear;
- (void)onLiveVCDidAppear;
- (void)onViewStartPAGAnimation:(id)arg1;
- (void)onViewStartUIAnimation:(id)arg1 atLayer:(id)arg2;
- (void)onViewStartUIAnimation:(id)arg1;
- (void)onViewWithBlurEffectUnDisplay:(id)arg1;
- (void)onViewWithBlurEffectDisplay:(id)arg1;
- (id)scheduleCollectStatisticPeriodResult;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)initDefaultDatas;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;
- (_Bool)hasAnimationPerfMonitorRecords;
- (_Bool)stopAnimationMonitor:(id)arg1;
- (_Bool)startAnimationMonitor:(id)arg1;
- (_Bool)hasBlurPerfMonitorRecords;
- (void)stopBlurPerfStatisticMonitor;
- (void)startBlurPerfStatisticMonitor;
- (void)updateCurrBlurPerfStatResult;
- (void)recordBlurMonitorStatResult;
- (void)addBlurMonitorRecordToStatResult:(id)arg1;
- (void)checkBlurPerfMonitorObjsValid;
- (void)collectBlurPerfMonitorRecords;
- (void)unRegisterBlurPerfMonitorRecordsWithKeys:(id)arg1;
- (id)createBlurPerfMonitorRecord:(id)arg1;
- (void)registerBlurPerfMonitorRecord:(id)arg1;
- (id)getBlurPerfMonitorRecord:(id)arg1;
- (_Bool)stopBlurMonitor:(id)arg1;
- (_Bool)startBlurMonitor:(id)arg1;
- (void)startBlurPerfMonitorRecords;
- (_Bool)hasPAGAnimationPerfMonitorRecords;
- (void)stopPAGAnimationPerfStatisticMonitor;
- (void)startPAGAnimationPerfStatisticMonitor;
- (void)updateCurrPAGAnimPerfStatResult;
- (void)recordPAGAnimationMonitorStatResult;
- (void)addPAGAnimationMonitorRecordToStatResult:(id)arg1;
- (void)checkPAGAnimationPerfMonitorObjsValid;
- (void)collectPAGAnimationPerfMonitorRecords;
- (void)unRegisterPAGAnimationPerfMonitorRecordsWithKeys:(id)arg1;
- (id)createPAGAnimationPerfMonitorRecord:(id)arg1;
- (void)registerPAGAnimationPerfMonitorRecord:(id)arg1;
- (_Bool)clearPrePAGAnimationPerfMonitorRecordIfNeed:(id)arg1;
- (id)getPAGAnimationPerfMonitorRecord:(id)arg1;
- (void)startPAGAnimationPerfMonitorRecords;
- (_Bool)hasUIAnimationPerfMonitorRecords;
- (void)stopUIAnimationPerfStatisticMonitor;
- (void)startUIAnimationPerfStatisticMonitor;
- (void)updateCurrUIAnimPerfStatResult;
- (void)recordUIAnimationMonitorStatResult;
- (void)addUIAnimationMonitorRecordToStatResult:(id)arg1;
- (void)checkUIAnimationPerfMonitorObjsValid;
- (void)collectUIAnimationPerfMonitorRecords;
- (void)unRegisterUIAnimationPerfMonitorRecordsWithKeys:(id)arg1;
- (id)createUIAnimationPerfMonitorRecord:(id)arg1 atLayer:(id)arg2 inView:(id)arg3;
- (void)registerUIAnimationPerfMonitorRecord:(id)arg1 atLayer:(id)arg2 inView:(id)arg3;
- (id)getUIAnimationPerfMonitorRecord:(id)arg1;
- (void)startUIAnimationPerfMonitorRecords;
- (void)monitorPAGAnimationPerf:(id)arg1;
- (void)checkBlurBtnNeedMonitorBlurPerf:(id)arg1;
- (void)unMonitorHalfScreenBlurPerfIfNeed:(id)arg1;
- (void)monitorHalfScreenBlurPerfIfNeed:(id)arg1;
- (void)unMonitorPageSheetBlurPerfIfNeed:(id)arg1;
- (void)monitorPageSheetBlurPerfIfNeed:(id)arg1;
- (void)unObserveAnimationEvent;
- (void)observeAnimationEvent;
- (void)unObserveBlurEffectUI;
- (void)observeBlurEffectUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

