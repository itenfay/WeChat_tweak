//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCBootsUpdateInfo;

@interface WCUpdateBootsMgr
{
    NSMutableDictionary *_dicDownloadingItem;
    NSString *_baseID;
    WCBootsUpdateInfo *_curBootsUpdateInfo;
}

+ (_Bool)canUseInSafemode;
+ (_Bool)isPRConfigContent:(id)arg1;
- (void).cxx_destruct;
- (void)cleanUpdate;
- (void)cleanOldOne;
- (void)handleXmlMsg:(id)arg1;
- (_Bool)verifyUpdateData:(id)arg1 withBootsInfo:(id)arg2;
- (_Bool)startDownloadUpdate:(id)arg1 downloadType:(unsigned long long)arg2;
- (void)checkBootsUpdateWithCondition:(id)arg1 forceWithoutLogin:(_Bool)arg2;
- (id)getDefaultConditions;
- (id)getCurrentPid;
- (id)getBaseID;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onProcessPRConfigContent:(id)arg1;
- (void)onNewSyncIPXX:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onServiceInit;
- (void)processPRConfig:(id)arg1;
- (void)checkBootsUpdateWithXmlKey:(id)arg1;
- (void)p_checkBootsUpdate;
- (void)repeatCheckBootsUpdate;
- (void)checkBootsUpdate;
- (_Bool)bootsAutoCheck;
- (_Bool)toggleBootsAutoCheck;
- (void)forceUpdate:(_Bool)arg1;
- (id)getBootsUpdateData:(unsigned long long *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

