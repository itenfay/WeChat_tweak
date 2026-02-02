//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LiteAppAssetInfo, NSDictionary, NSString;

@protocol LiteAppAssetPickerControllerExt <NSObject>

@optional
- (void)onAssetPickerControllerDidRemoveAssetId:(NSString *)arg1;
- (void)onAssetPickerControllerDidAddAssetId:(NSString *)arg1;
- (void)onAssetPickerControllerFinishDragSelect;
- (void)onAssetPickerControllerFinishEditAssetInfo:(LiteAppAssetInfo *)arg1;
- (void)onAssetPickerControllerChangeSelectInfosOrder;
- (void)onAssetPickerControllerChangeLivePhotoIconState:(LiteAppAssetInfo *)arg1;
- (void)onAssetPickerControllerChangeSelectInfoDict:(NSDictionary *)arg1 index:(long long)arg2;
- (void)onAssetPickerControllerChangeSelectInfo:(LiteAppAssetInfo *)arg1 index:(long long)arg2;
@end

