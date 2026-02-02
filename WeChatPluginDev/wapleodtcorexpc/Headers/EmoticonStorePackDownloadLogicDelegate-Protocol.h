//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonStoreItem;

@protocol EmoticonStorePackDownloadLogicDelegate <NSObject>
- (void)onCdnDownloadSuccessForItem:(EmoticonStoreItem *)arg1;
- (void)onCdnDownloadFailForItem:(EmoticonStoreItem *)arg1;
- (void)onCdnDownloadStartFailedForItem:(EmoticonStoreItem *)arg1;
- (void)onEmoticonExchangeFailForItem:(EmoticonStoreItem *)arg1 isNetworkError:(_Bool)arg2;
- (void)onEmoticonExchangeSuccessForItem:(EmoticonStoreItem *)arg1;
@end

