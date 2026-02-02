//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TingPlayerStateClient><TingPlayTaskStateListener><TingAudioFocus;

@interface TingPlayTaskListenerBridge : NSObject
{
    id <TingPlayerStateClient><TingPlayTaskStateListener><TingAudioFocus> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TingPlayerStateClient><TingPlayTaskStateListener><TingAudioFocus> delegate; // @synthesize delegate=_delegate;
- (void)setAudioFocusCallback:(id)arg1;
- (void)requestFocus:(int)arg1 context:(id)arg2;
- (void)onInactivated:(id)arg1 update:(_Bool)arg2;
- (void)onActivated:(id)arg1 taskId:(id)arg2 update:(_Bool)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)onPlayInfoEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onPlayEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

