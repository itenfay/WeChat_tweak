//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAuthInfo, MMMultiHostAuthInfo, NSData, NSMutableDictionary, NSSet, NSString;

@interface MMAuthService
{
    _Bool m_hasLoadUseAesGcmSessionKeyConfig;
    _Bool m_useAesGcmSessionKey;
    _Bool m_useSm4GcmAlgo;
    unsigned int _authStartTime;
    unsigned int _axTicketExpireTime;
    unsigned int _axTicketAutoRetry;
    NSData *_ecdhKey;
    NSSet *_useAesGcmSessionKeyCgis;
    MMAuthInfo *_oriAuthInfo;
    MMMultiHostAuthInfo *_mainAuthInfo;
    NSMutableDictionary *_axAuthWrapDic;
    NSMutableDictionary *_axAuthWrapFromHostDic;
}

+ (_Bool)canUseInSafemode;
- (void).cxx_destruct;
@property(nonatomic) unsigned int axTicketAutoRetry; // @synthesize axTicketAutoRetry=_axTicketAutoRetry;
@property(nonatomic) unsigned int axTicketExpireTime; // @synthesize axTicketExpireTime=_axTicketExpireTime;
@property(nonatomic) unsigned int authStartTime; // @synthesize authStartTime=_authStartTime;
@property(retain) NSMutableDictionary *axAuthWrapFromHostDic; // @synthesize axAuthWrapFromHostDic=_axAuthWrapFromHostDic;
@property(retain) NSMutableDictionary *axAuthWrapDic; // @synthesize axAuthWrapDic=_axAuthWrapDic;
@property(retain) MMMultiHostAuthInfo *mainAuthInfo; // @synthesize mainAuthInfo=_mainAuthInfo;
@property(retain) MMAuthInfo *oriAuthInfo; // @synthesize oriAuthInfo=_oriAuthInfo;
@property(retain) NSSet *useAesGcmSessionKeyCgis; // @synthesize useAesGcmSessionKeyCgis=_useAesGcmSessionKeyCgis;
@property(retain) NSData *ecdhKey; // @synthesize ecdhKey=_ecdhKey;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onMMDynamicConfigUpdated;
- (void)onAuthOK;
- (void)onAxAuthLogicFailed:(id)arg1;
- (void)onAxAuthLogicSuccess:(id)arg1 clientSessionKey:(id)arg2 serverSessionKey:(id)arg3 serverId:(id)arg4 hostAlgoList:(id)arg5;
- (void)adjustEncryptAlgoForAuthInfo:(id)arg1;
- (void)setUseSm4GcmSwitchEnabled:(_Bool)arg1;
- (void)loadUseAesGcmSessionKeyConfig;
- (unsigned long long)checkAxAuthStateForHost:(id)arg1;
- (id)mainHostDecryptKeyForEncryptAlgo:(int)arg1;
- (id)authInfoForCgi:(unsigned int)arg1 host:(id)arg2;
- (void)startAxAuthRequestsOnMainThread;
- (void)updateAxAuthSecRespList:(id)arg1 authStartTime:(unsigned int)arg2;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)cEcdhkey;
@property(retain, nonatomic) NSData *mainHostServerId; // @dynamic mainHostServerId;
- (void)updateMainHostClientSessionKey:(id)arg1 serverSessionKey:(id)arg2 hostAlgoList:(id)arg3;
@property(retain, nonatomic) NSData *oriSessionKey; // @dynamic oriSessionKey;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

