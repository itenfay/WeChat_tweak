//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WXGChatSyncService
{
    unsigned int m_pcVersion;
    unsigned int m_macVersion;
    unsigned int m_iPadMinVersion;
    NSMutableDictionary *_deviceLogicMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *deviceLogicMap; // @synthesize deviceLogicMap=_deviceLogicMap;
- (void)p_parseAppMsg:(id)arg1;
- (void)onRevChatSyncRequest:(id)arg1 MsgWrap:(id)arg2;
- (void)startGetMoreSynceWithExt:(id)arg1 withPemKey:(id)arg2 withDeviceContext:(id)arg3;
- (void)startSleepSyncWithExt:(id)arg1 withPemKey:(id)arg2 withDeviceContext:(id)arg3;
- (void)startSyncWithType:(unsigned long long)arg1 withPemKey:(id)arg2 withDeviceContext:(id)arg3;
- (id)getChatSyncLogicBy:(id)arg1;
- (_Bool)getAllowSync;
- (void)setAllowSync:(_Bool)arg1;
- (unsigned int)getiPadMinVersion;
- (unsigned int)getMacVersion;
- (unsigned int)getPCVersion;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

