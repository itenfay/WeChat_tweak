//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCAddressNetworkHelper;

@interface WCAddressLogicMgr
{
    NSMutableArray *m_arrAddress;
    NSMutableArray *m_arrAddressStageData;
    unsigned int m_retainCount;
    unsigned int currentVersion;
    WCAddressNetworkHelper *m_networkHelper;
    unsigned int m_timeStamp;
    int m_uiWCAddressGetAddressStategy;
    int m_uiWCAddressDownloadType;
}

- (void).cxx_destruct;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (void)OnAnalyseWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnImportWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnSelectWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnModifyWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnQueryWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)HandleGetAddressStategy:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)OnRemoveWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnAddWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (_Bool)getAllAddressFourStageData;
- (_Bool)GetAllAddressStageData;
- (_Bool)GetServerRequestToAddressStageData:(id)arg1 andType:(unsigned long long)arg2;
- (void)SetRecentlyUsedAddress:(id)arg1;
- (id)GetRecentlyUsedAddress;
- (void)GetAllAddress:(id)arg1;
- (void)AnalysicAddressInfo:(id)arg1;
- (void)ModifyAddress:(id)arg1;
- (void)DelAddress:(id)arg1;
- (void)AddAddress:(id)arg1;
- (void)GetLatestAddress:(id)arg1;
- (void)StopWCAddressService;
- (void)StartWCAddressService;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;
- (void)importYiXunAdress;
- (void)setHadImportYiXunAddress;
- (_Bool)isImportYiXunAddress;
- (void)removeArchiveAddress;
- (id)safeGetAddress;
- (_Bool)isCachedAddress;
- (_Bool)safeArchiveAddress;
- (_Bool)GetFourStageAddressDataFromPath:(id)arg1 Error:(id *)arg2;
- (_Bool)GetAddressDataFromPath:(id)arg1 Error:(id *)arg2;
- (id)GetRcptInfoNode:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

