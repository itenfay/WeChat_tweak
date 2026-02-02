//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface EmoticonPackageStateMgr
{
    NSMutableDictionary *m_dicState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *m_dicState; // @synthesize m_dicState;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(_Bool)arg2;
- (void)OnEmoticonStoreItemInstallFailed:(id)arg1;
- (void)OnEmoticonStoreItemInstallFinished:(id)arg1;
- (void)OnEmoticonStoreItemInstallStarted:(id)arg1;
- (void)OnEmoticonStoreItemGetProductFinished:(id)arg1;
- (void)resetState:(id)arg1;
- (void)OnEmoticonStoreItemDownloadFailed:(id)arg1;
- (void)OnEmoticonStoreItemDownloadFinished:(id)arg1;
- (void)OnEmoticonStoreItemDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)OnBuyEmoticonItemCanceled:(id)arg1;
- (void)OnBuyEmoticonItemFailed:(id)arg1;
- (void)OnBuyEmoticonItemSuccess:(id)arg1 paidBefore:(_Bool)arg2;
- (void)OnBuyEmoticonItemPrepareFinished:(id)arg1;
- (void)OnBuyItemPrepareStarted:(id)arg1;
- (void)OnBuyItemFirstBuyTipShow:(id)arg1;
- (void)OnBuyEmoticonItemStarted:(id)arg1;
- (void)removeItem:(id)arg1;
- (long long)getStateByItem:(id)arg1;
- (void)addOrReplaceItem:(id)arg1 withState:(long long)arg2;
- (float)getDownloadProgress:(id)arg1;
- (void)cancelDownloadItem:(id)arg1;
- (void)downloadEmoticonItem:(id)arg1 isAutomatic:(_Bool)arg2;
- (void)downloadHardCodePackage:(id)arg1;
- (unsigned long long)buyEmoticonItem:(id)arg1;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

