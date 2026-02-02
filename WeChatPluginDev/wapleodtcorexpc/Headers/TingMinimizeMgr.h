//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TingMinimizeBaseTask, TingTapePlayingInfo;

@interface TingMinimizeMgr : NSObject
{
    _Bool _disableMinimizeTask;
    TingTapePlayingInfo *_playingInfo;
    TingMinimizeBaseTask *_task;
    NSMutableDictionary *_dictNextLaunchOptions;
}

+ (_Bool)canTingAppAddMinimization;
+ (_Bool)shouldTingAppPopAndAddMinimization;
+ (_Bool)shouldTingAppPopWithMiniAnimation;
+ (_Bool)shouldTingAppPresentWithMiniAnimation;
+ (_Bool)isTingViewControllerTop:(id)arg1;
+ (_Bool)dissambeVersionIsTingViewControllerTop;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictNextLaunchOptions; // @synthesize dictNextLaunchOptions=_dictNextLaunchOptions;
@property(nonatomic) _Bool disableMinimizeTask; // @synthesize disableMinimizeTask=_disableMinimizeTask;
@property(retain, nonatomic) TingMinimizeBaseTask *task; // @synthesize task=_task;
@property(retain, nonatomic) TingTapePlayingInfo *playingInfo; // @synthesize playingInfo=_playingInfo;
- (void)onOuterContentTaskFoldStateChanged:(id)arg1 fold:(_Bool)arg2;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onTingAppBePresentedFromScene:(int)arg1;
- (void)onTingPlayingInfoUpdate:(id)arg1;
- (id)player;
- (_Bool)isPlayerModuleActive;
- (_Bool)isPlayerInForground;
- (_Bool)canAddMinimizeTask;
- (id)minimizeTaskData;
- (void)willOpenMinimizeTask;
- (void)onActiveMinimizeTask;
- (void)onTerminateMinimizeTask;
- (void)onFoldMinimizeTask;
- (void)onRemoveMinimizeTaskAnimiated:(_Bool)arg1 onlyFade:(_Bool)arg2;
- (void)onAddMinimizeTaskAnimiated:(_Bool)arg1 voiceTic:(_Bool)arg2 fold:(_Bool)arg3;
- (id)nextLaunchOptionForClientId:(id)arg1;
- (_Bool)hasMinimizeTask;
- (id)copyContainerView;
- (void)updateMinimizeTaskStateWithContext:(id)arg1 animated:(_Bool)arg2;
- (void)updateMinimizeTaskStateWithContext:(id)arg1;
- (void)removeAllNextLaunchOptions;
- (void)setNextLaunchOptions:(id)arg1 clientId:(id)arg2;
- (void)setMinimizeDisable:(_Bool)arg1;
- (void)setMinimizeTaskFold:(_Bool)arg1 animated:(_Bool)arg2 interrupted:(_Bool)arg3;
- (_Bool)hasActiveMinimieTask;
- (void)deactiveMinimizeTask;
- (void)activeMinimizeTask;
- (void)initMinimizeTask;
- (void)unregiesterObserver;
- (void)registerObserver;
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

