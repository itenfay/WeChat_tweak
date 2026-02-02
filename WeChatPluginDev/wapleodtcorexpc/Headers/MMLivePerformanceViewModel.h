//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSArray, NSMutableDictionary, NSString;
@protocol MMLivePerformanceViewModelDelegate;

@interface MMLivePerformanceViewModel : NSObject
{
    MMLiveTaskId *_taskId;
    id <MMLivePerformanceViewModelDelegate> _delegate;
    NSArray *_performanceKeys;
    NSMutableDictionary *_performanceTexts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *performanceTexts; // @synthesize performanceTexts=_performanceTexts;
@property(copy, nonatomic) NSArray *performanceKeys; // @synthesize performanceKeys=_performanceKeys;
@property(nonatomic) __weak id <MMLivePerformanceViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onLiveTask:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (void)onLiveTask:(id)arg1 pushNetStatus:(id)arg2;
- (void)onLiveTask:(id)arg1 netStatus:(id)arg2 p2pStatus:(id)arg3;
- (void)onLiveTask:(id)arg1 statistics:(id)arg2;
- (void)updateEnergyModeWithLiveTask:(id)arg1;
- (void)updateThermalDescription:(id)arg1;
- (void)updateGPUInfoWithGPUUtilization:(id)arg1;
- (void)updateGPUInfo;
- (void)updateMetricsInfo:(id)arg1 liveTask:(id)arg2;
- (void)prepareNotifyUpdate;
- (void)notifyUpdate;
- (id)performanceKeysForTaskId:(id)arg1;
- (void)unregisterExtensions;
- (void)registerExtensions;
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

