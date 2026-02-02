//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCPayF2FSpeechMsg
{
}

- (void)reportSDKComposeFail:(unsigned int)arg1 packId:(id)arg2;
- (void)reportSDKComposeSuccess:(id)arg1;
- (void)reportKVPlayPrefixSound;
- (void)reportKVScene:(unsigned int)arg1;
- (void)reportCgiCostTime:(unsigned int)arg1;
- (void)reportKVPlaySoundFail:(unsigned int)arg1 retCode:(long long)arg2;
- (void)reportKVPlaySoundFail:(unsigned int)arg1;
- (void)reportKVPushSuccess;
- (void)reportKVForegroundPlaySoundSuccess;
- (void)reportIdKeyGetVoiceReqLocalNetWorkError;
- (void)reportIdKeyGetVoiceReqCgiError;
- (void)reportIdKeyGetVoiceReqSuccess;
- (void)reportIdKeyPlaySoundFailed;
- (void)reportIdKeyPlaySoundSuccess;
- (void)reportIdKeyGetVoiceReq;
- (unsigned int)getReportSessionType;
- (id)soundNameOfSwitchClose;
- (id)soundNameOfSwitchOpen;
- (id)frontPartSoundPath;
- (_Bool)isSwitchOpen;
- (unsigned int)getCgiCmd;
- (_Bool)setVoiceResponse:(id)arg1;
- (id)getVoiceRequest;

@end

