//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveMagicEngineMemoryMonitorTask, MMLiveRewardGiftNewCustomizationMagicRewardMemoryManager, MMLiveRewardGiftNewCustomizationMagicRewardResManager;

@interface MMLiveRewardGiftNewCustomizationMagicEngineMemoryManager : NSObject
{
    MMLiveMagicEngineMemoryMonitorTask *_magicEngineMemMonitorTask;
    MMLiveRewardGiftNewCustomizationMagicRewardMemoryManager *_currRewardMemoryManager;
    MMLiveRewardGiftNewCustomizationMagicRewardResManager *_currRewardResManager;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMLiveRewardGiftNewCustomizationMagicRewardResManager *currRewardResManager; // @synthesize currRewardResManager=_currRewardResManager;
@property(nonatomic) __weak MMLiveRewardGiftNewCustomizationMagicRewardMemoryManager *currRewardMemoryManager; // @synthesize currRewardMemoryManager=_currRewardMemoryManager;
@property(retain, nonatomic) MMLiveMagicEngineMemoryMonitorTask *magicEngineMemMonitorTask; // @synthesize magicEngineMemMonitorTask=_magicEngineMemMonitorTask;
- (void)onHasMagicRewardResMemoryLoaded;
- (void)onAllMagicRewardResMemoryUnLoaded;
- (void)onHasMagicRewardResourceStateChecking;
- (void)onAllMagicRewardResourceStateCheckFinished;
- (void)onLiveTask:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (void)checkListeningRewardManagers;
- (long long)getCurrentMagicEngineMemoryUseState;
- (void)updateMagicEngineMemoryUseState;
- (double)getMonitorTimeWithFootPrintMemoryPercent:(double)arg1;
- (double)getRecentAverageFootPrintMemoryPercent:(id)arg1;
- (void)createEngineMemoryMonitorTask;
- (void)checkMagicEngineMemory;
- (void)updateCurrentRewardResManager:(id)arg1;
- (void)updateCurrentRewardMemoryManager:(id)arg1;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (void)initData;
- (id)init;

@end

