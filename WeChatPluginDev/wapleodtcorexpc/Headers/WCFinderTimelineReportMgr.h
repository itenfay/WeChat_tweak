//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface WCFinderTimelineReportMgr : NSObject
{
    _Bool _isContinue;
    NSMutableArray *_reportStatsArray;
    NSMutableArray *_watingReportPool;
    NSMutableDictionary *_currentStatsPool;
    MMTimer *_reportTimer;
    unsigned long long _reportTryTimes;
    double _streamRequestInterval;
    double _lastStreamCGIPostTime;
    NSMutableArray *_enhanceStatsArray;
    NSMapTable *_recardStatModelMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *recardStatModelMap; // @synthesize recardStatModelMap=_recardStatModelMap;
@property(retain, nonatomic) NSMutableArray *enhanceStatsArray; // @synthesize enhanceStatsArray=_enhanceStatsArray;
@property(nonatomic) double lastStreamCGIPostTime; // @synthesize lastStreamCGIPostTime=_lastStreamCGIPostTime;
@property(nonatomic) double streamRequestInterval; // @synthesize streamRequestInterval=_streamRequestInterval;
@property(nonatomic) unsigned long long reportTryTimes; // @synthesize reportTryTimes=_reportTryTimes;
@property(retain, nonatomic) MMTimer *reportTimer; // @synthesize reportTimer=_reportTimer;
@property(nonatomic) _Bool isContinue; // @synthesize isContinue=_isContinue;
@property(retain, nonatomic) NSMutableDictionary *currentStatsPool; // @synthesize currentStatsPool=_currentStatsPool;
@property(retain, nonatomic) NSMutableArray *watingReportPool; // @synthesize watingReportPool=_watingReportPool;
@property(retain, nonatomic) NSMutableArray *reportStatsArray; // @synthesize reportStatsArray=_reportStatsArray;
- (void)popStatReportShim:(id)arg1;
- (void)_callShimWhenUpdateModel:(id)arg1;
- (void)pushStatReportShim:(id)arg1;
- (id)getFullStatsFromEnhanceStatsPool;
- (void)pourStatsIntoPoolWithFinderMegaVideo:(id)arg1 commentScene:(int)arg2;
- (id)getFullStatsFromCurrentStatsPool;
- (void)realReportFullStatsExceptTidImmediately:(id)arg1;
- (void)reportFullStatsExceptTidImmediately:(id)arg1;
- (void)pourStatsIntoPoolWithContentVM:(id)arg1 commentScene:(int)arg2;
- (void)pourStatsIntoPoolWithMusicVM:(id)arg1 commentScene:(int)arg2;
- (void)reportInteractiveActionWithTid:(id)arg1 nonceID:(id)arg2 interactiveType:(unsigned long long)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (void)reportInteractiveActionWithTid:(id)arg1 nonceID:(id)arg2 interactiveType:(unsigned long long)arg3;
- (void)createMetaModelWithTid:(id)arg1 nonceID:(id)arg2 commentScene:(int)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (void)updateMetaModelWithTid:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)reportStatsPoolArrayWithDelayTime:(double)arg1;
- (id)getMetaModelFromCurrentStatsPoolWithTid:(id)arg1;
- (void)reportAllStatsByStreamCGI;
- (void)reportAllStatsPool;
- (void)pourStateIntoPoolImmediatelyWithTid:(id)arg1;
- (void)pourStateIntoPoolWithTid:(id)arg1;
- (void)reportAllPoolIgnoreTimer:(_Bool)arg1;
- (void)reportAllPoolImmediately;
- (void)endStatsReport;
- (void)startStatsReport;
- (void)reportImmediately;
- (void)dealloc;
- (void)onMMDynamicConfigUpdated;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

