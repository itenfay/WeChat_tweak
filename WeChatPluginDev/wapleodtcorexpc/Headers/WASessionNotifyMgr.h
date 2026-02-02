//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WASessionNotifyInfo;

@interface WASessionNotifyMgr
{
    WASessionNotifyInfo *_notifyInfo;
}

+ (void)saveToNotifyInfoToFile:(id)arg1;
+ (id)loadNotifyInfoFromFile;
- (void).cxx_destruct;
- (void)updateSessionNotifyIsOpen:(_Bool)arg1 userNameList:(id)arg2;
- (void)updateSessionNotifyToOpen:(id)arg1;
- (void)updateSessionNotifyToClose:(id)arg1;
- (void)updateSessionHolderNotify:(id)arg1;
- (void)onManulLoginOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)rollbackSwitchRequestChangeFromFileToMemory:(id)arg1;
- (void)syncSwitchRequestChangeToFile:(id)arg1;
- (id)generateNotifyOptionItemListAndSyncToMemory:(id)arg1 closeUserNameList:(id)arg2 openUserNameList:(id)arg3;
- (void)saveNotifyOptionToMemoryAndFile:(id)arg1 withRequest:(id)arg2;
- (void)onResponseSwitchSessionNotify:(id)arg1 withRequest:(id)arg2;
- (void)requestSwitchSessionNotifyWithGlobalOpenStatus:(id)arg1 closeUserNameList:(id)arg2 openUserNameList:(id)arg3;
- (void)onResponseSessionNotify:(id)arg1 withRequest:(id)arg2;
- (void)requestSessionNotifyWithType:(unsigned int)arg1;
- (void)requestGlobalSessionNotifyOpenStatus;
- (void)callExtensionOnSessionNotifyUpdate;
- (void)setSessionNotifyClose:(id)arg1;
- (void)setSessionNotifyOpen:(id)arg1;
- (void)setGlobalSessionNotifyOpenStatus:(id)arg1 openUserNameList:(id)arg2;
- (void)requestSessionNotifyInfo;
- (id)getSessionNotifyCloseList;
- (id)getGlobalSessionNotifyOpenStatus;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

