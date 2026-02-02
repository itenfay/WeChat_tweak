//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface RemoteControlCheck
{
    _Bool mIsCondRecordCheck;
    _Bool mIsForceRecordCheck;
    _Bool mIsRecordCheckEnabled;
    _Bool mIsRecordMayStart;
    _Bool mIsPlayCheckEnabled;
    _Bool mIsReceiveRemoteEvents;
    _Bool _isTingChecking;
}

@property(nonatomic) _Bool isTingChecking; // @synthesize isTingChecking=_isTingChecking;
- (void)HandleRemoteControlEvent:(id)arg1;
- (void)stopTingCheck;
- (void)startTingCheck;
- (_Bool)isPlayChecking;
- (void)stopPlayCheck;
- (void)startPlayCheck;
- (_Bool)isRecordChecking;
- (void)stopRecordCheck;
- (void)startRecordCheck;
- (void)stopRecordCheckIfOpenRC;
- (void)startRecordCheckIfOpenRC;
- (void)dealloc;
- (_Bool)IsSoundPlaying;
- (_Bool)IsOpenRemoteControl;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)resetRemoteControlEvent;
- (void)onServiceInit;
- (void)unregisterNotify;
- (void)registerNotify;
- (void)endReceiveRemoteControlEvent:(unsigned int)arg1;
- (void)realEndReceiveRemoteControlEvent;
- (void)beginReceiveRemoteControlEvent:(unsigned int)arg1;
- (void)realBeginReceiveRemoteControlEvent;
- (void)plugin_off;
- (void)plugin_on;
- (_Bool)CanRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

