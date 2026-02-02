//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonListUpdateLogic, EmoticonStoreMainTabExptSetting, EmoticonStoreSecondTabExptSetting, EmoticonStoreSession, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface EmoticonStoreMgr
{
    NSMutableSet *m_requestDetailForPids;
    NSMutableDictionary *m_getListEventIdDic;
    EmoticonStoreSession *m_session;
    NSMutableDictionary *m_skProducts;
    NSMutableDictionary *_getDetailCgiDic;
    NSMutableDictionary *_m_waitForExchangePackItemDic;
    NSOperationQueue *_m_installPackageQueue;
    EmoticonListUpdateLogic *_emoticonListUpdateLogic;
    NSMutableDictionary *_IAPPurchaseDic;
    NSMutableDictionary *_weCoinPurchaseDic;
    NSMutableDictionary *_emoticonDownloadDic;
    EmoticonStoreMainTabExptSetting *_mainTabExptSetting;
    NSString *_mainTabExptConfig;
    EmoticonStoreSecondTabExptSetting *_secondTabExptSetting;
    NSString *_secondTabExptConfig;
    NSMutableDictionary *_downloadingStoreItemCache;
}

+ (unsigned int)getIdKeyDownloadFailed;
+ (unsigned int)getIdKeyIdEmoticon;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downloadingStoreItemCache; // @synthesize downloadingStoreItemCache=_downloadingStoreItemCache;
@property(retain, nonatomic) NSString *secondTabExptConfig; // @synthesize secondTabExptConfig=_secondTabExptConfig;
@property(retain, nonatomic) EmoticonStoreSecondTabExptSetting *secondTabExptSetting; // @synthesize secondTabExptSetting=_secondTabExptSetting;
@property(retain, nonatomic) NSString *mainTabExptConfig; // @synthesize mainTabExptConfig=_mainTabExptConfig;
@property(retain, nonatomic) EmoticonStoreMainTabExptSetting *mainTabExptSetting; // @synthesize mainTabExptSetting=_mainTabExptSetting;
@property(retain, nonatomic) NSMutableDictionary *emoticonDownloadDic; // @synthesize emoticonDownloadDic=_emoticonDownloadDic;
@property(retain, nonatomic) NSMutableDictionary *weCoinPurchaseDic; // @synthesize weCoinPurchaseDic=_weCoinPurchaseDic;
@property(retain, nonatomic) NSMutableDictionary *IAPPurchaseDic; // @synthesize IAPPurchaseDic=_IAPPurchaseDic;
@property(retain, nonatomic) EmoticonListUpdateLogic *emoticonListUpdateLogic; // @synthesize emoticonListUpdateLogic=_emoticonListUpdateLogic;
@property(retain, nonatomic) NSOperationQueue *m_installPackageQueue; // @synthesize m_installPackageQueue=_m_installPackageQueue;
@property(retain, nonatomic) NSMutableDictionary *m_waitForExchangePackItemDic; // @synthesize m_waitForExchangePackItemDic=_m_waitForExchangePackItemDic;
@property(retain, nonatomic) NSMutableDictionary *getDetailCgiDic; // @synthesize getDetailCgiDic=_getDetailCgiDic;
@property(retain, nonatomic) EmoticonStoreSession *m_session; // @synthesize m_session;
@property(retain, nonatomic) NSMutableDictionary *m_skProducts; // @synthesize m_skProducts;
- (void)onGetExptConfig:(id)arg1 reqType:(unsigned int)arg2;
- (id)forceUpdateForListUpdateWithItemList:(id)arg1;
- (void)onCdnDownloadSuccessForItem:(id)arg1;
- (void)onCdnDownloadFailForItem:(id)arg1;
- (void)onCdnDownloadStartFailedForItem:(id)arg1;
- (void)onEmoticonExchangeFailForItem:(id)arg1 isNetworkError:(_Bool)arg2;
- (void)onEmoticonExchangeSuccessForItem:(id)arg1;
- (void)onWeCoinPurchasePrepareFinishedForItem:(id)arg1;
- (void)onWeCoinPurchaseStartedForItem:(id)arg1;
- (void)onWeCoinPurchaseCanceledForItem:(id)arg1;
- (void)onWeCoinDepositFailedWhenPurchasing:(id)arg1;
- (void)onWeCoinPurchaseSuccessForItem:(id)arg1 paidBefore:(_Bool)arg2;
- (void)onWeCoinConsumeFailedForItem:(id)arg1;
- (void)onWeCoinPreparePurchaseFailedForItem:(id)arg1;
- (void)onWeCoinPurchasePrepareStartedForItem:(id)arg1;
- (void)onWeCoinShowFirstBuyTipForItem:(id)arg1;
- (void)tryStartDownloadItem:(id)arg1 WithScene:(int)arg2 isAutomatic:(_Bool)arg3;
- (void)onPurchaseSuccessForItem:(id)arg1 paidBefore:(_Bool)arg2;
- (void)onPurchaseFailedForItem:(id)arg1;
- (_Bool)getBoughtListFromServer;
- (void)saveSecondTabExptSetting:(id)arg1;
- (void)saveMainTabExptSetting:(id)arg1;
- (void)saveEmoticonExpt:(id)arg1 reqType:(unsigned int)arg2;
- (void)onLanguageChange;
- (void)saveStoreItemCacheForDownload:(id)arg1;
- (void)setStoreListCacheWithCache:(id)arg1 withReqType:(unsigned int)arg2;
- (void)setStoreListCacheWithItemList:(id)arg1 Advertisment:(id)arg2 withReqType:(unsigned int)arg3 withTopNum:(unsigned int)arg4;
- (void)setStoreListCacheWithItemList:(id)arg1 Advertisment:(id)arg2 withReqType:(unsigned int)arg3;
- (id)getStoreListCacheWithReqType:(unsigned int)arg1;
- (id)pathForStoreListCacheWithReqType:(unsigned int)arg1;
- (id)rootPathForStoreListCache;
- (void)notifyDownloadErrorWithItem:(id)arg1;
- (id)findEmoticonItemByProductID:(id)arg1;
- (void)updateBoughtListTailFromServer;
- (void)startBoughtListSession;
- (id)updateItemDetailWithProductID:(id)arg1 Scence:(unsigned int)arg2 ShouldLimitFrequency:(_Bool)arg3;
- (_Bool)updateTailForSessionScence:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (id)getStoreAdvertismentForSession:(unsigned int)arg1;
- (void)tryInstallEmoticonPackage:(id)arg1;
- (_Bool)cancelDownloadAndInstallEmoticonItem:(id)arg1;
- (_Bool)reDownloadAndInstallEmoticonItem:(id)arg1 isAutomatic:(_Bool)arg2;
- (void)onRestoreFail;
- (void)onRestoreSuccessForProduct:(id)arg1;
- (id)getWeCoinPurchaseLogicForItem:(id)arg1;
- (unsigned long long)buyEmoticonItem:(id)arg1;
- (void)updateItemInSession:(id)arg1 isFromDetail:(_Bool)arg2;
- (void)updateItemInSession:(id)arg1;
- (void)processUpdatedItem:(id)arg1;
- (void)callStoreItemGetDetailFailedFor:(id)arg1;
- (void)callStoreItemUpdateExt:(id)arg1;
- (void)tryUpdateDetailFromServerWithProductID:(id)arg1 Scence:(unsigned int)arg2 isLimited:(_Bool)arg3;
- (id)mergeSessionForItemList:(id)arg1;
- (_Bool)GetEmotionListFromStore:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (void)endStoreSession:(unsigned int)arg1;
- (id)beginStoreSessionWithItem:(id)arg1;
- (unsigned long long)beginStoreSession:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (void)dealloc;
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

