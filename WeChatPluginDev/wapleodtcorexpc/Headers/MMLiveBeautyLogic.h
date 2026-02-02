//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, MMLiveBeautyPackage, MMLiveBeautyResourcesDescriptor, MMLiveEffectsUsingContext, MMLiveEnergyController, MMLiveFilterDataItem, MMLiveFilterPackage, MMLiveMakeupDataItem, MMLiveMakeupPackage, MMLiveTask, MMWeEffectManager, MemoryMappedKV, NSDictionary, NSMutableDictionary, NSString, WCFinderLiveAnchorLogReporter, WCFinderLiveStarterReporter;

@interface MMLiveBeautyLogic : NSObject
{
    _Bool _usingDefaultNoopBeautyPackage;
    _Bool _isAudience;
    MMLiveTask *_task;
    MMWeEffectManager *_effectManager;
    MMLiveBeautyPackage *_beautyPackage;
    MMLiveFilterPackage *_filterPackage;
    MMLiveMakeupPackage *_makeupPackage;
    MMLiveFilterDataItem *_currentUsedFilter;
    MMLiveMakeupDataItem *_currentUsedMakeup;
    MMLiveEffectsUsingContext *_effectUsingCtx;
    MMLiveEnergyController *_energyController;
    MemoryMappedKV *_mappedKV;
    NSMutableDictionary *_beautyDrivers;
    WCFinderLiveAnchorLogReporter *_anchorReporter;
    WCFinderLiveStarterReporter *_starterReporter;
    MMLiveFilterDataItem *_noopFilter;
    MMLiveMakeupDataItem *_noopMakeup;
    MMLiveBeautyResourcesDescriptor *_resourcesDescriptor;
    NSDictionary *_makeupDetailIdDic;
    NSString *_makeupResourcesInstancePath;
    NSString *_filterResourcesInstancePath;
}

+ (_Bool)isDeviceLowSpec;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filterResourcesInstancePath; // @synthesize filterResourcesInstancePath=_filterResourcesInstancePath;
@property(retain, nonatomic) NSString *makeupResourcesInstancePath; // @synthesize makeupResourcesInstancePath=_makeupResourcesInstancePath;
@property(retain, nonatomic) NSDictionary *makeupDetailIdDic; // @synthesize makeupDetailIdDic=_makeupDetailIdDic;
@property(retain, nonatomic) MMLiveBeautyResourcesDescriptor *resourcesDescriptor; // @synthesize resourcesDescriptor=_resourcesDescriptor;
@property(retain, nonatomic) MMLiveMakeupDataItem *noopMakeup; // @synthesize noopMakeup=_noopMakeup;
@property(retain, nonatomic) MMLiveFilterDataItem *noopFilter; // @synthesize noopFilter=_noopFilter;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(retain, nonatomic) WCFinderLiveStarterReporter *starterReporter; // @synthesize starterReporter=_starterReporter;
@property(retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter; // @synthesize anchorReporter=_anchorReporter;
@property(retain, nonatomic) NSMutableDictionary *beautyDrivers; // @synthesize beautyDrivers=_beautyDrivers;
@property(nonatomic) _Bool usingDefaultNoopBeautyPackage; // @synthesize usingDefaultNoopBeautyPackage=_usingDefaultNoopBeautyPackage;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(retain, nonatomic) MMLiveEnergyController *energyController; // @synthesize energyController=_energyController;
@property(retain, nonatomic) MMLiveEffectsUsingContext *effectUsingCtx; // @synthesize effectUsingCtx=_effectUsingCtx;
@property(retain, nonatomic) MMLiveMakeupDataItem *currentUsedMakeup; // @synthesize currentUsedMakeup=_currentUsedMakeup;
@property(retain, nonatomic) MMLiveFilterDataItem *currentUsedFilter; // @synthesize currentUsedFilter=_currentUsedFilter;
@property(retain, nonatomic) MMLiveMakeupPackage *makeupPackage; // @synthesize makeupPackage=_makeupPackage;
@property(retain, nonatomic) MMLiveFilterPackage *filterPackage; // @synthesize filterPackage=_filterPackage;
@property(retain, nonatomic) MMLiveBeautyPackage *beautyPackage; // @synthesize beautyPackage=_beautyPackage;
@property(retain, nonatomic) MMWeEffectManager *effectManager; // @synthesize effectManager=_effectManager;
@property(nonatomic) __weak MMLiveTask *task; // @synthesize task=_task;
- (void)willBeginStorageCleanupInScenario:(unsigned long long)arg1 withContext:(id)arg2;
- (void)onLiveTask:(id)arg1 liveClosed:(_Bool)arg2;
- (float)getValidParamValue:(float)arg1;
@property(readonly, nonatomic) __weak MMFinderLiveTask *finderLiveTask;
- (id)getFilterDataItemsList;
- (id)getMakeupDataItemList;
- (void)saveAllEffectFilterValues;
- (void)saveAllMakeupDataDetailItemValues;
- (void)saveAllMakeupDataItemValues;
- (void)reportMakeupAction;
- (void)reportMakeupActionOnStarter;
- (id)getMeizhuangResultString;
- (void)applyBeautyItem:(id)arg1;
- (void)saveAllEffectBeautyValues;
- (void)resetMakeupDetailValueToDefault;
- (void)resetDataItemsValueToDefault;
- (void)reloadDataItemsValue;
- (_Bool)isCurrentMakeupDetailDefaultValue;
- (_Bool)isCurrentBeautySuitDefaultValue;
- (void)activateBeautySuite:(id)arg1;
- (void)initBeauty;
- (void)setLiveFilterValue:(float)arg1;
- (void)setFilter:(id)arg1 showToast:(_Bool)arg2;
- (void)setFilter:(id)arg1;
- (void)initFilter;
- (void)updateMakupDetail:(id)arg1 resetFilterIfNeeded:(_Bool)arg2;
- (void)updateMakupDetail:(id)arg1;
- (void)updateMakeup:(id)arg1;
- (void)initMakeup;
@property(nonatomic) _Bool skinSegEnable;
- (void)resetFilterStatusToSkinSegOpen;
- (void)saveCurrentFilterStatusOnSkinSegOpen;
- (void)_internalUpdateSkinSegStatus:(_Bool)arg1 success:(CDUnknownBlockType)arg2 saveCurStatus:(_Bool)arg3;
- (void)updateSkinSegStatus:(_Bool)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)initSkinSeg;
- (id)initWithWeEffectManager:(id)arg1 beautyPackage:(id)arg2 isAudience:(_Bool)arg3 task:(id)arg4;
- (void)reportVisionEffectAction:(unsigned long long)arg1 item:(id)arg2;
- (void)reportDecorAction:(unsigned long long)arg1 item:(id)arg2;
- (_Bool)loadMaterialResource:(id)arg1;
- (_Bool)isMaterialResourceDownloading:(id)arg1;
- (_Bool)isMaterialResourcePrepared:(id)arg1;
- (void)setLiveVisionEffect:(id)arg1;
- (id)getVisionEffectDataItemList;
- (void)setLiveDecorEffect:(id)arg1;
- (id)getDecorDataItemList;
- (id)beautyLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

