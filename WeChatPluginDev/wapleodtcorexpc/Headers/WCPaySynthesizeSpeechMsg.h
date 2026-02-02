//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSData, NSDictionary, NSString, WCPayExtensionInfo;

@interface WCPaySynthesizeSpeechMsg
{
    WCPayExtensionInfo *m_extensionInfo;
    NSDictionary *m_payload;
    unsigned long long m_speechFormat;
    NSData *m_synthesizeSpeechData;
    unsigned long long m_messageType;
    _Bool m_isOverTime;
    unsigned int _voiceSynthesizeTime;
    NSString *_m_pushIdentifier;
    CMessageWrap *_m_messageWrap;
}

+ (id)speechMsgWithMsgType:(id)arg1 extensionInfo:(id)arg2 payload:(id)arg3 messageType:(unsigned long long)arg4;
+ (id)speechMsgWithNewXML:(id)arg1;
+ (id)speechMsgWithWCPayExtensionInfo:(id)arg1;
+ (id)speechMsgWithPayload:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *m_messageWrap; // @synthesize m_messageWrap=_m_messageWrap;
@property(retain, nonatomic) NSString *m_pushIdentifier; // @synthesize m_pushIdentifier=_m_pushIdentifier;
@property(nonatomic) unsigned int voiceSynthesizeTime; // @synthesize voiceSynthesizeTime=_voiceSynthesizeTime;
@property(nonatomic) _Bool m_isOverTime; // @synthesize m_isOverTime;
@property(readonly, nonatomic) unsigned long long m_messageType; // @synthesize m_messageType;
@property(readonly, nonatomic) NSData *m_synthesizeSpeechData; // @synthesize m_synthesizeSpeechData;
@property(readonly, nonatomic) WCPayExtensionInfo *m_extensionInfo; // @synthesize m_extensionInfo;
@property(readonly, nonatomic) NSDictionary *m_payload; // @synthesize m_payload;
@property(readonly, nonatomic) unsigned long long m_speechFormat; // @synthesize m_speechFormat;
- (void)reportSDKComposeFail:(unsigned int)arg1 packId:(id)arg2;
- (void)reportSDKComposeSuccess:(id)arg1;
- (void)reportKVPlaySoundFail:(unsigned int)arg1 retCode:(long long)arg2;
- (void)reportKVPlayPrefixSound;
- (void)reportKVScene:(unsigned int)arg1;
- (void)reportCgiCostTime:(unsigned int)arg1;
- (void)reportKVForegroundPlaySoundSuccess;
- (void)reportKVPlaySoundFail:(unsigned int)arg1;
- (void)reportKVPushSuccess;
- (void)reportIdKeyGetVoiceReqCgiError;
- (void)reportIdKeyGetVoiceReqLocalNetWorkError;
- (void)reportIdKeyGetVoiceReqSuccess;
- (void)reportIdKeyPlaySoundFailed;
- (void)reportIdKeyPlaySoundSuccess;
- (void)reportIdKeyGetVoiceReq;
- (id)soundNameOfSwitchClose;
- (id)soundNameOfSwitchOpen;
- (id)frontPartSoundPath;
- (_Bool)isSwitchOpen;
- (unsigned int)getCgiCmd;
- (_Bool)setVoiceResponse:(id)arg1;
- (id)getVoiceRequest;
- (id)getLocalNotificationInfo:(_Bool)arg1;
- (void)setPayload;
- (void)setPayloadWithLocalPush:(id)arg1;
- (id)initWithExtensionInfo:(id)arg1 payload:(id)arg2 messageType:(unsigned long long)arg3;
- (id)init;

@end

