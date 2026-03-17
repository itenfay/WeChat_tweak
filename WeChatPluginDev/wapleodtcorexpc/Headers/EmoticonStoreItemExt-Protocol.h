//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, NSString;

@protocol EmoticonStoreItemExt

@optional
- (void)OnEmoticonStoreItemGetDetailFailed:(NSString *)arg1;
- (void)OnEmoticonStoreItemGetProductFinished:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemInstallFailed:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemInstallFinished:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemInstallStarted:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemDownloadFailed:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemDownloadFinished:(EmoticonStoreItem *)arg1;
- (void)OnEmoticonStoreItemDownloadProgressChanged:(EmoticonStoreItem *)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnEmoticonStoreItemChanged:(EmoticonStoreItem *)arg1;
@end

