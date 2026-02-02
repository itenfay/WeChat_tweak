//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VoIPPushKitNotifyService
{
    _Bool _useVoIPLCK;
    _Bool _isInBackground;
}

+ (_Bool)handleVoIPPushInfoContent:(id)arg1 VoIPPushInfo:(id)arg2 type:(id)arg3;
+ (_Bool)handleVoIPPushInfo:(id)arg1 type:(id)arg2;
+ (id)getRingToneSoundForCaller:(id)arg1;
+ (_Bool)haveAnsweredCall;
+ (_Bool)getIfCallWithID:(id)arg1 isVideoMode:(_Bool)arg2;
+ (_Bool)isCallkitAvailable;
+ (_Bool)isAppStateActive;
+ (_Bool)isDeviceCallkitAvailable;
+ (_Bool)getIfHaveAProcess;
+ (_Bool)getIfCanUseCX:(_Bool)arg1;
+ (_Bool)isVoIPLCKAvailable;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) _Bool useVoIPLCK; // @synthesize useVoIPLCK=_useVoIPLCK;
- (void)resetStatus;
- (void)reportIncomingCallFromUser:(id)arg1 ofType:(int)arg2 withMsg:(id)arg3 isPushKit:(_Bool)arg4;
- (void)requestAcceptCall;
- (void)reportCallEnded:(unsigned long long)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

