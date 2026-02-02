//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetInfo, MMAssetPickerController;

@protocol MMAssetPickerControllerDelegate <NSObject>

@optional
- (void)onAssetPickerLoadAlbumFinish:(_Bool)arg1;
- (void)onMMAssetPickerControllerClickBack;
- (void)onAssetPickerController:(MMAssetPickerController *)arg1 clickAssetInfo:(MMAssetInfo *)arg2;
@end

