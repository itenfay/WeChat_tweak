//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSTimer;

@interface MMAnimatedImagePlayMgr
{
    NSTimer *m_timer;
    NSMutableDictionary *m_playTimerDic;
    NSMutableSet *m_playingTasks;
    NSMapTable *m_viewToTaskTable;
}

+ (id)animatedImageViewWithDecoder:(id)arg1 config:(id)arg2;
+ (id)animatedImageViewWithData:(id)arg1 config:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onApplicationWillTerminate:(id)arg1;
- (void)UnRegisterSysNotifications;
- (void)RegisterSysNotifications;
- (void)stopUpdateTasks;
- (void)startUpdateTasks;
- (id)timerForPlayMode:(unsigned long long)arg1;
- (void)removePlayObserverWithView:(id)arg1;
- (void)removePlayTaskWithView:(id)arg1;
- (void)resetPlayTaskWithView:(id)arg1;
- (void)addPlayTaskWithView:(id)arg1 decoder:(id)arg2 config:(id)arg3;
- (void)addPlayTaskWithView:(id)arg1 decoder:(id)arg2;
- (id)init;
- (void)dealloc;

@end

