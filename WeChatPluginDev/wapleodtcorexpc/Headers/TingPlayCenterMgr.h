//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLRUCache, MMListenSyncResponse, NSMutableArray, NSMutableDictionary, NSString, TingRedDotItem, TingTaskSnapshot;
@protocol TingRedDotServiceListener><TingRecentServiceListener;

@interface TingPlayCenterMgr : NSObject
{
    _Bool _hasEnterTing;
    int _taskBarSyncVersion;
    unsigned long long _lastCloseTime;
    TingTaskSnapshot *_tapeInfo;
    long long _taskBarControl;
    MMListenSyncResponse *_taskBarSyncInfo;
    NSMutableDictionary *_dictCallbacks;
    NSMutableArray *_opLogTasks;
    TingRedDotItem *_taskBarRedDotItem;
    MMLRUCache *_notifyUUIDCache;
    id <TingRedDotServiceListener><TingRecentServiceListener> _weakProxy;
}

+ (_Bool)isTingPlayerModuleActiveOrInterrupt;
+ (_Bool)isTingPlayerModuleActive;
+ (id)generateTapeInfoWithPlayer:(id)arg1;
+ (id)platformMMKVId;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TingRedDotServiceListener><TingRecentServiceListener> weakProxy; // @synthesize weakProxy=_weakProxy;
@property(retain, nonatomic) MMLRUCache *notifyUUIDCache; // @synthesize notifyUUIDCache=_notifyUUIDCache;
@property(retain, nonatomic) TingRedDotItem *taskBarRedDotItem; // @synthesize taskBarRedDotItem=_taskBarRedDotItem;
@property(nonatomic) int taskBarSyncVersion; // @synthesize taskBarSyncVersion=_taskBarSyncVersion;
@property(retain, nonatomic) NSMutableArray *opLogTasks; // @synthesize opLogTasks=_opLogTasks;
@property(retain, nonatomic) NSMutableDictionary *dictCallbacks; // @synthesize dictCallbacks=_dictCallbacks;
@property(retain, nonatomic) MMListenSyncResponse *taskBarSyncInfo; // @synthesize taskBarSyncInfo=_taskBarSyncInfo;
@property(nonatomic) long long taskBarControl; // @synthesize taskBarControl=_taskBarControl;
@property(retain, nonatomic) TingTaskSnapshot *tapeInfo; // @synthesize tapeInfo=_tapeInfo;
@property(nonatomic) _Bool hasEnterTing; // @synthesize hasEnterTing=_hasEnterTing;
@property(nonatomic) unsigned long long lastCloseTime; // @synthesize lastCloseTime=_lastCloseTime;
- (void)resetRefreshControl;
- (id)listenLaterTapeItem;
- (void)willAddListenLaterWithItem:(id)arg1;
- (void)onTingAppBePresentedFromScene:(int)arg1;
- (_Bool)isInTaskBarControlBlack;
- (int)calTaskBarSyncVersion;
- (long long)calTaskBarControl;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)setTaskBarShowingOn:(_Bool)arg1;
- (_Bool)getTingTaskBarHideConfigState;
- (_Bool)enableTaskBarControl;
- (id)currentPlayer;
- (id)currentFlowPlayer;
- (id)discoverSessionBuffer;
- (id)taskBarSyncItem;
- (void)preRefreshDiscoverItemWhenJumpCategoryDetail:(id)arg1;
- (void)clearLocalSyncTaskBarRecommendDesc;
- (void)removeLocalSyncTaskBarInfo;
- (void)loadSyncTaskBarInfo;
- (void)callTaskBarExposed;
- (void)onTingRedDotItemClear:(int)arg1;
- (void)onRedDotItemUpdate:(int)arg1 item:(id)arg2;
- (void)onCenterRedDotItemClear;
- (void)onCenterRedDotItemUpdate:(id)arg1;
- (void)clearTaskBarSyncItem;
- (_Bool)__innerSetTaskBarSyncItemFromData:(id)arg1 scene:(long long)arg2;
- (void)loadTaskBarSyncItem;
- (_Bool)isTaskBarSyncItemTypeValid:(int)arg1;
- (id)validListenSyncItemTypes;
- (void)tingSyncFromBypNotifyWithData:(id)arg1 uuid:(id)arg2;
- (void)cacheNotifyUUID:(id)arg1;
- (_Bool)hadCacheNotifyUUID:(id)arg1;
- (_Bool)isTaskBarRedDotEnable;
- (id)taskBarSyncTimestampVersionKey;
- (id)taskBarSyncInfoVersionKey;
- (void)saveSyncInfoInPlatformKV:(id)arg1;
- (void)onPause;
- (void)onPlayWithControl:(unsigned int)arg1;
- (void)onStop;
- (void)onActivePlayerChanged:(id)arg1;
- (void)handlePlayerEventComing:(id)arg1;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (id)loadLastPlayedTapeInfo;
- (void)doAsyncLoadKvTapeInfos;
- (void)clearLastestPlayedTapeInfo;
- (id)lastestPlayingInfo;
- (id)lastestTapeTaskInfo;
- (void)updatePlayingInfoWithPlayer:(id)arg1;
- (void)onCarPlayDisconnected;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)onMgrClearData;
- (void)dealloc;
- (void)unregiesterObserver;
- (void)registerObserver;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

