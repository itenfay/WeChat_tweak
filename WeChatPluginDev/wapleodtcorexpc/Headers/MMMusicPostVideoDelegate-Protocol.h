//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditVideoAttr, MMMusicAlbumVideoCellModel, MMMusicFinderVideoCellModel, MMMusicPostVideoViewController, MMShortVideoParamModel, NSString, PHChange, UIImage;

@protocol MMMusicPostVideoDelegate <NSObject>
- (void)postVideoViewController:(MMMusicPostVideoViewController *)arg1 onFinderVideoSelectedBtnChecked:(MMMusicFinderVideoCellModel *)arg2;
- (void)postVideoViewController:(MMMusicPostVideoViewController *)arg1 onLocalVideoAssetSelectedBtnChecked:(MMMusicAlbumVideoCellModel *)arg2;
- (void)onPostVideoShortVideoTaken:(NSString *)arg1 localIdentifier:(NSString *)arg2 thumbImg:(UIImage *)arg3 editVideoAttr:(EditVideoAttr *)arg4 paramModel:(MMShortVideoParamModel *)arg5;
- (void)onSelectFinderVideo:(MMMusicFinderVideoCellModel *)arg1 thumbImage:(UIImage *)arg2 cellFrameInVC:(struct CGRect)arg3;
- (void)onSelectLocalVideoAsset:(MMMusicAlbumVideoCellModel *)arg1 thumbImage:(UIImage *)arg2 thumbFrameInVC:(struct CGRect)arg3;

@optional
- (void)postVideoViewControllerModeChange:(MMMusicPostVideoViewController *)arg1 fromMode:(unsigned long long)arg2 toMode:(unsigned long long)arg3;
- (void)onPostVideoTabAlbumAssetsChanged:(PHChange *)arg1;
- (void)onTabFinderSearch:(NSString *)arg1;
- (void)onPostVideoPageRecModeChanged;
@end

