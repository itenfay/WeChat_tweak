//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFrequencyChecker, NSMutableArray, NSMutableSet, NSString, SystemAuthConfigurator;

@interface MMSystemAuthManager
{
    NSMutableArray *_requestQueue;
    MMFrequencyChecker *_frequencyChecker;
    SystemAuthConfigurator *_configurator;
    NSMutableSet *_rejectedSessionMap;
}

+ (id)currentPrivacyFullStatus;
+ (_Bool)needApplyForAuthorizationFor:(unsigned int)arg1 scene:(unsigned long long)arg2;
+ (unsigned int)authorizationStatusFor:(unsigned int)arg1 scene:(unsigned long long)arg2;
+ (_Bool)needApplyContactsAuthorizationFor:(unsigned long long)arg1;
+ (_Bool)isContactsAuthorizedFor:(unsigned long long)arg1;
+ (unsigned int)contactsAuthorizationStatusFor:(unsigned long long)arg1;
+ (_Bool)isLocationAuthorizedFor:(unsigned long long)arg1;
+ (unsigned int)locationAuthorizationStatusFor:(unsigned long long)arg1;
+ (_Bool)isRecordAuthorizedFor:(unsigned long long)arg1;
+ (void)VoIP_requestCameraAuthWithCompletion:(CDUnknownBlockType)arg1;
+ (void)VoIP_requestMicrophoneAuthWithCompletion:(CDUnknownBlockType)arg1;
+ (void)VoIPMP_requestCameraAuthWithCompletion:(CDUnknownBlockType)arg1;
+ (void)VoIPMP_requestMicrophoneAuthWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *rejectedSessionMap; // @synthesize rejectedSessionMap=_rejectedSessionMap;
@property(retain, nonatomic) SystemAuthConfigurator *configurator; // @synthesize configurator=_configurator;
@property(retain, nonatomic) MMFrequencyChecker *frequencyChecker; // @synthesize frequencyChecker=_frequencyChecker;
@property(retain, nonatomic) NSMutableArray *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (unsigned long long)getSceneFromWebUrl:(id)arg1;
- (_Bool)isAuthRequestFrequencyLimitedFor:(unsigned int)arg1 sceneKey:(id)arg2;
- (void)completeAndCheckQueue;
- (id)requestWeChatAndSystemAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)process:(id)arg1;
- (void)checkRequestQueue;
- (id)__requestAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestAuthResultFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)onServiceInit;
- (id)requestCameraAuthForScene:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestAccessContactsAuthFor:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)locationSceneIDFor:(unsigned long long)arg1;
- (_Bool)isUserSensitiveRegion;
- (_Bool)isLocationRequestFrequencyLimitedFor:(unsigned long long)arg1;
- (id)requestLocationAuthForScene:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestMicrophoneAuthForScene:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestRecordPermissionFor:(unsigned long long)arg1;
- (void)reportWithAction:(unsigned long long)arg1 capability:(unsigned int)arg2 scene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

