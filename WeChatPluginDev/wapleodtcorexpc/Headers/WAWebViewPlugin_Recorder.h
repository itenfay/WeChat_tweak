//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_Recorder
{
    _Bool _isCheckingPermission;
    id <IWAWebViewPluginDelegate> _resultDelegate;
    unsigned long long _duration;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isCheckingPermission; // @synthesize isCheckingPermission=_isCheckingPermission;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void)onBeginMultiTalk;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onFinishedRecord:(id)arg1 ErrCode:(int)arg2 stopReason:(long long)arg3;
- (void)onRecordTimeTooShort;
- (void)onStartRecord:(long long)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)unregisterRecordingPrivacy;
- (void)registerRecordingPrivacy;
- (void)realStartRecord;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)stopRecorder;
- (void)startRecorderForDuration:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

