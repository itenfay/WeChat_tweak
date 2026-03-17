//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAlbum, MMAlbumDropPickerController, MMPHAssetChangeInfo;
@protocol MMDropableTitleViewAbility;

@protocol MMAlbumDropPickerControllerDelegate <NSObject>
- (void)readAlbumsErrorWithAlbumDropPicker:(MMAlbumDropPickerController *)arg1;
- (void)authorizeErrorWithAlbumDropPicker:(MMAlbumDropPickerController *)arg1;
- (void)albumDropPicker:(MMAlbumDropPickerController *)arg1 didSelectAtAlbum:(MMAlbum *)arg2 isDefault:(_Bool)arg3;
- (id <MMDropableTitleViewAbility>)getAlbumTitleView;

@optional
- (void)onAlbumChanged:(MMAlbum *)arg1 changeInfo:(MMPHAssetChangeInfo *)arg2;
@end

