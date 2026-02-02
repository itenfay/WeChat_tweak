//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonStoreItem;

@protocol StoreEmotionDownloadLogicObjectDelegate <NSObject>
- (void)onStoreEmotionDownloadLogicObjectFailed;
- (void)onStoreEmotionDownloadLogicObjectOK;

@optional
- (void)onStoreEmotionDownloadLogicObjectFailedWithItem:(EmoticonStoreItem *)arg1;
@end

