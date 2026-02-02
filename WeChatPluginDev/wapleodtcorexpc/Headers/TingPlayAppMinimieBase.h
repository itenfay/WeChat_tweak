//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TingMinimizeBaseTask, UnitRCWeakObj;
@protocol TingFlowPlayerProtocol;

@interface TingPlayAppMinimieBase : NSObject
{
    _Bool _isForeground;
    int _moduleScene;
    id <TingFlowPlayerProtocol> _player;
    UnitRCWeakObj *_weakApp;
    TingMinimizeBaseTask *_task;
    NSString *_taskBizName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isForeground; // @synthesize isForeground=_isForeground;
@property(nonatomic) int moduleScene; // @synthesize moduleScene=_moduleScene;
@property(copy, nonatomic) NSString *taskBizName; // @synthesize taskBizName=_taskBizName;
@property(retain, nonatomic) TingMinimizeBaseTask *task; // @synthesize task=_task;
@property(retain, nonatomic) UnitRCWeakObj *weakApp; // @synthesize weakApp=_weakApp;
@property(nonatomic) __weak id <TingFlowPlayerProtocol> player; // @synthesize player=_player;
- (void)onOuterContentTaskFoldStateChanged:(id)arg1 fold:(_Bool)arg2;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onActiveMinimizeTask;
- (void)willOpenMinimizeTask;
- (_Bool)isPlayerModuleActive;
- (_Bool)canAddMinimizeTask;
- (_Bool)isPlayerInForground;
- (id)minimizeTaskData;
- (void)onTerminateMinimizeTask;
- (void)onFoldMinimizeTask;
- (void)onRemoveMinimizeTaskAnimiated:(_Bool)arg1 onlyFade:(_Bool)arg2;
- (void)onAddMinimizeTaskAnimiated:(_Bool)arg1 voiceTic:(_Bool)arg2 fold:(_Bool)arg3;
- (id)nextLaunchOptionForClientId:(id)arg1;
- (_Bool)disableMinimizeTask;
- (_Bool)hasMinimizeTask;
- (void)onPlayingInfoUpdate:(id)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onPlayingInfoChangedInMainThread:(id)arg1;
- (void)onForegroundStateChangedInMainThread:(_Bool)arg1;
- (void)onMinimizeTaskInitInMainThread;
- (void)setMinimizeTaskFold:(_Bool)arg1 animated:(_Bool)arg2 interrupted:(_Bool)arg3;
- (void)updatePlayingInfo:(id)arg1;
- (_Bool)hasActiveMinimieTask;
- (void)deactiveMinimizeTask;
- (void)activeMinimizeTask;
- (void)dealloc;
- (id)initWithTaskName:(id)arg1 moduleScene:(int)arg2;
- (void)initUITask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

