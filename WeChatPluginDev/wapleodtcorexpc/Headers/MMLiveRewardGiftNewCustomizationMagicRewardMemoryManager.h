//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MMLiveRewardGiftNewCustomizationMagicRewardMemoryManager : NSObject
{
    _Bool _hasResMemoryLoaded;
    NSMutableDictionary *_monitorTaskDict;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasResMemoryLoaded; // @synthesize hasResMemoryLoaded=_hasResMemoryLoaded;
@property(retain, nonatomic) NSMutableDictionary *monitorTaskDict; // @synthesize monitorTaskDict=_monitorTaskDict;
- (void)onLiveTask:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (_Bool)getCurrentResMemoryLoadedState;
- (void)updateResMemoryLoadedState;
- (double)getMonitorTimeWithFootPrintMemoryPercent:(double)arg1;
- (double)getRecentAverageFootPrintMemoryPercent:(id)arg1;
- (id)getUniqueKeyForView:(id)arg1;
- (id)createMonitorTaskForRewardView:(id)arg1 enableAutoUnLoad:(_Bool)arg2;
- (_Bool)isCurrentHasResMemoryLoaded;
- (void)cancelMonitor:(id)arg1;
- (void)monitorMagicResMemoryWithView:(id)arg1 enableAutoUnLoad:(_Bool)arg2;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)initDefaultData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

