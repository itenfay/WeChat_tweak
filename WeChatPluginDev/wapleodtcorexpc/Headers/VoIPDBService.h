//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, VoIPDB;

@interface VoIPDBService
{
    VoIPDB *_voipBaseDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoIPDB *voipBaseDB; // @synthesize voipBaseDB=_voipBaseDB;
- (void)onDelMsg:(id)arg1 msgList:(id)arg2 deleteAll:(_Bool)arg3;
- (void)DelAllMsg:(id)arg1;
- (_Bool)deleteVoIPMessageHistory:(id)arg1;
- (id)getMessageHistoryAtMost:(long long)arg1;
- (_Bool)InsertVoIPMessageHistory:(id)arg1 isFromServer:(_Bool)arg2;
- (void)setRemoteUserIlinkStatus:(id)arg1 sdkMode:(unsigned int)arg2 liveTime:(unsigned int)arg3;
- (unsigned int)getRemoteUserIlinkExpireTime:(id)arg1;
- (unsigned int)getRemoteUserIlinkSupportStatus:(id)arg1;
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

