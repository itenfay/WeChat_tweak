//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetInfo, NSMutableArray, UIView;
@protocol MMAssetPickerBrowserViewProtocol;

@protocol MMImagePreviewBrowserControllerDataSource <NSObject>
- (unsigned long long)getSelectedAssetTotalSize;
- (unsigned long long)previewAssetTotal;
- (MMAssetInfo *)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (long long)previewIndexForAssetInfo:(MMAssetInfo *)arg1;
- (_Bool)isPreviewSelectedAssetInfosContainsVideo;
- (NSMutableArray *)selectedAssetInfosForPreview;
- (_Bool)isPreviewSelectedOnly;

@optional
- (UIView<MMAssetPickerBrowserViewProtocol> *)customBrowserViewForAssetInfo:(MMAssetInfo *)arg1;
- (_Bool)showSelectedNumbers;
- (_Bool)isPreviewStyleForFile;
@end

