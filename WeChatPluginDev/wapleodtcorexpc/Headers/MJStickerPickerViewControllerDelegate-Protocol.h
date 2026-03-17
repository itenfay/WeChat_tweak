//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJStickerPickerItem, MJStickerPickerViewController;

@protocol MJStickerPickerViewControllerDelegate <NSObject>

@optional
- (void)stickerPicker:(MJStickerPickerViewController *)arg1 didCancelReplace:(MJStickerPickerItem *)arg2;
- (void)didEndReplaceWithStickerPicker:(MJStickerPickerViewController *)arg1;
- (void)stickerPicker:(MJStickerPickerViewController *)arg1 didChangeSelection:(MJStickerPickerItem *)arg2 atIndex:(long long)arg3;
- (void)stickerPickerNeedsResetPreviewNeedsUpdate:(MJStickerPickerViewController *)arg1 onIsPlayingDidChange:(_Bool)arg2;
- (void)stickerPickerNeedsResetPreview:(MJStickerPickerViewController *)arg1;
@end

