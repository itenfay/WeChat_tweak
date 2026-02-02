//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetPickerInterceptor, MMAssetView;

@protocol MMAssetViewDelegate <NSObject>

@optional
- (void)onSelectAssetFinished:(MMAssetView *)arg1 isAutoSelct:(_Bool)arg2;
- (MMAssetPickerInterceptor *)onAssetViewDidDeselect:(MMAssetView *)arg1;
- (MMAssetPickerInterceptor *)onAssetViewWillDeselect:(MMAssetView *)arg1;
- (MMAssetPickerInterceptor *)onAssetViewDidSelect:(MMAssetView *)arg1;
- (MMAssetPickerInterceptor *)onAssetViewWillSelect:(MMAssetView *)arg1;
@end

