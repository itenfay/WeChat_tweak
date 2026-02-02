//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFlutterAutoReleaseEngineGroupHelper, MMFlutterEngineGroup, NSString;

@interface MMFlutterEngineService
{
    _Bool _recreateEngineGroup;
    MMFlutterEngineGroup *_sharedEngineGroup;
    MMFlutterAutoReleaseEngineGroupHelper *_autoReleaseHelper;
}

+ (_Bool)reportEngineInfo;
- (void).cxx_destruct;
@property(nonatomic) _Bool recreateEngineGroup; // @synthesize recreateEngineGroup=_recreateEngineGroup;
@property(retain, nonatomic) MMFlutterAutoReleaseEngineGroupHelper *autoReleaseHelper; // @synthesize autoReleaseHelper=_autoReleaseHelper;
@property(retain, nonatomic) MMFlutterEngineGroup *sharedEngineGroup; // @synthesize sharedEngineGroup=_sharedEngineGroup;
@property(readonly, nonatomic) _Bool enableNewPreRender;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)clearMemoryCache;
- (void)tryReleaseEngineGroup;
- (void)checkRecreate;
- (void)createSharedEngineGroup;
- (void)onAccountLogout;
- (void)updateFlutterUIContext;
@property(readonly, nonatomic) int foregroundType;
@property(readonly, nonatomic) int liveEngineCount;
- (id)getSharedEngineGroup;
- (void)initFlutterLogger;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

