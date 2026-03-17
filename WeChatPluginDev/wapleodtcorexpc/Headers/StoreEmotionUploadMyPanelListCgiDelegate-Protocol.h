//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol StoreEmotionUploadMyPanelListCgiDelegate <NSObject>

@optional
- (void)onStoreEmotionUploadMyPanelListCgiOverLimitWithNeedUploadMd5List:(NSArray *)arg1;
- (void)onStoreEmotionUploadMyPanelListCgiRunOutWithNeedUploadMd5List:(NSArray *)arg1;
- (_Bool)canStoreEmotionUploadMyPanelListCgi;
- (void)onStoreEmotionUploadMyPanelListCgiNoNeedToBackUp;
- (void)onStoreEmotionUploadMyPanelListCgiFailed;
- (void)onStoreEmotionUploadMyPanelListCgiOk;
@end

