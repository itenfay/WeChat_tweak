//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ImageInfo, MMAsset, NSData, UIImage, UINavigationController;

@protocol ImageBrowseDelegate <NSObject>

@optional
- (void)didSelectAsset:(MMAsset *)arg1 Finish:(_Bool)arg2 fromImagePicker:(UINavigationController *)arg3;
- (void (^)(void (^)(void)))willFinishPickingAsset;
- (void)didSelectImage:(UIImage *)arg1 Data:(NSData *)arg2 Finish:(_Bool)arg3 fromImagePicker:(UINavigationController *)arg4;
- (void)didSelectImage:(UIImage *)arg1 Data:(NSData *)arg2 imageInfo:(ImageInfo *)arg3 fromImagePicker:(UINavigationController *)arg4;
- (void)didSelectImage:(UIImage *)arg1 Data:(NSData *)arg2 fromImagePicker:(UINavigationController *)arg3;
- (void)didSelectImage:(UIImage *)arg1 fromImagePicker:(UINavigationController *)arg2;
- (void)downloadFailInImageBrowse;
@end

