//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMVoidCallback, MMVoidStringStringStringCallback, NSString, SoterSignHelper, SoterUpdateMPAuthKeyCgi;

@interface KindaHKFingerprintService : NSObject
{
    NSString *_authResaon;
    NSString *_authChallenge;
    SoterSignHelper *_soterSignHelper;
    SoterUpdateMPAuthKeyCgi *_soterUpdateKeyCgi;
    MMVoidStringStringStringCallback *_succCallback;
    MMVoidCallback *_failCallback;
    MMVoidCallback *_cancelCallback;
    MMVoidCallback *_forgetPwdCallback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidCallback *forgetPwdCallback; // @synthesize forgetPwdCallback=_forgetPwdCallback;
@property(retain, nonatomic) MMVoidCallback *cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(retain, nonatomic) MMVoidCallback *failCallback; // @synthesize failCallback=_failCallback;
@property(retain, nonatomic) MMVoidStringStringStringCallback *succCallback; // @synthesize succCallback=_succCallback;
@property(retain, nonatomic) SoterUpdateMPAuthKeyCgi *soterUpdateKeyCgi; // @synthesize soterUpdateKeyCgi=_soterUpdateKeyCgi;
@property(retain, nonatomic) SoterSignHelper *soterSignHelper; // @synthesize soterSignHelper=_soterSignHelper;
@property(retain, nonatomic) NSString *authChallenge; // @synthesize authChallenge=_authChallenge;
@property(retain, nonatomic) NSString *authResaon; // @synthesize authResaon=_authResaon;
- (void)authenticateImpl:(id)arg1 challenge:(id)arg2 extra:(id)arg3 success:(id)arg4 fail:(id)arg5 change2Pwd:(id)arg6 showErrThenChange2Pwd:(id)arg7;
- (void)showFaceIdAuthDialogImpl:(id)arg1 success:(id)arg2 fail:(id)arg3 cancel:(id)arg4;
- (id)getFingerPosition;
- (long long)getFingerType;
- (void)releaseService;
- (void)handleAuthFail;
- (void)handleAuthCancel;
- (void)handleAuthFallback;
- (id)resultJsonWithChallenge:(id)arg1;
- (void)handleAuthSucc:(id)arg1;
- (void)onSoterUpdateMPAuthKeyCgiError;
- (void)onSoterUpdateMPAuthKeyCgiOk;
- (void)showBioAuthViewImpl:(id)arg1 challenge:(id)arg2 successEvent:(id)arg3 failEvent:(id)arg4 cancelEvent:(id)arg5 forgetPwdEvent:(id)arg6;
- (long long)supportBioType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

