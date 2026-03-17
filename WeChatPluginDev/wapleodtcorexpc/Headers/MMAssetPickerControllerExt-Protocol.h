//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetInfo, NSDictionary, NSString;

@protocol MMAssetPickerControllerExt <NSObject>

@optional
- (void)onAssetPickerControllerDidRemoveAssetId:(NSString *)arg1;
- (void)onAssetPickerControllerDidAddAssetId:(NSString *)arg1;
- (void)onAssetPickerControllerFinishDragSelect;
- (void)onAssetPickerControllerFinishEditAssetInfo:(MMAssetInfo *)arg1;
- (void)onAssetPickerControllerChangeSelectInfosOrder;
- (void)onAssetPickerControllerChangeLivePhotoIconState:(MMAssetInfo *)arg1;
- (void)onAssetPickerControllerChangeSelectInfoDict:(NSDictionary *)arg1 index:(long long)arg2;
- (void)onAssetPickerControllerChangeSelectInfo:(MMAssetInfo *)arg1 index:(long long)arg2;
@end

