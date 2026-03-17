//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, NSArray, StoreListChangeData;

@protocol EmoticonStoreMgrExt

@optional
- (void)OnEmoticonExptConfigChange:(unsigned long long)arg1;
- (void)OnBuyEmoticonItemCanceled:(EmoticonStoreItem *)arg1;
- (void)OnBuyEmoticonItemFailed:(EmoticonStoreItem *)arg1;
- (void)OnBuyEmoticonItemSuccess:(EmoticonStoreItem *)arg1 paidBefore:(_Bool)arg2;
- (void)OnBuyEmoticonItemStarted:(EmoticonStoreItem *)arg1;
- (void)OnBuyEmoticonItemPrepareFinished:(EmoticonStoreItem *)arg1;
- (void)OnBuyItemPrepareStarted:(EmoticonStoreItem *)arg1;
- (void)OnBuyItemFirstBuyTipShow:(EmoticonStoreItem *)arg1;
- (void)OnStoreListChanged:(NSArray *)arg1 withRet:(unsigned long long)arg2 withReqType:(unsigned int)arg3 data:(StoreListChangeData *)arg4;
@end

