//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MonoServiceMgr
{
    NSMutableDictionary *_monoServiceAppSceneDict;
    NSMutableDictionary *_mainSceneAudioMonoServiceDict;
    NSMutableDictionary *_subSceneAudioMonoServiceDict;
    NSMutableDictionary *_mainSceneVideoMonoServiceDict;
    NSMutableDictionary *_subSceneVideoMonoServiceDict;
    NSString *_currentVoipOrMultiTalkId;
}

+ (_Bool)isCurrentlyInVoIPOrMultiTalk;
+ (id)utilCreateUniqueId;
+ (_Bool)hasSubAppScene;
+ (_Bool)isLastActionInMainScene;
+ (id)createUniqueId:(id)arg1 business:(unsigned long long)arg2 subBusiness:(unsigned long long)arg3;
+ (id)createUniqueId:(id)arg1 monoServiceKind:(unsigned long long)arg2 business:(unsigned long long)arg3 subBusiness:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentVoipOrMultiTalkId; // @synthesize currentVoipOrMultiTalkId=_currentVoipOrMultiTalkId;
@property(retain, nonatomic) NSMutableDictionary *subSceneVideoMonoServiceDict; // @synthesize subSceneVideoMonoServiceDict=_subSceneVideoMonoServiceDict;
@property(retain, nonatomic) NSMutableDictionary *mainSceneVideoMonoServiceDict; // @synthesize mainSceneVideoMonoServiceDict=_mainSceneVideoMonoServiceDict;
@property(retain, nonatomic) NSMutableDictionary *subSceneAudioMonoServiceDict; // @synthesize subSceneAudioMonoServiceDict=_subSceneAudioMonoServiceDict;
@property(retain, nonatomic) NSMutableDictionary *mainSceneAudioMonoServiceDict; // @synthesize mainSceneAudioMonoServiceDict=_mainSceneAudioMonoServiceDict;
@property(retain, nonatomic) NSMutableDictionary *monoServiceAppSceneDict; // @synthesize monoServiceAppSceneDict=_monoServiceAppSceneDict;
- (void)onVideoVoipViewDisappear;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onPlayer:(id)arg1 muteChanged:(_Bool)arg2;
- (void)onPlayerPausePlay:(id)arg1;
- (void)onPlayerStartPlay:(id)arg1;
- (id)createVoipOrMultiTalkServiceId;
- (_Bool)isContainAudioMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3 inMainScene:(_Bool)arg4;
- (_Bool)isContainVideoMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 inMainScene:(_Bool)arg3;
- (_Bool)isContainAudioMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 inMainScene:(_Bool)arg3;
- (id)getSubAppSceneVideoMonoServiceList;
- (id)getMainAppSceneVideoMonoServiceList;
- (unsigned long long)getSubAppSceneAudioMonoServiceCountExceptBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (unsigned long long)getMainAppSceneAudioMonoServiceCountExceptBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (id)getAudioMonoServiceList;
- (id)getSubAppSceneAudioMonoServiceList;
- (id)getMainAppSceneAudioMonoServiceList;
- (_Bool)changeVideoMonoServiceBusinessToSubAppScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (_Bool)changeAudioMonoServiceBusinessToSubAppScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (_Bool)changeVideoMonoServiceBusinessToMainAppScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (_Bool)changeAudioMonoServiceBusinessToMainAppScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (_Bool)removeVideoMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (_Bool)addVideoMonoServiceBusinessUseLastActiveScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (_Bool)addVideoMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (_Bool)addVideoMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3 inMainAppScene:(_Bool)arg4;
- (_Bool)removeAudioMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (_Bool)addAudioMonoServiceBusinessUseLastActiveScene:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (_Bool)addAudioMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (_Bool)addAudioMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3 inMainAppScene:(_Bool)arg4;
- (unsigned long long)getCurrentAppSceneForMonoServiceBusiness:(unsigned long long)arg1 subBusiness:(unsigned long long)arg2 serviceId:(id)arg3;
- (void)updateMonoServiceAppScene:(unsigned long long)arg1 forMonoServiceBusiness:(unsigned long long)arg2 subBusiness:(unsigned long long)arg3 serviceId:(id)arg4;
- (void)clearData;
- (void)initData;
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

