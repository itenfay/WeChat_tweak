//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMNotificationViewController, NSString;

@interface SilentModeMgr
{
    _Bool _allowPlaySoundTemporary;
    _Bool _isUsingEarPhone;
    MMNotificationViewController *_tipsController;
    double _restoreVolume;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUsingEarPhone; // @synthesize isUsingEarPhone=_isUsingEarPhone;
@property(nonatomic) double restoreVolume; // @synthesize restoreVolume=_restoreVolume;
@property(retain, nonatomic) MMNotificationViewController *tipsController; // @synthesize tipsController=_tipsController;
@property(nonatomic) _Bool allowPlaySoundTemporary; // @synthesize allowPlaySoundTemporary=_allowPlaySoundTemporary;
- (void)onWCAudioSessionRouteChange:(id)arg1 reasonValue:(unsigned long long)arg2;
- (void)onSystemVolumeChangeFrom:(float)arg1 to:(float)arg2 reason:(int)arg3;
- (void)onSetSilentModeOn:(_Bool)arg1 success:(_Bool)arg2;
- (void)onSetElderModeOn:(_Bool)arg1 success:(_Bool)arg2;
- (void)notificationViewDidDisappear:(id)arg1;
- (void)reportVolumeChangeTo0:(int)arg1;
- (void)showTipsView;
- (void)onTouchDownVolumeButton:(double)arg1;
- (void)onTouchUpVolumeButton:(double)arg1;
- (_Bool)shouldSilentWhenLeaveOrEnterApp;
- (void)reloadSilentLogic:(_Bool)arg1;
@property(readonly, nonatomic, getter=isOn) _Bool on;
- (void)onWillResignActive;
- (void)onBecomeActive;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

