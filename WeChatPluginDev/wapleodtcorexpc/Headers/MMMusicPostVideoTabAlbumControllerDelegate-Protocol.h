//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditVideoAttr, MMMusicAlbumVideoCellModel, MMMusicPostVideoTabAlbumController, MMShortVideoParamModel, NSString, PHChange, UIImage;

@protocol MMMusicPostVideoTabAlbumControllerDelegate <NSObject>
- (void)mmMusicPostVideoTabAlbumController:(MMMusicPostVideoTabAlbumController *)arg1 onLocalVideoAssetSelectedBtnChecked:(MMMusicAlbumVideoCellModel *)arg2;
- (void)onTabAlbumVCShortVideoTaken:(NSString *)arg1 localIdentifier:(NSString *)arg2 thumbImg:(UIImage *)arg3 editVideoAttr:(EditVideoAttr *)arg4 paramModel:(MMShortVideoParamModel *)arg5;
- (void)onSelectLocalVideoAsset:(MMMusicAlbumVideoCellModel *)arg1 thumbImage:(UIImage *)arg2 thumbFrameInVCAcquireBlock:(struct CGRect (^)(void))arg3 contentOffsetResetBlock:(void (^)(void))arg4;

@optional
- (void)onTabAlbumAssetsChange:(PHChange *)arg1;
@end

