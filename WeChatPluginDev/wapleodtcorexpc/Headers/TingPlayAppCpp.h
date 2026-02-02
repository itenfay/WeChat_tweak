//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingPlayAppCpp
{
}

+ (id)create:(int)arg1 appName:(id)arg2 player:(id)arg3 miniHelper:(id)arg4 nowplayingHelper:(id)arg5;
- (void)onPlayTaskEvent:(int)arg1 currentState:(int)arg2 previousState:(int)arg3 message:(id)arg4;
- (void)onCurrentPlayingListSourceWillChange:(id)arg1 nextSource:(id)arg2;
- (void)onTingPlayTaskReportAction:(int)arg1 context:(id)arg2;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onTingPlayerStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)onPlayingItemUpdate:(id)arg1;
- (void)onPlayingIndexChanged:(int)arg1;
- (void)onPlayModeChanged;
- (void)onPlayTaskServiceWillPop:(id)arg1;
- (void)onServiceChanged:(id)arg1;
- (void)onAppTerminate;
- (id)getPlatformPlayerObj;
- (id)lastPlayedTape;
- (unsigned long long)lastTerminateTimeStamp;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (int)getAppId;
- (id)getPlayTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

