//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCMediaItem;

@protocol WCAlbumPickerExt <NSObject>

@optional
- (void)onWCAlbumPickerControllerHighlightMedia:(NSString *)arg1;
- (void)onWCAlbumPickerControllerUpdateAllAssetViewBorderWithMedia:(WCMediaItem *)arg1;
- (void)onWCAlbumPickerControllerFinishEditMedia:(WCMediaItem *)arg1;
- (void)onWCAlbumPickerControllerChangeSelectInfosOrder;
- (void)onWCAlbumPickerControllerChangeSelectInfo:(WCMediaItem *)arg1 index:(long long)arg2;
@end

