//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LiteAppAssetInfo, LiteAppAssetView, MMAssetPickerInterceptor, NSString;

@protocol LiteAppAssetViewDelegate <NSObject>

@optional
- (void)onClickEvent:(LiteAppAssetView *)arg1;
- (void)onRemoveSelectedInfo:(LiteAppAssetInfo *)arg1;
- (void)onInsertSelectedInfo:(LiteAppAssetInfo *)arg1 atIndex:(unsigned long long)arg2;
- (void)viewStopLoading;
- (void)viewStartLoadingNonBlock;
- (_Bool)isAssetSelectable:(LiteAppAssetInfo *)arg1;
- (unsigned long long)selectedAssetInfosCount;
- (unsigned long long)selectedImageInfosCount;
- (void)notifyLimitTips:(NSString *)arg1 assetInfo:(LiteAppAssetInfo *)arg2 scene:(unsigned long long)arg3 showAlert:(_Bool)arg4;
- (long long)indexInSelectedAssetInfosForAssetInfo:(LiteAppAssetInfo *)arg1;
- (void)onSelectAssetFinished:(LiteAppAssetView *)arg1 isAutoSelct:(_Bool)arg2;
- (MMAssetPickerInterceptor *)onAssetViewDidDeselect:(LiteAppAssetView *)arg1;
- (MMAssetPickerInterceptor *)onAssetViewWillDeselect:(LiteAppAssetView *)arg1;
- (MMAssetPickerInterceptor *)onAssetViewDidSelect:(LiteAppAssetView *)arg1;
- (MMAssetPickerInterceptor *)onAssetViewWillSelect:(LiteAppAssetView *)arg1;
@end

