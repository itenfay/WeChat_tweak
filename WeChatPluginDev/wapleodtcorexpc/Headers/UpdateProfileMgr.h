//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString;

@interface UpdateProfileMgr
{
    NSRecursiveLock *m_lock;
    long long m_profileUpdateEvent;
    _Bool _isShowingElderModeAlert;
}

+ (_Bool)modifyUserInfo:(id)arg1;
+ (void)modifySetting:(id)arg1 callExt:(_Bool)arg2;
+ (void)modifySetting:(id)arg1;
+ (id)getOplog:(id)arg1;
+ (_Bool)isUserInfoNotReady;
+ (_Bool)hasSetWxPasswd;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShowingElderModeAlert; // @synthesize isShowingElderModeAlert=_isShowingElderModeAlert;
- (void)onModifySelfContact:(id)arg1;
- (void)onAuthOK;
- (void)setIsNeedUpdateAfterAuth:(_Bool)arg1;
- (void)callOnProfileChange;
- (void)onNewSyncModUserInfoExt:(id)arg1;
- (void)onNewSyncModUserInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)updateUserProfile;
- (void)checkAndTransferCallKitSwitch;
- (void)commonHandleModUserInfoExt:(id)arg1;
- (void)HandleModUsrInfoExt:(id)arg1;
- (void)HandleModUsrInfo:(id)arg1;
- (void)updateExtStatus:(unsigned long long)arg1 extStatus2:(unsigned long long)arg2;
- (void)updateRegCountry:(id)arg1;
- (void)handleGetUserInfoExt:(id)arg1;
- (void)updateSavedHelloMsg:(id)arg1;
- (void)updateVoipRecentStatusSwitch:(_Bool)arg1;
- (void)modifyVideoRing:(id)arg1;
- (void)modifyTextStateId:(id)arg1 extInfo:(id)arg2;
- (void)modifyPatSuffix:(id)arg1;
- (void)handleModUserInfo:(id)arg1 withSetting:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

