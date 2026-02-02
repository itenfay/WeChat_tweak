//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FacebookAuth, NSString;

@interface MMFacebookMgr
{
    FacebookAuth *m_facebookAuth;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FacebookAuth *m_facebookAuth; // @synthesize m_facebookAuth;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)verifyAccessTokenValid:(id)arg1;
- (void)clearFacebookToken;
- (void)onExtendTokenFinish:(_Bool)arg1;
- (void)fbDidNotLogin:(_Bool)arg1;
- (void)fbDidLogin;
- (void)updateTokenToSvr;
- (_Bool)needSetFacebookUsageType;
- (void)setFacebookUsageType:(long long)arg1;
- (void)tryUnBindFacebook;
- (_Bool)tryExtendToken;
- (void)tryConnectFacebook;
- (void)tryBindFacebook;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)isFacebookBounded;
- (id)getFacebookName;
- (_Bool)hasInitSDK;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

