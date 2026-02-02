//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RingBackSoundCoordinator, VibrationRepeatObject, WACampusVoipMsg, WACampusVoipNotiView, WXLocalNotificationInfo;

@interface WACampusVoipMsgMgr
{
    WACampusVoipMsg *_currentMsg;
    WXLocalNotificationInfo *_currentLocalNotificationInfo;
    WACampusVoipNotiView *_notiView;
    RingBackSoundCoordinator *_ringCoordinator;
    VibrationRepeatObject *_vibrationPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VibrationRepeatObject *vibrationPlayer; // @synthesize vibrationPlayer=_vibrationPlayer;
@property(retain, nonatomic) RingBackSoundCoordinator *ringCoordinator; // @synthesize ringCoordinator=_ringCoordinator;
@property(retain, nonatomic) WACampusVoipNotiView *notiView; // @synthesize notiView=_notiView;
@property(retain, nonatomic) WXLocalNotificationInfo *currentLocalNotificationInfo; // @synthesize currentLocalNotificationInfo=_currentLocalNotificationInfo;
@property(retain, nonatomic) WACampusVoipMsg *currentMsg; // @synthesize currentMsg=_currentMsg;
- (void)onAppEnterForeground;
- (void)onMonoServiceVoipWillStart;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)playEndingSound;
- (void)stopPlayRing;
- (void)playRing;
- (void)openWeApp:(id)arg1 path:(id)arg2 debugMode:(unsigned long long)arg3;
- (void)cancelLocalNotification;
- (void)showNewCallLocalNotification:(id)arg1;
- (void)dismissInAppNotification;
- (void)showInAppNotification:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)showIntentTypeNotification:(id)arg1 withMsg:(id)arg2;
- (void)onTimeout:(id)arg1;
- (void)onFinishVoipNoti;
- (void)onVoipBusy:(id)arg1;
- (void)onVoipCancel:(id)arg1;
- (void)onNewVoipIn:(id)arg1 isFromApns:(_Bool)arg2;
- (void)onNewVoipMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

