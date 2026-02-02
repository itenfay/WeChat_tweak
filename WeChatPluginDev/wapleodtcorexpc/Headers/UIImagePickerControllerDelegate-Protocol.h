//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIImage, UIImagePickerController;

@protocol UIImagePickerControllerDelegate <NSObject>

@optional
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg1;
- (void)imagePickerController:(UIImagePickerController *)arg1 didFinishPickingMediaWithInfo:(NSDictionary *)arg2;
- (void)imagePickerController:(UIImagePickerController *)arg1 didFinishPickingImage:(UIImage *)arg2 editingInfo:(NSDictionary *)arg3;
@end

