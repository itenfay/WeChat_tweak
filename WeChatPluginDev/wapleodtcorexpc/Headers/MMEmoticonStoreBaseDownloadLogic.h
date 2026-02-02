//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonStoreItem, NSString;

@interface MMEmoticonStoreBaseDownloadLogic : NSObject
{
    _Bool _isReleaseBuild;
    EmoticonStoreItem *_storeItem;
    unsigned long long _downloadStatus;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReleaseBuild; // @synthesize isReleaseBuild=_isReleaseBuild;
@property(nonatomic) unsigned long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(retain, nonatomic) EmoticonStoreItem *storeItem; // @synthesize storeItem=_storeItem;
- (void)showAlertWith:(id)arg1;
- (void)stopLoadingOKIfNeededForPid:(id)arg1 withWording:(id)arg2;
- (void)stopLoadingIfNeededForPid:(id)arg1;
- (void)stopLoadingOKWithWoring:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)curViewController;
- (void)OnBuyItemCancel:(id)arg1;
- (void)OnBuyItemFailed:(id)arg1;
- (void)OnBuyItemSuccess:(id)arg1 paidBefore:(_Bool)arg2;
- (void)OnBuyItemStarted:(id)arg1;
- (void)OnBuyItemPrepareFinished:(id)arg1;
- (void)OnBuyItemPrepareStarted:(id)arg1;
- (void)OnBuyItemFirstBuyTipShow:(id)arg1;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(long long)arg2;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(_Bool)arg2;
- (void)checkEmoticonBuyRet:(unsigned long long)arg1;
- (void)onState:(long long)arg1;
- (void)realDoBuyItem;
- (void)onDownloadProgress:(float)arg1;
- (void)onDownloadStatusChangeTo:(unsigned long long)arg1;
- (void)updateStoreItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

